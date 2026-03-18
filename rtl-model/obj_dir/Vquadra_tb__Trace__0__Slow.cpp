// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_tb__Syms.h"


VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP__0(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("quadra_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2,0,"x_dv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+13,0,"y_dv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rst_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"file_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"x_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,0,"x_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+16,0,"x_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("stimulus", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+13,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"y_from_quadra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+20,0,"y_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+12,0,"y_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("u_quadra", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+5,0,"lut_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+6,0,"x2_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"coeff_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+32,0,"coeff_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"coeff_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+7,0,"x2_sq_un",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+9,0,"x2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+10,0,"x2_sq_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->pushPrefix("my_lut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+31,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+32,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_square", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+7,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"sq_fxd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+22,0,"t0_fxd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declQuad(c+23,0,"p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+25,0,"t1_fxd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+26,0,"p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBus(c+27,0,"t2_fxd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+28,0,"s_fxd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_sub__TOP____024unit__0(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+36,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"A_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"B_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_init_top(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_init_top\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vquadra_tb___024root__trace_register(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_register\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vquadra_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vquadra_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vquadra_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_const_0\n"); );
    // Init
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_const_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_const_0_sub_0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+34,(1U),32);
    bufp->fullIData(oldp+35,(0x17U),32);
    bufp->fullIData(oldp+36,(0x18U),32);
    bufp->fullIData(oldp+37,(2U),32);
    bufp->fullIData(oldp+38,(0x19U),32);
    bufp->fullIData(oldp+39,(0x16U),32);
    bufp->fullIData(oldp+40,(0x11U),32);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_full_0\n"); );
    // Init
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_full_0_sub_0(Vquadra_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root__trace_full_0_sub_0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.quadra_tb__DOT__x),24);
    bufp->fullBit(oldp+2,(vlSelfRef.quadra_tb__DOT__x_dv));
    bufp->fullIData(oldp+3,(vlSelfRef.quadra_tb__DOT__file_h),32);
    bufp->fullIData(oldp+4,(vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+5,((0x7fU & (vlSelfRef.quadra_tb__DOT__x 
                                      >> 0x11U))),7);
    bufp->fullIData(oldp+6,((0x1ffffU & vlSelfRef.quadra_tb__DOT__x)),17);
    bufp->fullQData(oldp+7,((0x3ffffffffULL & ((QData)((IData)(
                                                               (0x1ffffU 
                                                                & vlSelfRef.quadra_tb__DOT__x))) 
                                               * (QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & vlSelfRef.quadra_tb__DOT__x)))))),34);
    bufp->fullIData(oldp+9,((0x1ffffU & vlSelfRef.quadra_tb__DOT__x)),18);
    bufp->fullQData(oldp+10,((0x3ffffffffULL & ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & vlSelfRef.quadra_tb__DOT__x))) 
                                                * (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & vlSelfRef.quadra_tb__DOT__x)))))),35);
    bufp->fullIData(oldp+12,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_p2),25);
    bufp->fullBit(oldp+13,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2));
    bufp->fullIData(oldp+14,(vlSelfRef.quadra_tb__DOT__x_d1),24);
    bufp->fullIData(oldp+15,(vlSelfRef.quadra_tb__DOT__x_d2),24);
    bufp->fullIData(oldp+16,(vlSelfRef.quadra_tb__DOT__x_d3),24);
    bufp->fullBit(oldp+17,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0));
    bufp->fullBit(oldp+18,(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1));
    bufp->fullIData(oldp+19,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_from_quadra),25);
    bufp->fullIData(oldp+20,(vlSelfRef.quadra_tb__DOT__u0__DOT__y_p1),25);
    bufp->fullSData(oldp+21,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd),13);
    bufp->fullIData(oldp+22,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd),30);
    bufp->fullQData(oldp+23,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1),35);
    bufp->fullIData(oldp+25,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd),30);
    bufp->fullIData(oldp+26,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2),31);
    bufp->fullIData(oldp+27,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd),30);
    bufp->fullIData(oldp+28,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd),30);
    bufp->fullBit(oldp+29,(vlSelfRef.quadra_tb__DOT__clk));
    bufp->fullBit(oldp+30,(vlSelfRef.quadra_tb__DOT__rst_b));
    bufp->fullIData(oldp+31,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a),22);
    bufp->fullIData(oldp+32,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b),17);
    bufp->fullIData(oldp+33,(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c),17);
}
