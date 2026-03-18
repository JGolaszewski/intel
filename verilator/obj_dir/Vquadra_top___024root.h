// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_top.h for the primary calling header

#ifndef VERILATED_VQUADRA_TOP___024ROOT_H_
#define VERILATED_VQUADRA_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vquadra_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_b,0,0);
    VL_IN8(x_dv,0,0);
    VL_OUT8(y_dv,0,0);
    CData/*0:0*/ quadra_top__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__dv_p2;
    CData/*7:0*/ quadra_top__DOT__u_quadra__DOT__mult_2;
    CData/*4:0*/ quadra_top__DOT__u_quadra__DOT__x_sq_out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*13:0*/ quadra_top__DOT__u_quadra__DOT__c1_x_l;
    SData/*9:0*/ quadra_top__DOT__u_quadra__DOT__x_sq_in;
    VL_IN(x,23,0);
    VL_OUT(y,24,0);
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__lut_a_raw;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__lut_b_raw;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__lut_c_raw;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__c1_lut_a;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__c1_lut_b;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__c1_lut_c;
    IData/*21:0*/ quadra_top__DOT__u_quadra__DOT__c2_lut_a;
    IData/*16:0*/ quadra_top__DOT__u_quadra__DOT__mult_1;
    IData/*27:0*/ quadra_top__DOT__u_quadra__DOT__mult_raw_2;
    IData/*18:0*/ quadra_top__DOT__u_quadra__DOT__x_sq_raw;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* v__name);
    ~Vquadra_top___024root();
    VL_UNCOPYABLE(Vquadra_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
