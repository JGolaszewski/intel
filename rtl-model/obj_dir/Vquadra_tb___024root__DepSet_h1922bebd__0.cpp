// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX("\n--- Starting Direct Output Evaluation ---\n",0);
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x756c7473U;
    __Vtemp_1[2U] = 0x5f726573U;
    __Vtemp_1[3U] = 0x72746cU;
    vlSelfRef.quadra_tb__DOT__file_h = VL_FOPEN_NN(
                                                   VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                                                   , 
                                                   std::string{"w"});
    ;
    vlSelfRef.quadra_tb__DOT__x = 0U;
    vlSelfRef.quadra_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.quadra_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.quadra_tb__DOT__x = 0x7fffffU;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.quadra_tb__DOT__check_output__Vstatic__x_real 
        = (VL_ITOR_D_I(24, vlSelfRef.quadra_tb__DOT__x) 
           / 8.38860800000000000e+06);
    vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_expected 
        = sin(((2.0 * vlSelfRef.quadra_tb__DOT__check_output__Vstatic__x_real) 
               - 7.85398163397448279e-01));
    vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_rtl_real 
        = (VL_ISTOR_D_I(25, vlSelfRef.quadra_tb__DOT__y) 
           / 8.38860800000000000e+06);
    vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta 
        = (vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_expected 
           - vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_rtl_real);
    if ((vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta 
         < 0.0)) {
        vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta 
            = (- vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta);
    }
    VL_WRITEF_NX("------------------------------------------------------------\nInput x       : Hex: 0x%x  | Real: %f\nMATH MODEL (y):              | Real: %f\nRTL RESULT (y): Hex: 0x%x  | Real: %f\nERROR DELTA   :              | Diff: %f\n",0,
                 24,vlSelfRef.quadra_tb__DOT__x,64,
                 vlSelfRef.quadra_tb__DOT__check_output__Vstatic__x_real,
                 64,vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_expected,
                 25,vlSelfRef.quadra_tb__DOT__y,64,
                 vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_rtl_real,
                 64,vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta);
    if (VL_UNLIKELY(((vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta 
                      > 5.00000000000000010e-03)))) {
        VL_WRITEF_NX("[%0t] %%Error: quadra_tb.vs:71: Assertion failed in %Nquadra_tb.check_output: STATUS: FAIL - Tolerance Exceeded!\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("quadra_tb.vs", 71, "");
    } else {
        VL_WRITEF_NX("STATUS: PASS\n",0);
    }
    VL_WRITEF_NX("------------------------------------------------------------\n\n",0);
    if (VL_UNLIKELY(((0U != vlSelfRef.quadra_tb__DOT__file_h)))) {
        VL_FWRITEF_NX(vlSelfRef.quadra_tb__DOT__file_h,"%x %9d\n",0,
                      24,vlSelfRef.quadra_tb__DOT__x,
                      25,vlSelfRef.quadra_tb__DOT__y);
    }
    VL_FCLOSE_I(vlSelfRef.quadra_tb__DOT__file_h); VL_WRITEF_NX("Symulacja zako\305\204czona.\n",0);
    VL_FINISH_MT("quadra_tb.vs", 111, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_tb___024root___eval_triggers__act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_triggers__act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.quadra_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
