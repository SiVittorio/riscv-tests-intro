// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dpi_c.h for the primary calling header

#ifndef VERILATED_VTB_DPI_C___024ROOT_H_
#define VERILATED_VTB_DPI_C___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_dpi_c__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dpi_c___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dpi_c__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dpi_c___024root(Vtb_dpi_c__Syms* symsp, const char* v__name);
    ~Vtb_dpi_c___024root();
    VL_UNCOPYABLE(Vtb_dpi_c___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
