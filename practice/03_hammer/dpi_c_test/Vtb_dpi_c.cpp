// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_dpi_c__pch.h"

//============================================================
// Constructors

Vtb_dpi_c::Vtb_dpi_c(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_dpi_c__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_dpi_c::Vtb_dpi_c(const char* _vcname__)
    : Vtb_dpi_c(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_dpi_c::~Vtb_dpi_c() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_dpi_c___024root___eval_debug_assertions(Vtb_dpi_c___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_dpi_c___024root___eval_static(Vtb_dpi_c___024root* vlSelf);
void Vtb_dpi_c___024root___eval_initial(Vtb_dpi_c___024root* vlSelf);
void Vtb_dpi_c___024root___eval_settle(Vtb_dpi_c___024root* vlSelf);
void Vtb_dpi_c___024root___eval(Vtb_dpi_c___024root* vlSelf);

void Vtb_dpi_c::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_dpi_c::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_dpi_c___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_dpi_c___024root___eval_static(&(vlSymsp->TOP));
        Vtb_dpi_c___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_dpi_c___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_dpi_c___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_dpi_c::eventsPending() { return false; }

uint64_t Vtb_dpi_c::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_dpi_c::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_dpi_c___024root___eval_final(Vtb_dpi_c___024root* vlSelf);

VL_ATTR_COLD void Vtb_dpi_c::final() {
    Vtb_dpi_c___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_dpi_c::hierName() const { return vlSymsp->name(); }
const char* Vtb_dpi_c::modelName() const { return "Vtb_dpi_c"; }
unsigned Vtb_dpi_c::threads() const { return 1; }
void Vtb_dpi_c::prepareClone() const { contextp()->prepareClone(); }
void Vtb_dpi_c::atClone() const {
    contextp()->threadPoolpOnClone();
}
