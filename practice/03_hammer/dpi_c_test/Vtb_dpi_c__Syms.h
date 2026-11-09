// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DPI_C__SYMS_H_
#define VERILATED_VTB_DPI_C__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_dpi_c.h"

// INCLUDE MODULE CLASSES
#include "Vtb_dpi_c___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_dpi_c__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_dpi_c* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_dpi_c___024root            TOP;

    // CONSTRUCTORS
    Vtb_dpi_c__Syms(VerilatedContext* contextp, const char* namep, Vtb_dpi_c* modelp);
    ~Vtb_dpi_c__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
