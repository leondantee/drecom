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

// Function: entry_00220658
// Address: 0x220658 - 0x22066c
void entry_00220658_0x220658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220658_0x220658");
#endif

    switch (ctx->pc) {
        case 0x220668u: goto label_220668;
        default: break;
    }

    ctx->pc = 0x220658u;

    // 0x220658: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22065c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x22065cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x220660: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x220660u;
    SET_GPR_U32(ctx, 31, 0x220668u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x220660u, 0x220668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220668u;
label_220668:
    // 0x220668: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x22066cu;
}
