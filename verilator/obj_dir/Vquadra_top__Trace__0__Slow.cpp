// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_top___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+23,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+25,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("quadra_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+23,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+25,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_quadra", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+24,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+26,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+7,0,"c1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+8,0,"c1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+9,0,"c1_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+10,0,"c1_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+11,0,"c2_t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+12,0,"c2_t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+13,0,"c2_t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+14,0,"sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+15,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+16,0,"keep_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+17,0,"guard_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"sticky_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_square", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+14,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+28,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+29,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+29,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+32,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+33,0,"R_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"S_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"S_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"S_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+28,0,"X1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+36,0,"X1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"X1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"X2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"X2_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"X2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"X2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"A_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+41,0,"A_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"A_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"B_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"B_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"B_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"C_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"C_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"SQ_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+29,0,"SQ_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"SQ_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"SQ_FULL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+29,0,"SQ_DROP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"T0_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"T0_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"T0_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"T0_PAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"T1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"T1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"T1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+47,0,"T1_FULL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"T1_FRAC_DROP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"T2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"T2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"T2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+47,0,"T2_FULL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"T2_FRAC_DROP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_top(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_top\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vquadra_top___024root__trace_register(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_register\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vquadra_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vquadra_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vquadra_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+28,(1U),32);
    bufp->fullIData(oldp+29,(0x17U),32);
    bufp->fullIData(oldp+30,(0x18U),32);
    bufp->fullIData(oldp+31,(2U),32);
    bufp->fullIData(oldp+32,(0x19U),32);
    bufp->fullIData(oldp+33,(4U),32);
    bufp->fullIData(oldp+34,(0x1bU),32);
    bufp->fullIData(oldp+35,(0x1dU),32);
    bufp->fullIData(oldp+36,(6U),32);
    bufp->fullIData(oldp+37,(7U),32);
    bufp->fullIData(oldp+38,(0U),32);
    bufp->fullIData(oldp+39,(0xfffffffaU),32);
    bufp->fullIData(oldp+40,(0x11U),32);
    bufp->fullIData(oldp+41,(0x14U),32);
    bufp->fullIData(oldp+42,(0x16U),32);
    bufp->fullIData(oldp+43,(3U),32);
    bufp->fullIData(oldp+44,(0xeU),32);
    bufp->fullIData(oldp+45,(0x22U),32);
    bufp->fullIData(oldp+46,(0x1eU),32);
    bufp->fullIData(oldp+47,(0x23U),32);
    bufp->fullIData(oldp+48,(0xaU),32);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vquadra_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__a),22);
    bufp->fullIData(oldp+2,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__b),17);
    bufp->fullIData(oldp+3,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c),17);
    bufp->fullBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p0));
    bufp->fullBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p1));
    bufp->fullBit(oldp+6,(vlSelfRef.quadra_top__DOT__dv_p2));
    bufp->fullIData(oldp+7,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_a),22);
    bufp->fullIData(oldp+8,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_b),17);
    bufp->fullIData(oldp+9,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_c),17);
    bufp->fullIData(oldp+10,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x2),17);
    bufp->fullIData(oldp+11,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_t0),29);
    bufp->fullIData(oldp+12,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_t1),30);
    bufp->fullIData(oldp+13,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_t2),30);
    bufp->fullIData(oldp+14,((0x1ffffU & (IData)((0x3ffffffffULL 
                                                  & VL_SHIFTR_QQI(34,34,32, 
                                                                  (0x3ffffffffULL 
                                                                   & ((QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x2)) 
                                                                      * (QData)((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x2)))), 0x17U))))),17);
    bufp->fullIData(oldp+15,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__s),29);
    bufp->fullIData(oldp+16,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__keep_bits),25);
    bufp->fullBit(oldp+17,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__guard_bit));
    bufp->fullBit(oldp+18,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__sticky_bit));
    bufp->fullBit(oldp+19,(vlSelfRef.quadra_top__DOT__u_quadra__DOT__round_up));
    bufp->fullBit(oldp+20,(vlSelfRef.clk));
    bufp->fullBit(oldp+21,(vlSelfRef.rst_b));
    bufp->fullIData(oldp+22,(vlSelfRef.x),24);
    bufp->fullBit(oldp+23,(vlSelfRef.x_dv));
    bufp->fullIData(oldp+24,(vlSelfRef.y),25);
    bufp->fullBit(oldp+25,(vlSelfRef.y_dv));
    bufp->fullCData(oldp+26,((0x7fU & (vlSelfRef.x 
                                       >> 0x11U))),7);
    bufp->fullIData(oldp+27,((0x1ffffU & vlSelfRef.x)),17);
}
