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

// Function: entry_002fae14
// Address: 0x2fae14 - 0x2fae84
void entry_002fae14_0x2fae14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fae14_0x2fae14");
#endif

    switch (ctx->pc) {
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae60u: goto label_2fae60;
        default: break;
    }

    ctx->pc = 0x2fae14u;

    // 0x2fae14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae18: 0x8c2bdcf0  lw          $t3, -0x2310($at)
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae1c: 0x25670540  addiu       $a3, $t3, 0x540
    ctx->pc = 0x2fae1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1344));
    // 0x2fae20: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2fae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae24: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fae24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fae28: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae2c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae30: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE30u;
    SET_GPR_U32(ctx, 31, 0x2FAE38u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE30u, 0x2FAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE38u;
label_2fae38:
    // 0x2fae38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae3c: 0x8c2adcf0  lw          $t2, -0x2310($at)
    ctx->pc = 0x2fae3cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae40: 0x25430580  addiu       $v1, $t2, 0x580
    ctx->pc = 0x2fae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1408));
    // 0x2fae44: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fae48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fae4c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae50: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae54: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x2fae54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fae58: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE58u;
    SET_GPR_U32(ctx, 31, 0x2FAE60u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE58u, 0x2FAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE60u;
label_2fae60:
    // 0x2fae60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae64: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fae64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae68: 0x244705c0  addiu       $a3, $v0, 0x5C0
    ctx->pc = 0x2fae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fae6c: 0x240b001d  addiu       $t3, $zero, 0x1D
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae70: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x2fae70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2fae74: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae78: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae7c: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE84u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE7Cu, 0x2FAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE84u;
}
