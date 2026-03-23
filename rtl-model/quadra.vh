// quadra.vh

`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;          //         =  1
localparam int  X_F = 23;          //         = 23
localparam int  X_W = X_I + X_F;   //  1 + 23 = 24 (u1.23)

typedef logic [X_W-1:0] x_t;

// y [-2,2) -> s2.23
localparam int  Y_I =  2;          //         =  2
localparam int  Y_F = 23;          //         = 23
localparam int  Y_W = Y_I + Y_F;   //  2 + 23 = 25 (s2.23)

typedef logic signed [Y_W-1:0] y_t;

// --------------------------------------------------------------------------------
// Internal precision:
// --------------------------------------------------------------------------------

// SUM
localparam int R_F = 4;

localparam int S_I = Y_I;
localparam int S_F = Y_F + R_F;  // (4 extra fractional bits to be rounded)
localparam int S_W = S_I + S_F;

typedef logic signed [S_W-1:0] s_t; // s = t0 + t1 + t2

// INPUT DIVIDE
localparam int X1_I =  1;          // integer part
localparam int X1_F =  6;          // fractional part
localparam int X1_W = X1_I + X1_F; // bit width

typedef logic [X1_W-1:0] x1_t;

localparam int X2_I =  0;          // integer part
localparam int X2_J = X2_I - X1_F; // (this is key for proper alignment)
localparam int X2_F =  X_W - X1_W; // fractional part
localparam int X2_W = X2_I + X2_F; // bit width

typedef logic [X2_W-1:0] x2_t;

// COEFF
localparam int A_I =  2;
localparam int A_F = 20;
localparam int A_W = A_I + A_F;

typedef logic signed [A_W-1:0] a_t;

localparam int B_I =  3;
localparam int B_F = 14;
localparam int B_W = B_I + B_F;

typedef logic signed [B_W-1:0] b_t;

localparam int C_I =  3;
localparam int C_F = 14;
localparam int C_W = C_I + C_F;

typedef logic signed [C_W-1:0] c_t;


// SQUARE
localparam int SQ_I = X2_I + X2_I;
localparam int SQ_F = 24;
localparam int SQ_W = SQ_I + SQ_F;

localparam int SQ_FULL_W = X2_W * 2;    
localparam int SQ_DROP = (2 * X_F) - SQ_F;

typedef logic [SQ_W-1:0] sq_t;
typedef logic [SQ_FULL_W-1:0] sq_full_t;

// MULTIPLICATIONS
localparam int T0_I = A_I;
localparam int T0_F = S_F;
localparam int T0_W = T0_I + T0_F;
localparam int T0_PAD = S_F - A_F;

typedef logic signed [T0_W-1:0] t0_t;

localparam int T1_I = B_I + X2_I;
localparam int T1_F = S_F;
localparam int T1_W = T1_I + T1_F;
localparam int T1_FULL_W = B_W + X2_W + 1;
localparam int T1_FRAC_DROP = B_F + X_F - S_F;

typedef logic signed [T1_W-1:0] t1_t;
typedef logic signed [T1_FULL_W-1:0] t1_full_t;

localparam int T2_I = C_I;
localparam int T2_F = S_F;
localparam int T2_W = T2_I + T2_F;
localparam int T2_FULL_W = C_W + SQ_W + 1;
localparam int T2_FRAC_DROP = C_F + X_F - S_F + 1;

typedef logic signed [T2_W-1:0] t2_t;
typedef logic signed [T2_FULL_W-1:0] t2_full_t;

`endif
