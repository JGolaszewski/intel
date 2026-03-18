// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_tb.h for the primary calling header

#ifndef VERILATED_VQUADRA_TB___024ROOT_H_
#define VERILATED_VQUADRA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vquadra_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ quadra_tb__DOT__clk;
    CData/*0:0*/ quadra_tb__DOT__x_dv;
    CData/*0:0*/ quadra_tb__DOT__rst_b;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p0;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p1;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd;
    IData/*23:0*/ quadra_tb__DOT__x;
    IData/*31:0*/ quadra_tb__DOT__file_h;
    IData/*23:0*/ quadra_tb__DOT__x_d1;
    IData/*23:0*/ quadra_tb__DOT__x_d2;
    IData/*23:0*/ quadra_tb__DOT__x_d3;
    IData/*31:0*/ quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__y_from_quadra;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__y_p1;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__y_p2;
    IData/*21:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a;
    IData/*16:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b;
    IData/*16:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd;
    IData/*30:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd;
    IData/*29:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd;
    IData/*31:0*/ __VactIterCount;
    QData/*34:0*/ quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h845832be__0;
    VlTriggerScheduler __VtrigSched_h8458327f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_tb___024root(Vquadra_tb__Syms* symsp, const char* v__name);
    ~Vquadra_tb___024root();
    VL_UNCOPYABLE(Vquadra_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
