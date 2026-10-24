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

// Function: entry_002063a0
// Address: 0x2063a0 - 0x2063d8
void entry_002063a0_0x2063a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002063a0_0x2063a0");
#endif

    switch (ctx->pc) {
        case 0x2063b0u: goto label_2063b0;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063ccu: goto label_2063cc;
        default: break;
    }

    ctx->pc = 0x2063a0u;

    // 0x2063a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2063a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2063a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2063A8u;
    SET_GPR_U32(ctx, 31, 0x2063B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2063A8u, 0x2063B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063B0u;
label_2063b0:
    // 0x2063b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2063B4u;
    SET_GPR_U32(ctx, 31, 0x2063BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2063B4u, 0x2063BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2063c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2063c4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2063C4u;
    SET_GPR_U32(ctx, 31, 0x2063CCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2063C4u, 0x2063CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063CCu;
label_2063cc:
    // 0x2063cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063d0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2063D0u;
    SET_GPR_U32(ctx, 31, 0x2063D8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2063D0u, 0x2063D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063D8u;
}
