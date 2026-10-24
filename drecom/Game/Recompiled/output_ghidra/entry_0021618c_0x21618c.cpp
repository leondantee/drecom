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

// Function: entry_0021618c
// Address: 0x21618c - 0x2161d0
void entry_0021618c_0x21618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021618c_0x21618c");
#endif

    ctx->pc = 0x21618cu;

    // 0x21618c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x216190: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x216194: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x216194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x216198: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21619c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x21619cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2161a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2161a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2161a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2161a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2161a8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x2161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2161ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2161acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2161b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2161b4: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x2161b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2161b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2161b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2161bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2161c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2161c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2161c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2161c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2161c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2161c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161cc: 0x0  nop
    ctx->pc = 0x2161ccu;
    // NOP
    ctx->pc = 0x2161d0u;
}
