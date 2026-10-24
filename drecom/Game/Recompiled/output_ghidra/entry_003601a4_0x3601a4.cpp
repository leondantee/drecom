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

// Function: entry_003601a4
// Address: 0x3601a4 - 0x3601c8
void entry_003601a4_0x3601a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003601a4_0x3601a4");
#endif

    switch (ctx->pc) {
        case 0x3601b4u: goto label_3601b4;
        case 0x3601c0u: goto label_3601c0;
        default: break;
    }

    ctx->pc = 0x3601a4u;

    // 0x3601a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3601a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3601ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3601ACu;
    SET_GPR_U32(ctx, 31, 0x3601B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3601ACu, 0x3601B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601B4u;
label_3601b4:
    // 0x3601b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3601B8u;
    SET_GPR_U32(ctx, 31, 0x3601C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3601B8u, 0x3601C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601C0u;
label_3601c0:
    // 0x3601c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3601c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3601c8u;
}
