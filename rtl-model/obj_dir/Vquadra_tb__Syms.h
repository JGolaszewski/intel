// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQUADRA_TB__SYMS_H_
#define VERILATED_VQUADRA_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vquadra_tb.h"

// INCLUDE MODULE CLASSES
#include "Vquadra_tb___024root.h"
#include "Vquadra_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vquadra_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vquadra_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vquadra_tb___024root           TOP;

    // CONSTRUCTORS
    Vquadra_tb__Syms(VerilatedContext* contextp, const char* namep, Vquadra_tb* modelp);
    ~Vquadra_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
