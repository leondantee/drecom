#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA850
// Address: 0x3aa850 - 0x3aa8b0
void sub_003AA850_0x3aa850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA850_0x3aa850");
#endif

    ctx->pc = 0x3aa850u;

    // 0x3aa850: 0x0  nop
    ctx->pc = 0x3aa850u;
    // NOP
    // 0x3aa854: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa854u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA854 raw=0x43FA0000");
    // 0x3aa858: 0x0  nop
    ctx->pc = 0x3aa858u;
    // NOP
    // 0x3aa85c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa85cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA85C raw=0x43FA0000");
    // 0x3aa860: 0x0  nop
    ctx->pc = 0x3aa860u;
    // NOP
    // 0x3aa864: 0x0  nop
    ctx->pc = 0x3aa864u;
    // NOP
    // 0x3aa868: 0x0  nop
    ctx->pc = 0x3aa868u;
    // NOP
    // 0x3aa86c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa86cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa870: 0x359ba0  .word       0x00359BA0                   # add         $s3, $at, $s5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa870u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x3aa874: 0x359cb0  tge         $at, $s5, 626
    ctx->pc = 0x3aa874u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa878: 0x359d30  tge         $at, $s5, 628
    ctx->pc = 0x3aa878u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa87c: 0x35a220  .word       0x0035A220                   # add         $s4, $at, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa87cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x3aa880: 0x359d00  .word       0x00359D00                   # sll         $s3, $s5, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa880u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x3aa884: 0x0  nop
    ctx->pc = 0x3aa884u;
    // NOP
    // 0x3aa888: 0x359d80  .word       0x00359D80                   # sll         $s3, $s5, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa888u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 22));
    // 0x3aa88c: 0x359e70  tge         $at, $s5, 633
    ctx->pc = 0x3aa88cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa890: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa894: 0x0  nop
    ctx->pc = 0x3aa894u;
    // NOP
    // 0x3aa898: 0x0  nop
    ctx->pc = 0x3aa898u;
    // NOP
    // 0x3aa89c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa89cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa8a0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa8a0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AA8A0 raw=0x41F00000");
    // 0x3aa8a4: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aa8a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AA8A4 raw=0x40A00000");
    // 0x3aa8a8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aa8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa8ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa8acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa8b0u;
}
