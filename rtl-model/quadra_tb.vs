`include "quadra.vh"

`timescale 1ps/1ps

`define T_CLK 1000 // clock period [ps]

module quadra_tb ();
    //----------------------------------------------------------------------------
    // Signals
    //----------------------------------------------------------------------------
    x_t  x;
    dv_t x_dv;
    y_t  y;
    dv_t y_dv;
    ck_t clk;
    rs_t rst_b;

    integer file_h;

    x_t x_d1, x_d2, x_d3;

    always @(posedge clk) begin
        x_d1 <= x;
        x_d2 <= x_d1;
        x_d3 <= x_d2;
    end

    // --------------------------------------------------------------------------------
    // DUT
    // --------------------------------------------------------------------------------
    quadra_top u0 (
        .clk   (clk),
        .rst_b (rst_b),
        .x     (x),
        .x_dv  (x_dv),
        .y     (y),
        .y_dv  (y_dv)
    );

    // --------------------------------------------------------------------------------
    // Clock & Reset
    // --------------------------------------------------------------------------------
    initial begin: clock_init
        clk = 1'b0;
        forever #(`T_CLK/2) clk = ~clk;
    end

    initial begin: reset_init
        rst_b = 1'b1;
        repeat(2) @(posedge clk);
        rst_b = 1'b0;
        repeat(1) @(posedge clk);
        rst_b = 1'b1;
    end

    // --------------------------------------------------------------------------------
    // Stimulus
    // --------------------------------------------------------------------------------
    initial begin: stimulus
        file_h = $fopen("rtl_results.txt", "w");
        if (file_h == 0) begin
            $finish;
        end

        x = 0;
        x_dv = 0;
        repeat (15) @(posedge clk); 


        for (int i = 0; i < 8192; i++) begin
            @(negedge clk);
            x = 24'(i << 11); 
            x_dv = 1'b1;
        end

        @(negedge clk);
        x_dv = 1'b0;
        x = 0;

        repeat (25) @(posedge clk); 
        
        $fclose(file_h);
        $display("Symulacja zakończona.");
        $finish;
    end

    // --------------------------------------------------------------------------------
    // Save results
    // --------------------------------------------------------------------------------
    always @(posedge clk) begin
        if (y_dv) begin
            // Reverted to x_d3 to match the 3-cycle latency of quadra_top
            $fdisplay(file_h, "%h %d", x_d3, y); 
        end
    end

//    initial
//    begin
//
//        $display ("Started quadra_tb ...");
//
//        x    = '0;
//        x_dv = 1'b0;
//
//        // flush pipeline:
//        repeat (10) @(posedge clk); 
//
//        x    = 24'h7fffff;
//        x_dv = 1'b1;
//
//        $display("x = 0x%08h", x);
//
//        repeat (1) @(posedge clk); 
//
//        x    = '0;
//        x_dv = 1'b0;
//
//        repeat (2) @(posedge clk); 
//
//        $display("y = 0x%011h", y);
//        
//        repeat (10) @(posedge clk); 
//        
//        $display("Simulation finished.");
//
//        $finish;
//    end
  
endmodule
