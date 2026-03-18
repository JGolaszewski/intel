// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vquadra_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vquadra_tb::Vquadra_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vquadra_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vquadra_tb::Vquadra_tb(const char* _vcname__)
    : Vquadra_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vquadra_tb::~Vquadra_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vquadra_tb___024root___eval_debug_assertions(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vquadra_tb___024root___eval_static(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval_initial(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval_settle(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval(Vquadra_tb___024root* vlSelf);

void Vquadra_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vquadra_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vquadra_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vquadra_tb___024root___eval_static(&(vlSymsp->TOP));
        Vquadra_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vquadra_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vquadra_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vquadra_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vquadra_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vquadra_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vquadra_tb___024root___eval_final(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb::final() {
    Vquadra_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vquadra_tb::hierName() const { return vlSymsp->name(); }
const char* Vquadra_tb::modelName() const { return "Vquadra_tb"; }
unsigned Vquadra_tb::threads() const { return 1; }
void Vquadra_tb::prepareClone() const { contextp()->prepareClone(); }
void Vquadra_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vquadra_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vquadra_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vquadra_tb___024root__trace_init_top(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vquadra_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_tb___024root*>(voidSelf);
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_tb___024root__trace_decl_types(tracep);
    Vquadra_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_tb___024root__trace_register(Vquadra_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vquadra_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vquadra_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
