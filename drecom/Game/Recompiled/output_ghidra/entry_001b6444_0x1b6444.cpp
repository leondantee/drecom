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

// Function: entry_001b6444
// Address: 0x1b6444 - 0x1b6478
void entry_001b6444_0x1b6444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6444_0x1b6444");
#endif

    switch (ctx->pc) {
        case 0x1b6450u: goto label_1b6450;
        default: break;
    }

    ctx->pc = 0x1b6444u;

    // 0x1b6444: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6444u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6448: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B6448u;
    SET_GPR_U32(ctx, 31, 0x1B6450u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6448u, 0x1B6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6450u;
label_1b6450:
    // 0x1b6450: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6450u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6454: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6458: 0x8c651b60  lw          $a1, 0x1B60($v1)
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1b645c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B645Cu;
    {
        const bool branch_taken_0x1b645c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b645c) {
            ctx->pc = 0x1B6478u;
            return;
        }
    }
    ctx->pc = 0x1B6464u;
    // 0x1b6464: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6468: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b646c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b646cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6470: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x1B6470u;
    {
        const bool branch_taken_0x1b6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6470) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6478u;
}
