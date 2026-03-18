// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_tb__Syms.h"


void Vquadra_tb___024root__trace_chg_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_chg_0\n"); );
    // Init
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_tb___024root__trace_chg_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_chg_0_sub_0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_tb__DOT__x),24);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_tb__DOT__x),25);
        bufp->chgBit(oldp+2,(vlSelfRef.quadra_tb__DOT__rst_n));
        bufp->chgIData(oldp+3,(vlSelfRef.quadra_tb__DOT__file_h),32);
        bufp->chgDouble(oldp+4,(vlSelfRef.quadra_tb__DOT__check_output__Vstatic__x_real));
        bufp->chgDouble(oldp+6,(vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_expected));
        bufp->chgDouble(oldp+8,(vlSelfRef.quadra_tb__DOT__check_output__Vstatic__y_rtl_real));
        bufp->chgDouble(oldp+10,(vlSelfRef.quadra_tb__DOT__check_output__Vstatic__error_delta));
    }
    bufp->chgBit(oldp+12,(vlSelfRef.quadra_tb__DOT__clk));
}

void Vquadra_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_cleanup\n"); );
    // Init
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
