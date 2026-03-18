// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024root.h"

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
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.quadra_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
