// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dpi_c.h for the primary calling header

#include "Vtb_dpi_c__pch.h"
#include "Vtb_dpi_c__Syms.h"
#include "Vtb_dpi_c___024root.h"

extern "C" void print(const char* msg);

VL_INLINE_OPT void Vtb_dpi_c___024root____Vdpiimwrap_tb_dpi_c__DOT__print_TOP(std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root____Vdpiimwrap_tb_dpi_c__DOT__print_TOP\n"); );
    // Body
    const char* msg__Vcvt;
    for (size_t msg__Vidx = 0; msg__Vidx < 1; ++msg__Vidx) msg__Vcvt = msg.c_str();
    print(msg__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dpi_c___024root___dump_triggers__act(Vtb_dpi_c___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dpi_c___024root___eval_triggers__act(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dpi_c___024root___dump_triggers__act(vlSelf);
    }
#endif
}
