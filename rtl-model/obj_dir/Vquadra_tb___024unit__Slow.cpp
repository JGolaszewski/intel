// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024unit.h"

void Vquadra_tb___024unit___ctor_var_reset(Vquadra_tb___024unit* vlSelf);

Vquadra_tb___024unit::Vquadra_tb___024unit(Vquadra_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vquadra_tb___024unit___ctor_var_reset(this);
}

void Vquadra_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vquadra_tb___024unit::~Vquadra_tb___024unit() {
}
