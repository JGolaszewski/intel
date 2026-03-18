//
// Quadratic polynomial:  f(x) = a + b*x2 + c*(x2^2)
//

`include "quadra.vh"

module quadra
(
    input ck_t clk,
    input rs_t rst_b,
    input x_t x,
    output y_t y
);

    x1_t x_m; // 7bits
    x2_t x_l; // 14 bits

    // Read LUT for x_m
    a_t lut_a_raw;
    b_t lut_b_raw;
    c_t lut_c_raw;


    // Rewire x_l, x_m
    always_comb begin
        x_m = x[X_W-1 : XL_W];
        x_l = x[XL_W-1 : 0];
    end

    // Connect lut
    lut u_lut (
        .x1(x_m),
        .a(lut_a_raw),
        .b(lut_b_raw),
        .c(lut_c_raw)
    );

    // --- Cycle 1 ---
    a_t c1_lut_a;
    b_t c1_lut_b;
    c_t c1_lut_c;
    x2_t c1_x_l;

    always_ff @(posedge clk) begin
        c1_lut_a <= lut_a_raw;
        c1_lut_b <= lut_b_raw;
        c1_lut_c <= lut_c_raw;

        c1_x_l <= x_l;
    end

    // --- Cycle 2 ---

    // Multiplication
    a_t c2_lut_a;
    mult1_t mult_1; mult1_raw_t mult_raw_1;
    mult2_t mult_2; mult2_raw_t mult_raw_2;

    // Squaring N - M - T
    sq_in_t x_sq_in;
    sq_raw_t x_sq_raw;
    sq_out_t x_sq_out;

    always_comb begin
        x_sq_in = c1_x_l[SQ_W-1 : T];

        // Square N-M-T
        x_sq_raw = x_sq_in * x_sq_in;
        x_sq_out = x_sq_raw[SQ_OUT_W_NO_T-1:SQ_OUT_T];
        
        // Multiply B * X_L
        mult_raw_1 = c1_lut_b * $signed({1'b0, c1_x_l});

        // Multiply C * Square
        mult_raw_2 = c1_lut_c * $signed({1'b0, x_sq_out});
    end


    always_ff @(posedge clk) begin
        c2_lut_a <= {c1_lut_a, {A_PAD{1'b0}}};

        mult_1 <= mult_raw_1[MULT1_W_NO_T-1:MULT1_T];
        mult_2 <= mult_raw_2[MULT2_W_NO_T-1:MULT2_T];
    end

    // CYCLE 3
    always_ff @(posedge clk) begin
        y <= c2_lut_a + mult_1 + mult_2;
    end

endmodule
