// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024root.h"

void Vquadra_tb___024root___ctor_var_reset(Vquadra_tb___024root* vlSelf);

Vquadra_tb___024root::Vquadra_tb___024root(Vquadra_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vquadra_tb___024root___ctor_var_reset(this);
}

void Vquadra_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vquadra_tb___024root::~Vquadra_tb___024root() {
}
