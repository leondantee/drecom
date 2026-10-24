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

// Function: entry_002fa120
// Address: 0x2fa120 - 0x2fa1b4
void entry_002fa120_0x2fa120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa120_0x2fa120");
#endif

    switch (ctx->pc) {
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa1b0u: goto label_2fa1b0;
        default: break;
    }

    ctx->pc = 0x2fa120u;

    // 0x2fa120: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa124: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa124u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa128: 0x24c70180  addiu       $a3, $a2, 0x180
    ctx->pc = 0x2fa128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2fa12c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa130: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa134: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa138: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa13c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2fa13cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa140: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x2fa140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x2fa144: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA144u;
    SET_GPR_U32(ctx, 31, 0x2FA14Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA144u, 0x2FA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA14Cu;
label_2fa14c:
    // 0x2fa14c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fa14cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa150: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa154: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa154u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa158: 0x24c801c0  addiu       $t0, $a2, 0x1C0
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
    // 0x2fa15c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa160: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa164: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa168: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa16c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa170: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2fa170u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fa174: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2fa174u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa178: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA178u;
    SET_GPR_U32(ctx, 31, 0x2FA180u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA178u, 0x2FA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA180u;
label_2fa180:
    // 0x2fa180: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fa180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa188: 0x8c2bdcf0  lw          $t3, -0x2310($at)
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa18c: 0x25670200  addiu       $a3, $t3, 0x200
    ctx->pc = 0x2fa18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x2fa190: 0x2408001d  addiu       $t0, $zero, 0x1D
    ctx->pc = 0x2fa190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa194: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2fa194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa198: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2fa198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa19c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2fa19cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2fa1a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fa1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa1a4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fa1a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa1a8: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA1A8u;
    SET_GPR_U32(ctx, 31, 0x2FA1B0u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA1A8u, 0x2FA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1B0u;
label_2fa1b0:
    // 0x2fa1b0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2fa1b0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fa1b4u;
}
