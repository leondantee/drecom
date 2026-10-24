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

// Function: entry_00345584
// Address: 0x345584 - 0x3455bc
void entry_00345584_0x345584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345584_0x345584");
#endif

    switch (ctx->pc) {
        case 0x345594u: goto label_345594;
        case 0x3455a0u: goto label_3455a0;
        case 0x3455b0u: goto label_3455b0;
        default: break;
    }

    ctx->pc = 0x345584u;

    // 0x345584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34558c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34558Cu;
    SET_GPR_U32(ctx, 31, 0x345594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34558Cu, 0x345594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345594u;
label_345594:
    // 0x345594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345598: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345598u;
    SET_GPR_U32(ctx, 31, 0x3455A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345598u, 0x3455A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455A0u;
label_3455a0:
    // 0x3455a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3455a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3455a8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3455A8u;
    SET_GPR_U32(ctx, 31, 0x3455B0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3455A8u, 0x3455B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455B0u;
label_3455b0:
    // 0x3455b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3455B4u;
    SET_GPR_U32(ctx, 31, 0x3455BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3455B4u, 0x3455BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455BCu;
}
