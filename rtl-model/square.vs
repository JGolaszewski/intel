`include "quadra.vh"

module square
(
    input  x2_t x2,
    output sq_t sq
);
    // Compute x2^2:
    always_comb sq = sq_full_t'(x2 * x2) >> SQ_DROP;

endmodule    
