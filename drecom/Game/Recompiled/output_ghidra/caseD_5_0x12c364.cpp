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

// Function: caseD_5
// Address: 0x12c364 - 0x12c388
void caseD_5_0x12c364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12c364");
#endif

    switch (ctx->pc) {
        case 0x12c370u: goto label_12c370;
        default: break;
    }

    ctx->pc = 0x12c364u;

    // 0x12c364: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c368: 0xc057634  jal         func_15D8D0
    ctx->pc = 0x12C368u;
    SET_GPR_U32(ctx, 31, 0x12C370u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12C368u, 0x12C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C370u;
label_12c370:
    // 0x12c370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C370u;
    {
        const bool branch_taken_0x12c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c370) {
            ctx->pc = 0x12C388u;
            return;
        }
    }
    ctx->pc = 0x12C378u;
    // 0x12c378: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c37c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12c37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12c380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c384: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12c384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c388u;
}
