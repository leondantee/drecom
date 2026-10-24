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

// Function: entry_00359684
// Address: 0x359684 - 0x3596a8
void entry_00359684_0x359684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359684_0x359684");
#endif

    switch (ctx->pc) {
        case 0x359694u: goto label_359694;
        case 0x3596a0u: goto label_3596a0;
        default: break;
    }

    ctx->pc = 0x359684u;

    // 0x359684: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35968c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x35968Cu;
    SET_GPR_U32(ctx, 31, 0x359694u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x35968Cu, 0x359694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359694u;
label_359694:
    // 0x359694: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359698: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359698u;
    SET_GPR_U32(ctx, 31, 0x3596A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359698u, 0x3596A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596A0u;
label_3596a0:
    // 0x3596a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3596a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3596a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3596a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3596a8u;
}
