`include "quadra.vh"
`timescale 1ns / 1ps

module quadra_top (
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);
    dv_t dv_p0, dv_p1, dv_p2;
    always_ff @(posedge clk) begin
        if (!rst_b) {dv_p0, dv_p1, dv_p2} <= '0;
        else        {dv_p0, dv_p1, dv_p2} <= {x_dv, dv_p0, dv_p1};
    end

    y_t y_from_quadra;
    quadra u_quadra (
        .clk(clk),
        .rst_n(rst_b),
        .x(x),
        .y(y_from_quadra)
    );

    y_t y_p1, y_p2;
    always_ff @(posedge clk) begin
        if (!rst_b) {y_p1, y_p2} <= '0;
        else        {y_p1, y_p2} <= {y_from_quadra, y_p1};
    end

    assign y_dv = dv_p2;
    assign y    = y_p2;
endmodule
