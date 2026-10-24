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
// Address: 0x12cd64 - 0x12cd88
void caseD_5_0x12cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12cd64");
#endif

    switch (ctx->pc) {
        case 0x12cd70u: goto label_12cd70;
        default: break;
    }

    ctx->pc = 0x12cd64u;

    // 0x12cd64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12cd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12cd68: 0xc057634  jal         func_15D8D0
    ctx->pc = 0x12CD68u;
    SET_GPR_U32(ctx, 31, 0x12CD70u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12CD68u, 0x12CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD70u;
label_12cd70:
    // 0x12cd70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CD70u;
    {
        const bool branch_taken_0x12cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd70) {
            ctx->pc = 0x12CD88u;
            return;
        }
    }
    ctx->pc = 0x12CD78u;
    // 0x12cd78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cd7c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12cd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12cd80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cd84: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12cd84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12cd88u;
}
