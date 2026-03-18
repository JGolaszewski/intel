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
    CData/*0:0*/ quadra_tb__DOT__rst_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ quadra_tb__DOT__x;
    IData/*24:0*/ quadra_tb__DOT__y;
    IData/*31:0*/ quadra_tb__DOT__file_h;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    double quadra_tb__DOT__check_output__Vstatic__x_real;
    double quadra_tb__DOT__check_output__Vstatic__y_expected;
    double quadra_tb__DOT__check_output__Vstatic__y_rtl_real;
    double quadra_tb__DOT__check_output__Vstatic__error_delta;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h845832be__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
