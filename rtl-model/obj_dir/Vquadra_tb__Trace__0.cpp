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
        bufp->chgBit(oldp+1,(vlSelfRef.quadra_tb__DOT__x_dv));
        bufp->chgIData(oldp+2,(vlSelfRef.quadra_tb__DOT__file_h),32);
        bufp->chgIData(oldp+3,(vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+4,((0x7fU & (vlSelfRef.quadra_tb__DOT__x 
                                         >> 0x11U))),7);
        bufp->chgIData(oldp+5,((0x1ffffU & vlSelfRef.quadra_tb__DOT__x)),17);
        bufp->chgQData(oldp+6,((0x3ffffffffULL & ((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & vlSelfRef.quadra_tb__DOT__x))) 
                                                  * (QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & vlSelfRef.quadra_tb__DOT__x)))))),34);
        bufp->chgIData(oldp+8,((0x1ffffU & vlSelfRef.quadra_tb__DOT__x)),18);
        bufp->chgQData(oldp+9,((0x3ffffffffULL & ((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & vlSelfRef.quadra_tb__DOT__x))) 
                                                  * (QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & vlSelfRef.quadra_tb__DOT__x)))))),35);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+11,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_p2),25);
        bufp->chgBit(oldp+12,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2));
        bufp->chgIData(oldp+13,(vlSelfRef.quadra_tb__DOT__x_d1),24);
        bufp->chgIData(oldp+14,(vlSelfRef.quadra_tb__DOT__x_d2),24);
        bufp->chgIData(oldp+15,(vlSelfRef.quadra_tb__DOT__x_d3),24);
        bufp->chgBit(oldp+16,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0));
        bufp->chgBit(oldp+17,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1));
        bufp->chgIData(oldp+18,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_from_quadra),25);
        bufp->chgIData(oldp+19,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_p1),25);
        bufp->chgSData(oldp+20,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd),13);
        bufp->chgIData(oldp+21,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd),30);
        bufp->chgQData(oldp+22,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1),35);
        bufp->chgIData(oldp+24,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd),30);
        bufp->chgIData(oldp+25,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2),31);
        bufp->chgIData(oldp+26,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd),30);
        bufp->chgIData(oldp+27,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd),30);
    }
    bufp->chgBit(oldp+28,(vlSelfRef.quadra_tb__DOT__clk));
    bufp->chgBit(oldp+29,(vlSelfRef.quadra_tb__DOT__rst_b));
    bufp->chgIData(oldp+30,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a),22);
    bufp->chgIData(oldp+31,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b),17);
    bufp->chgIData(oldp+32,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c),17);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
