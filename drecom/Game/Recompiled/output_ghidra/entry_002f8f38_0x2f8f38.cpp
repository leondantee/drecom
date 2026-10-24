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

// Function: entry_002f8f38
// Address: 0x2f8f38 - 0x2f8f74
void entry_002f8f38_0x2f8f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8f38_0x2f8f38");
#endif

    switch (ctx->pc) {
        case 0x2f8f68u: goto label_2f8f68;
        default: break;
    }

    ctx->pc = 0x2f8f38u;

    // 0x2f8f38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f3c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8f40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f8f44: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F8F44u;
    {
        const bool branch_taken_0x2f8f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8f44) {
            ctx->pc = 0x2F8F74u;
            return;
        }
    }
    ctx->pc = 0x2F8F4Cu;
    // 0x2f8f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f50: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2f8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2f8f54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8f54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f58: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8f5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8f5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8F60u;
    SET_GPR_U32(ctx, 31, 0x2F8F68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8F60u, 0x2F8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F68u;
label_2f8f68:
    // 0x2f8f68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f8f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8f6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F8F6Cu;
    SET_GPR_U32(ctx, 31, 0x2F8F74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F8F6Cu, 0x2F8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F74u;
}
