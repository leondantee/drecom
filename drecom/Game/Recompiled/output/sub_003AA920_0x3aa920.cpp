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

// Function: sub_003AA920
// Address: 0x3aa920 - 0x3aa970
void sub_003AA920_0x3aa920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA920_0x3aa920");
#endif

    ctx->pc = 0x3aa920u;

    // 0x3aa920: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3aa920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x3aa924: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa924u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AA924 raw=0x43960000");
    // 0x3aa928: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa92c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa92cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AA92C raw=0x42F00000");
    // 0x3aa930: 0x0  nop
    ctx->pc = 0x3aa930u;
    // NOP
    // 0x3aa934: 0x0  nop
    ctx->pc = 0x3aa934u;
    // NOP
    // 0x3aa938: 0x0  nop
    ctx->pc = 0x3aa938u;
    // NOP
    // 0x3aa93c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa93cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa940: 0x35aa00  .word       0x0035AA00                   # sll         $s5, $s5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa940u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
    // 0x3aa944: 0x35ac90  .word       0x0035AC90                   # mfhi        $s5 # 00350480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa944u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x3aa948: 0x35ad30  tge         $at, $s5, 692
    ctx->pc = 0x3aa948u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa94c: 0x35af40  .word       0x0035AF40                   # sll         $s5, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa94cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
    // 0x3aa950: 0x35ace0  .word       0x0035ACE0                   # add         $s5, $at, $s5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa950u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x3aa954: 0x0  nop
    ctx->pc = 0x3aa954u;
    // NOP
    // 0x3aa958: 0x35ad90  .word       0x0035AD90                   # mfhi        $s5 # 00350580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa958u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x3aa95c: 0x35af30  tge         $at, $s5, 700
    ctx->pc = 0x3aa95cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa960: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa964: 0x0  nop
    ctx->pc = 0x3aa964u;
    // NOP
    // 0x3aa968: 0x0  nop
    ctx->pc = 0x3aa968u;
    // NOP
    // 0x3aa96c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa96cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa970u;
}
