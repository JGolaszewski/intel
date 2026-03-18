// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb___024root.h"

VL_ATTR_COLD void Vquadra_tb___024root___eval_static(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_static\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelfRef.quadra_tb__DOT__clk;
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_final(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_final\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_settle(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_settle\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("quadra_tb.vs", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vquadra_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vquadra_tb___024root___act_comb__TOP__0(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vquadra_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_triggers__stl(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__stl\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vquadra_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge quadra_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge quadra_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__nba(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__nba\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge quadra_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge quadra_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_tb___024root___ctor_var_reset(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___ctor_var_reset\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->quadra_tb__DOT__x = VL_RAND_RESET_I(24);
    vlSelf->quadra_tb__DOT__x_dv = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__rst_b = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__file_h = 0;
    vlSelf->quadra_tb__DOT__x_d1 = VL_RAND_RESET_I(24);
    vlSelf->quadra_tb__DOT__x_d2 = VL_RAND_RESET_I(24);
    vlSelf->quadra_tb__DOT__x_d3 = VL_RAND_RESET_I(24);
    vlSelf->quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__y_from_quadra = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__y_p1 = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__y_p2 = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a = VL_RAND_RESET_I(22);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b = VL_RAND_RESET_I(17);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c = VL_RAND_RESET_I(17);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd = VL_RAND_RESET_I(13);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd = VL_RAND_RESET_I(30);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1 = VL_RAND_RESET_Q(35);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd = VL_RAND_RESET_I(30);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2 = VL_RAND_RESET_I(31);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd = VL_RAND_RESET_I(30);
    vlSelf->quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd = VL_RAND_RESET_I(30);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
