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

// Function: entry_001b498c
// Address: 0x1b498c - 0x1b49bc
void entry_001b498c_0x1b498c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b498c_0x1b498c");
#endif

    ctx->pc = 0x1b498cu;

    // 0x1b498c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4990: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b4994: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4998: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b499c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1b499cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1b49a0: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B49A0u;
    {
        const bool branch_taken_0x1b49a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49a0) {
            ctx->pc = 0x1B4AE8u;
            return;
        }
    }
    ctx->pc = 0x1B49A8u;
    // 0x1b49a8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b49ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b49b0: 0xa4431416  sh          $v1, 0x1416($v0)
    ctx->pc = 0x1b49b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b49b4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1B49B4u;
    {
        const bool branch_taken_0x1b49b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49b4) {
            ctx->pc = 0x1B4AE8u;
            return;
        }
    }
    ctx->pc = 0x1B49BCu;
}
