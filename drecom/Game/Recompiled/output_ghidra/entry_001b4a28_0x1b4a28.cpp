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

// Function: entry_001b4a28
// Address: 0x1b4a28 - 0x1b4a88
void entry_001b4a28_0x1b4a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a28_0x1b4a28");
#endif

    ctx->pc = 0x1b4a28u;

    // 0x1b4a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a2c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b4a30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4a34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b4a38: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x1b4a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1b4a3c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B4A3Cu;
    {
        const bool branch_taken_0x1b4a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a3c) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4A44u;
    // 0x1b4a44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4a4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4a50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4a54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b4a58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a5c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b4a60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b4a68: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x1b4a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1b4a6c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B4A6Cu;
    {
        const bool branch_taken_0x1b4a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a6c) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4A74u;
    // 0x1b4a74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b4a78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a7c: 0xa4431418  sh          $v1, 0x1418($v0)
    ctx->pc = 0x1b4a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b4a80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4A80u;
    {
        const bool branch_taken_0x1b4a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a80) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4A88u;
}
