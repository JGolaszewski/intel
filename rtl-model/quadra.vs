`include "quadra.vh"
`timescale 1ns / 1ps

module quadra (
    input  ck_t clk,
    input  rs_t rst_n,
    input  x_t  x,
    output y_t  y
);

    x1_t lut_idx;
    x2_t x2_unsigned;
    assign lut_idx     = x[23:17];
    assign x2_unsigned = x[16:0];

    a_t coeff_a; b_t coeff_b; c_t coeff_c;
    lut my_lut ( .x1(lut_idx), .a(coeff_a), .b(coeff_b), .c(coeff_c) );

    sq_t x2_sq_un;
    square my_square ( .x2(x2_unsigned), .sq(x2_sq_un) );

    logic signed [17:0] x2_s;
    logic signed [34:0] x2_sq_s;
    assign x2_s    = $signed({1'b0, x2_unsigned});
    assign x2_sq_s = $signed({1'b0, x2_sq_un});

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            y <= '0;
        end else begin
            automatic logic signed [12:0] sq_fxd = $signed({1'b0, x2_sq_un}) >>> 22;

            automatic logic signed [29:0] t0_fxd = $signed(coeff_a) <<< 7;

            automatic logic signed [34:0] p1 = $signed(coeff_b) * x2_s;
            automatic logic signed [29:0] t1_fxd = p1 >>> 10; 

            automatic logic signed [30:0] p2 = $signed(coeff_c) * sq_fxd;
            automatic logic signed [29:0] t2_fxd = p2 >>> 11; 

            automatic logic signed [29:0] s_fxd = t0_fxd + t1_fxd + t2_fxd;

            y <= 25'((s_fxd + (30'sd1 << 3)) >>> 4);
        end
    end
endmodule
