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

// A coeff type
localparam int A_F = 20;
localparam int A_I = 2;
localparam int A_W = A_I + A_F;

typedef logic signed [A_W-1:0] a_t;

// B coeff type
localparam int B_F = 20;
localparam int B_I = 2;
localparam int B_W = B_I + B_F;

typedef logic signed [B_W-1:0] b_t;

// C coeff type
localparam int C_F = 20;
localparam int C_I = 2;
localparam int C_W = C_I + C_F;

typedef logic signed [C_W-1:0] c_t;



// Division of X between x_m and x_l
localparam int XL_W = 14;
localparam int XL_F = X_F;
localparam int XM_W = X_W - XL_W;

typedef logic [XM_W-1:0] x1_t;
typedef logic [XL_W-1:0] x2_t;

// Rejected bits for square from x_l
localparam int T = 5;
localparam int SQ_W = XL_W - T;
localparam int SQ_F = XL_F - T;

typedef logic [SQ_W:0] sq_in_t;

localparam int SQ_OUT_W_NO_T = SQ_W * 2;
localparam int SQ_OUT_F_NO_T = SQ_F * 2;

typedef logic [SQ_OUT_W_NO_T:0] sq_raw_t;

localparam int SQ_OUT_T = (SQ_OUT_F_NO_T < Y_F)? 0 : SQ_OUT_F_NO_T - Y_F;
localparam int SQ_OUT_F = (SQ_OUT_F_NO_T < Y_F)? SQ_OUT_F_NO_T : Y_F;
localparam int SQ_OUT_W = SQ_OUT_W_NO_T - SQ_OUT_T;

typedef logic [SQ_OUT_W-1:0] sq_out_t;

// Multiplication types
localparam int MULT1_W_NO_T = XL_W + B_F + B_I + 1;
localparam int MULT1_F_NO_T = B_F + XL_F;

typedef logic signed [MULT1_W_NO_T-1:0] mult1_raw_t;

localparam int MULT1_T = (MULT1_W_NO_T < Y_F)? 0 : MULT1_F_NO_T - Y_F;
localparam int MULT1_W = MULT1_W_NO_T - MULT1_T;

typedef logic signed [MULT1_W-1:0] mult1_t;


localparam int MULT2_W_NO_T = SQ_OUT_W + C_F + C_I + 1;
localparam int MULT2_F_NO_T = C_F + SQ_OUT_F;

typedef logic signed [MULT2_W_NO_T-1:0] mult2_raw_t;

localparam int MULT2_T = (MULT2_W_NO_T < Y_F)? 0 : MULT2_F_NO_T - Y_F;
localparam int MULT2_W = MULT2_W_NO_T - MULT2_T;

typedef logic signed [MULT2_W-1:0] mult2_t;

// Other

localparam int A_PAD = Y_W - A_W;  

`endif
