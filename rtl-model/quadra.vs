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

    x1_t x1;
    x2_t x2;

    a_t a;
    b_t b;
    c_t c;

    always_comb begin
        x1 = x[X_W-1 : X2_W];
        x2 = x[X2_W-1 : 0];
    end

    lut u_lut (
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );

    // --- Cycle 1 ---
    a_t c1_a;
    b_t c1_b;
    c_t c1_c;
    x2_t c1_x2;

    always_ff @(posedge clk) begin
        c1_a <= a;
        c1_b <= b;
        c1_c <= c;

        c1_x2 <= x2;
    end

    // --- Cycle 2 ---
    t0_t c2_t0;
    t1_t c2_t1;
    t2_t c2_t2;

    sq_t sq;
    
    square u_square(
        .x2(c1_x2),
        .sq(sq)
    );

    always_ff @(posedge clk) begin
        c2_t0 <= t0_t'(c1_a) << T0_PAD;
        c2_t1 <= t1_full_t'(c1_b * $signed({1'b0, c1_x2})) >>> T1_FRAC_DROP;
        c2_t2 <= t2_full_t'(c1_c * $signed({1'b0, sq})) >>> T2_FRAC_DROP;
    end

    // --- Cycle 3 ---
    s_t s;
    logic signed [S_W - R_F - 1 : 0] keep_bits;
    logic guard_bit;
    logic sticky_bit;
    logic round_up;

    always_comb begin
        s = s_t'(c2_t0 + c2_t1 + c2_t2);
        
        keep_bits = s[S_W-1 : R_F];
        guard_bit = s[R_F - 1];
        
        if (R_F > 1) begin
            sticky_bit = (s[R_F - 2 : 0] != '0); 
        end else begin
            sticky_bit = 1'b0; 
        end
        
        round_up = guard_bit & (sticky_bit | keep_bits[0]);
    end

    always_ff @(posedge clk) begin
        y <= y_t'(keep_bits + round_up); 
    end

endmodule
