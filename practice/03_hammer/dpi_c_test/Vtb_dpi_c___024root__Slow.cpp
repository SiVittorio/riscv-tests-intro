// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dpi_c.h for the primary calling header

#include "Vtb_dpi_c__pch.h"
#include "Vtb_dpi_c__Syms.h"
#include "Vtb_dpi_c___024root.h"

void Vtb_dpi_c___024root___ctor_var_reset(Vtb_dpi_c___024root* vlSelf);

Vtb_dpi_c___024root::Vtb_dpi_c___024root(Vtb_dpi_c__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dpi_c___024root___ctor_var_reset(this);
}

void Vtb_dpi_c___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_dpi_c___024root::~Vtb_dpi_c___024root() {
}
