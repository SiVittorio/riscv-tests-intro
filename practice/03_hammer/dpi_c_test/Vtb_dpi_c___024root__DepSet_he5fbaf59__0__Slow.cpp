// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dpi_c.h for the primary calling header

#include "Vtb_dpi_c__pch.h"
#include "Vtb_dpi_c___024root.h"

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_static(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_initial__TOP(Vtb_dpi_c___024root* vlSelf);

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_initial(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_initial\n"); );
    // Body
    Vtb_dpi_c___024root___eval_initial__TOP(vlSelf);
}

void Vtb_dpi_c___024root____Vdpiimwrap_tb_dpi_c__DOT__print_TOP(std::string msg);

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_initial__TOP(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_initial__TOP\n"); );
    // Body
    Vtb_dpi_c___024root____Vdpiimwrap_tb_dpi_c__DOT__print_TOP(
                                                               std::string{"Hello world!"});
    VL_FINISH_MT("tb_dpi_c.sv", 7, "");
}

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_final(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_dpi_c___024root___eval_settle(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dpi_c___024root___dump_triggers__act(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dpi_c___024root___dump_triggers__nba(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dpi_c___024root___ctor_var_reset(Vtb_dpi_c___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_dpi_c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dpi_c___024root___ctor_var_reset\n"); );
}
