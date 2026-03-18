// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb___024root.h"

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf);

void Vquadra_tb___024root___eval_initial(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quadra_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "quadra_tb.vs", 
                                             45);
        vlSelfRef.quadra_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.quadra_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quadra_tb__DOT__rst_b = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         50);
    vlSelfRef.quadra_tb__DOT__rst_b = 0U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         52);
    vlSelfRef.quadra_tb__DOT__rst_b = 1U;
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x756c7473U;
    __Vtemp_1[2U] = 0x5f726573U;
    __Vtemp_1[3U] = 0x72746cU;
    vlSelfRef.quadra_tb__DOT__file_h = VL_FOPEN_NN(
                                                   VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                                                   , 
                                                   std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.quadra_tb__DOT__file_h)))) {
        VL_FINISH_MT("quadra_tb.vs", 62, "");
    }
    vlSelfRef.quadra_tb__DOT__x = 0U;
    vlSelfRef.quadra_tb__DOT__x_dv = 0U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h8458327f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge quadra_tb.clk)", 
                                                             "quadra_tb.vs", 
                                                             71);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.quadra_tb__DOT__x = (0xffffffU & 
                                       VL_SHIFTL_III(24,32,32, vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i, 0xbU));
        vlSelfRef.quadra_tb__DOT__x_dv = 1U;
        vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.quadra_tb__DOT__stimulus__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h8458327f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.quadra_tb__DOT__x_dv = 0U;
    vlSelfRef.quadra_tb__DOT__x = 0U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h845832be__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge quadra_tb.clk)", 
                                                         "quadra_tb.vs", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FCLOSE_I(vlSelfRef.quadra_tb__DOT__file_h); VL_WRITEF_NX("Symulacja zako\305\204czona.\n",0);
    VL_FINISH_MT("quadra_tb.vs", 84, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vquadra_tb___024root___act_comb__TOP__0(Vquadra_tb___024root* vlSelf);

void Vquadra_tb___024root___eval_act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vquadra_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<IData/*21:0*/, 128> Vquadra_tb__ConstPool__TABLE_hb7d20138_0;
extern const VlUnpacked<IData/*16:0*/, 128> Vquadra_tb__ConstPool__TABLE_h07b2d8b8_0;
extern const VlUnpacked<IData/*16:0*/, 128> Vquadra_tb__ConstPool__TABLE_h96de84a4_0;

VL_INLINE_OPT void Vquadra_tb___024root___act_comb__TOP__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___act_comb__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (0x7fU & (vlSelfRef.quadra_tb__DOT__x 
                             >> 0x11U));
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a 
        = Vquadra_tb__ConstPool__TABLE_hb7d20138_0[__Vtableidx1];
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b 
        = Vquadra_tb__ConstPool__TABLE_h07b2d8b8_0[__Vtableidx1];
    vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c 
        = Vquadra_tb__ConstPool__TABLE_h96de84a4_0[__Vtableidx1];
}

void Vquadra_tb___024root___nba_sequent__TOP__0(Vquadra_tb___024root* vlSelf);

void Vquadra_tb___024root___eval_nba(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_nba\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vquadra_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vquadra_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vquadra_tb___024root___nba_sequent__TOP__0(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___nba_sequent__TOP__0\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2))) {
        VL_FWRITEF_NX(vlSelfRef.quadra_tb__DOT__file_h,"%x %9d\n",0,
                      24,vlSelfRef.quadra_tb__DOT__x_d3,
                      25,vlSelfRef.quadra_tb__DOT__u0__DOT__y_p2);
    }
    vlSelfRef.quadra_tb__DOT__x_d3 = vlSelfRef.quadra_tb__DOT__x_d2;
    vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p2 = ((IData)(vlSelfRef.quadra_tb__DOT__rst_b) 
                                                && (IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1));
    if (vlSelfRef.quadra_tb__DOT__rst_b) {
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_p2 = vlSelfRef.quadra_tb__DOT__u0__DOT__y_p1;
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_p1 = vlSelfRef.quadra_tb__DOT__u0__DOT__y_from_quadra;
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd 
            = (0x1fffU & (IData)((0x7ffffffffULL & 
                                  VL_SHIFTRS_QQI(35,35,32, 
                                                 (0x3ffffffffULL 
                                                  & ((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & vlSelfRef.quadra_tb__DOT__x))) 
                                                     * (QData)((IData)(
                                                                       (0x1ffffU 
                                                                        & vlSelfRef.quadra_tb__DOT__x))))), 0x16U))));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd 
            = (0x3fffffffU & VL_SHIFTL_III(30,30,32, 
                                           VL_EXTENDS_II(30,22, vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_a), 7U));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1 
            = (0x7ffffffffULL & VL_MULS_QQQ(35, (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_b)), 
                                            (0x7ffffffffULL 
                                             & VL_EXTENDS_QI(35,18, 
                                                             (0x1ffffU 
                                                              & vlSelfRef.quadra_tb__DOT__x)))));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd 
            = (0x3fffffffU & (IData)((0x7ffffffffULL 
                                      & VL_SHIFTRS_QQI(35,35,32, vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p1, 0xaU))));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2 
            = (0x7fffffffU & VL_MULS_III(31, (0x7fffffffU 
                                              & VL_EXTENDS_II(31,17, vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__coeff_c)), 
                                         (0x7fffffffU 
                                          & VL_EXTENDS_II(31,13, (IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__sq_fxd)))));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd 
            = (0x3fffffffU & VL_SHIFTRS_III(31,31,32, vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__p2, 0xbU));
        vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd 
            = (0x3fffffffU & ((vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t0_fxd 
                               + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t1_fxd) 
                              + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__t2_fxd));
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_from_quadra 
            = (0x1ffffffU & VL_SHIFTRS_III(30,30,32, 
                                           (0x3fffffffU 
                                            & ((IData)(8U) 
                                               + vlSelfRef.quadra_tb__DOT__u0__DOT__u_quadra__DOT__unnamedblk1__DOT__s_fxd)), 4U));
    } else {
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_p2 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_p1 = 0U;
        vlSelfRef.quadra_tb__DOT__u0__DOT__y_from_quadra = 0U;
    }
    vlSelfRef.quadra_tb__DOT__x_d2 = vlSelfRef.quadra_tb__DOT__x_d1;
    vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p1 = ((IData)(vlSelfRef.quadra_tb__DOT__rst_b) 
                                                && (IData)(vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0));
    vlSelfRef.quadra_tb__DOT__x_d1 = vlSelfRef.quadra_tb__DOT__x;
    vlSelfRef.quadra_tb__DOT__u0__DOT__dv_p0 = ((IData)(vlSelfRef.quadra_tb__DOT__rst_b) 
                                                && (IData)(vlSelfRef.quadra_tb__DOT__x_dv));
}

void Vquadra_tb___024root___timing_resume(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_resume\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h845832be__0.resume(
                                                   "@(posedge quadra_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8458327f__0.resume(
                                                   "@(negedge quadra_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vquadra_tb___024root___timing_commit(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_commit\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h845832be__0.commit(
                                                   "@(posedge quadra_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8458327f__0.commit(
                                                   "@(negedge quadra_tb.clk)");
    }
}

void Vquadra_tb___024root___eval_triggers__act(Vquadra_tb___024root* vlSelf);

bool Vquadra_tb___024root___eval_phase__act(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__act\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_tb___024root___eval_triggers__act(vlSelf);
    Vquadra_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vquadra_tb___024root___timing_resume(vlSelf);
        Vquadra_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_tb___024root___eval_phase__nba(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__nba\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__nba(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_tb___024root___eval(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("quadra_tb.vs", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vquadra_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("quadra_tb.vs", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vquadra_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vquadra_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_tb___024root___eval_debug_assertions(Vquadra_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_debug_assertions\n"); );
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
