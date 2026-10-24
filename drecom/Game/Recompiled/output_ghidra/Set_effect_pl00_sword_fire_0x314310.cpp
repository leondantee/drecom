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

// Function: Set_effect_pl00_sword_fire
// Address: 0x314310 - 0x31438c
void Set_effect_pl00_sword_fire_0x314310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_sword_fire_0x314310");
#endif

    switch (ctx->pc) {
        case 0x314338u: goto label_314338;
        case 0x314354u: goto label_314354;
        case 0x314370u: goto label_314370;
        case 0x31437cu: goto label_31437c;
        default: break;
    }

    ctx->pc = 0x314310u;

    // 0x314310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314314: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x314314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x314318: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x314318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x31431c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x314320: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314320u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314324: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x314324u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314328: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x314328u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31432c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31432cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314330: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x314330u;
    SET_GPR_U32(ctx, 31, 0x314338u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x314330u, 0x314338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314338u;
label_314338:
    // 0x314338: 0x24040111  addiu       $a0, $zero, 0x111
    ctx->pc = 0x314338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x31433c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31433cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314340: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x314340u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314344: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x314344u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314348: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x314348u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31434c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31434Cu;
    SET_GPR_U32(ctx, 31, 0x314354u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31434Cu, 0x314354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314354u;
label_314354:
    // 0x314354: 0x24040211  addiu       $a0, $zero, 0x211
    ctx->pc = 0x314354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    // 0x314358: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314358u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31435c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31435cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314360: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x314360u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314364: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x314364u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314368: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x314368u;
    SET_GPR_U32(ctx, 31, 0x314370u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x314368u, 0x314370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314370u;
label_314370:
    // 0x314370: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x314370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x314374: 0xc0c4edc  jal         func_313B70
    ctx->pc = 0x314374u;
    SET_GPR_U32(ctx, 31, 0x31437Cu);
    ctx->pc = 0x313B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313B70u, 0x314374u, 0x31437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31437Cu;
label_31437c:
    // 0x31437c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31437cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314380: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x314380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x314384: 0x3e00008  jr          $ra
    ctx->pc = 0x314384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31438Cu;
}
