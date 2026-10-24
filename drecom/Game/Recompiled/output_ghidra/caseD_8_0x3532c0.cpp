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

// Function: caseD_8
// Address: 0x3532c0 - 0x3532f0
void caseD_8_0x3532c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x3532c0");
#endif

    switch (ctx->pc) {
        case 0x3532d0u: goto label_3532d0;
        default: break;
    }

    ctx->pc = 0x3532c0u;

    // 0x3532c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3532c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3532c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3532c8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x3532C8u;
    SET_GPR_U32(ctx, 31, 0x3532D0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3532C8u, 0x3532D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532D0u;
label_3532d0:
    // 0x3532d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3532D0u;
    {
        const bool branch_taken_0x3532d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532d0) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3532D8u;
    // 0x3532d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3532d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3532dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3532dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3532e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3532e4: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x3532e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x3532e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3532E8u;
    {
        const bool branch_taken_0x3532e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532e8) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3532F0u;
}
