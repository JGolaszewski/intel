// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_a_raw),22);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_b_raw),22);
        bufp->chgIData(oldp+2,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_c_raw),22);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
        bufp->chgIData(oldp+6,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_a),22);
        bufp->chgIData(oldp+7,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_b),22);
        bufp->chgIData(oldp+8,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_c),22);
        bufp->chgSData(oldp+9,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x_l),14);
        bufp->chgIData(oldp+10,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_lut_a),22);
        bufp->chgIData(oldp+11,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_1),17);
        bufp->chgQData(oldp+12,((0x1fffffffffULL & 
                                 VL_MULS_QQQ(37, (0x1fffffffffULL 
                                                  & VL_EXTENDS_QI(37,22, vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_b)), 
                                             (0x1fffffffffULL 
                                              & VL_EXTENDS_QI(37,15, (IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x_l)))))),37);
        bufp->chgCData(oldp+14,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_2),8);
        bufp->chgIData(oldp+15,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_raw_2),28);
        bufp->chgSData(oldp+16,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_in),10);
        bufp->chgIData(oldp+17,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_raw),19);
        bufp->chgCData(oldp+18,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_out),5);
    }
    bufp->chgBit(oldp+19,(vlSelfRef.clk));
    bufp->chgBit(oldp+20,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+21,(vlSelfRef.x),24);
    bufp->chgBit(oldp+22,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+23,(vlSelfRef.y),25);
    bufp->chgBit(oldp+24,(vlSelfRef.y_dv));
    bufp->chgSData(oldp+25,((0x3ffU & (vlSelfRef.x 
                                       >> 0xeU))),10);
    bufp->chgSData(oldp+26,((0x3fffU & vlSelfRef.x)),14);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
