// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMIRISCV_HAMMER_DPI__DPI_H_
#define VERILATED_VMIRISCV_HAMMER_DPI__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ../tb/miriscv_hammer_dpi.svh:13:36
    extern svBitVecVal hammer_get_PC(void* hammer);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:30:36
    extern svBitVecVal hammer_get_gpr(void* hammer, const svBitVecVal* gpr_id);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:26:36
    extern svBitVecVal hammer_get_insn_bits(void* hammer);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:22:32
    extern const char* hammer_get_insn_str(void* hammer);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:1:33
    extern void* hammer_init(const char* target_binary);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:5:30
    extern void hammer_release(void* hammer);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:17:30
    extern void hammer_set_PC(void* hammer, const svBitVecVal* new_pc_value);
    // DPI import at ../tb/miriscv_hammer_dpi.svh:9:30
    extern void hammer_single_step(void* hammer);

#ifdef __cplusplus
}
#endif

#endif  // guard
