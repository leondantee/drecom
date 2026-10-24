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

// Function: entry_001b1a5c
// Address: 0x1b1a5c - 0x1b1ab8
void entry_001b1a5c_0x1b1a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a5c_0x1b1a5c");
#endif

    ctx->pc = 0x1b1a5cu;

    // 0x1b1a5c: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b1a5cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1a60: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1b1a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b1a64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b1a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1a68: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b1a6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1a70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b1a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b1a74: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1A74u;
    {
        const bool branch_taken_0x1b1a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b1a74) {
            ctx->pc = 0x1B1AB8u;
            return;
        }
    }
    ctx->pc = 0x1B1A7Cu;
    // 0x1b1a7c: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x1b1a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x1b1a80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1A80u;
    {
        const bool branch_taken_0x1b1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a80) {
            ctx->pc = 0x1B1AB8u;
            return;
        }
    }
    ctx->pc = 0x1B1A88u;
    // 0x1b1a88: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b1a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b1a8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A8Cu;
    {
        const bool branch_taken_0x1b1a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a8c) {
            ctx->pc = 0x1B1AB8u;
            return;
        }
    }
    ctx->pc = 0x1B1A94u;
    // 0x1b1a94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1a98: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1A98u;
    {
        const bool branch_taken_0x1b1a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1a98) {
            ctx->pc = 0x1B1AB8u;
            return;
        }
    }
    ctx->pc = 0x1B1AA0u;
    // 0x1b1aa0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b1aa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b1aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1aac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b1ab0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b1ab4: 0x0  nop
    ctx->pc = 0x1b1ab4u;
    // NOP
    ctx->pc = 0x1b1ab8u;
}
