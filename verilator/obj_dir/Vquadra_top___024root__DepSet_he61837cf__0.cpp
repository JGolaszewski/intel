// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

void Vquadra_top___024root___ico_sequent__TOP__0(Vquadra_top___024root* vlSelf);

void Vquadra_top___024root___eval_ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vquadra_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<IData/*21:0*/, 1024> Vquadra_top__ConstPool__TABLE_h10318558_0;
extern const VlUnpacked<IData/*21:0*/, 1024> Vquadra_top__ConstPool__TABLE_h42ae70b1_0;
extern const VlUnpacked<IData/*21:0*/, 1024> Vquadra_top__ConstPool__TABLE_h89b5ee39_0;

VL_INLINE_OPT void Vquadra_top___024root___ico_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ico_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (0x3ffU & (vlSelfRef.x >> 0xeU));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_a_raw 
        = Vquadra_top__ConstPool__TABLE_h10318558_0
        [__Vtableidx1];
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_b_raw 
        = Vquadra_top__ConstPool__TABLE_h42ae70b1_0
        [__Vtableidx1];
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_c_raw 
        = Vquadra_top__ConstPool__TABLE_h89b5ee39_0
        [__Vtableidx1];
}

void Vquadra_top___024root___eval_triggers__ico(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vquadra_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vquadra_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vquadra_top___024root___eval_act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf);

void Vquadra_top___024root___eval_nba(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_nba\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_c 
        = vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_c_raw;
    vlSelfRef.quadra_top__DOT__dv_p2 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.quadra_top__DOT__dv_p1));
    vlSelfRef.y = (0x1ffffffU & ((VL_EXTENDS_II(25,22, vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_lut_a) 
                                  + VL_EXTENDS_II(25,17, vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_1)) 
                                 + VL_EXTENDS_II(25,8, (IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_2))));
    vlSelfRef.y_dv = vlSelfRef.quadra_top__DOT__dv_p2;
    vlSelfRef.quadra_top__DOT__dv_p1 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.quadra_top__DOT__dv_p0));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_2 
        = (0xffU & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_raw_2 
                    >> 0x14U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c2_lut_a 
        = (0x3ffff8U & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_a 
                        << 3U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_1 
        = (0x1ffffU & (IData)((0x1ffffULL & (VL_MULS_QQQ(37, 
                                                         (0x1fffffffffULL 
                                                          & VL_EXTENDS_QI(37,22, vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_b)), 
                                                         (0x1fffffffffULL 
                                                          & VL_EXTENDS_QI(37,15, (IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x_l)))) 
                                             >> 0x14U))));
    vlSelfRef.quadra_top__DOT__dv_p0 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.x_dv));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_a 
        = vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_a_raw;
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_b 
        = vlSelfRef.quadra_top__DOT__u_quadra__DOT__lut_b_raw;
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x_l 
        = (0x3fffU & vlSelfRef.x);
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_in 
        = (0xfU & ((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_x_l) 
                   >> 5U));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_raw 
        = (0x7ffffU & ((IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_in) 
                       * (IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_in)));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_out 
        = (0x1fU & (vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_raw 
                    >> 0xdU));
    vlSelfRef.quadra_top__DOT__u_quadra__DOT__mult_raw_2 
        = (0xfffffffU & VL_MULS_III(28, (0xfffffffU 
                                         & VL_EXTENDS_II(28,22, vlSelfRef.quadra_top__DOT__u_quadra__DOT__c1_lut_c)), 
                                    (0xfffffffU & VL_EXTENDS_II(28,6, (IData)(vlSelfRef.quadra_top__DOT__u_quadra__DOT__x_sq_out)))));
}

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vquadra_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_top___024root___eval_phase__nba(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__nba\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/jgolaszewski/intel/rtl-model/quadra_top.vs", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vquadra_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/jgolaszewski/intel/rtl-model/quadra_top.vs", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vquadra_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/jgolaszewski/intel/rtl-model/quadra_top.vs", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vquadra_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vquadra_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_debug_assertions\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_b & 0xfeU)))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY(((vlSelfRef.x & 0xff000000U)))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY(((vlSelfRef.x_dv & 0xfeU)))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
