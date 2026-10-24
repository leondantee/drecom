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

// Function: entry_0013b658
// Address: 0x13b658 - 0x13b73c
void entry_0013b658_0x13b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b658_0x13b658");
#endif

    switch (ctx->pc) {
        case 0x13b664u: goto label_13b664;
        case 0x13b680u: goto label_13b680;
        case 0x13b69cu: goto label_13b69c;
        case 0x13b6b8u: goto label_13b6b8;
        case 0x13b6d4u: goto label_13b6d4;
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b70cu: goto label_13b70c;
        case 0x13b728u: goto label_13b728;
        default: break;
    }

    ctx->pc = 0x13b658u;

    // 0x13b658: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b65c: 0xc04f114  jal         func_13C450
    ctx->pc = 0x13B65Cu;
    SET_GPR_U32(ctx, 31, 0x13B664u);
    ctx->pc = 0x13C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C450u, 0x13B65Cu, 0x13B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B664u;
label_13b664:
    // 0x13b664: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b668: 0x244466b0  addiu       $a0, $v0, 0x66B0
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26288));
    // 0x13b66c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b66cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b670: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b670u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b678: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B678u;
    SET_GPR_U32(ctx, 31, 0x13B680u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B678u, 0x13B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B680u;
label_13b680:
    // 0x13b680: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b684: 0x244466d0  addiu       $a0, $v0, 0x66D0
    ctx->pc = 0x13b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
    // 0x13b688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b68c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b68cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b690: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b690u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b694: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B694u;
    SET_GPR_U32(ctx, 31, 0x13B69Cu);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B694u, 0x13B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B69Cu;
label_13b69c:
    // 0x13b69c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6a0: 0x244466f0  addiu       $a0, $v0, 0x66F0
    ctx->pc = 0x13b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x13b6a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6b0: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6B0u;
    SET_GPR_U32(ctx, 31, 0x13B6B8u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6B0u, 0x13B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6B8u;
label_13b6b8:
    // 0x13b6b8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6bc: 0x24446710  addiu       $a0, $v0, 0x6710
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x13b6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b6c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6cc: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6CCu;
    SET_GPR_U32(ctx, 31, 0x13B6D4u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6CCu, 0x13B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6D4u;
label_13b6d4:
    // 0x13b6d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6d8: 0x24446730  addiu       $a0, $v0, 0x6730
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
    // 0x13b6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e8: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6E8u;
    SET_GPR_U32(ctx, 31, 0x13B6F0u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6E8u, 0x13B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6F0u;
label_13b6f0:
    // 0x13b6f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6f4: 0x24446750  addiu       $a0, $v0, 0x6750
    ctx->pc = 0x13b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26448));
    // 0x13b6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b6fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b704: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B704u;
    SET_GPR_U32(ctx, 31, 0x13B70Cu);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B704u, 0x13B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B70Cu;
label_13b70c:
    // 0x13b70c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b710: 0x24446770  addiu       $a0, $v0, 0x6770
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26480));
    // 0x13b714: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b718: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b71c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b71cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b720: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B720u;
    SET_GPR_U32(ctx, 31, 0x13B728u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B720u, 0x13B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B728u;
label_13b728:
    // 0x13b728: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b72c: 0x24446790  addiu       $a0, $v0, 0x6790
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26512));
    // 0x13b730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b734: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b738: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b738u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13b73cu;
}
