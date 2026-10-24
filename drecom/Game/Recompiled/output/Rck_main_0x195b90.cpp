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

// Function: Rck_main
// Address: 0x195b90 - 0x195c08
void Rck_main_0x195b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_main_0x195b90");
#endif

    switch (ctx->pc) {
        case 0x195bbcu: goto label_195bbc;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bf0u: goto label_195bf0;
        default: break;
    }

    ctx->pc = 0x195b90u;

    // 0x195b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195b94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x195b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x195b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195ba0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x195ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x195ba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x195ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195ba8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195bac: 0x8c451250  lw          $a1, 0x1250($v0)
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x195bb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x195bb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195bb4: 0xc065704  jal         func_195C10
    ctx->pc = 0x195BB4u;
    SET_GPR_U32(ctx, 31, 0x195BBCu);
    ctx->pc = 0x195C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C10u, 0x195BB4u, 0x195BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BBCu;
label_195bbc:
    // 0x195bbc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x195bbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x195bc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x195bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195bc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195bc8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x195bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x195bcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x195bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195bd0: 0xc065704  jal         func_195C10
    ctx->pc = 0x195BD0u;
    SET_GPR_U32(ctx, 31, 0x195BD8u);
    ctx->pc = 0x195C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C10u, 0x195BD0u, 0x195BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BD8u;
label_195bd8:
    // 0x195bd8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x195bd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x195bdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195be0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x195be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x195be4: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x195be4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x195be8: 0xc06580c  jal         func_196030
    ctx->pc = 0x195BE8u;
    SET_GPR_U32(ctx, 31, 0x195BF0u);
    ctx->pc = 0x196030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196030u, 0x195BE8u, 0x195BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BF0u;
label_195bf0:
    // 0x195bf0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x195bf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195bfc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195c00: 0x3e00008  jr          $ra
    ctx->pc = 0x195C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C08u;
}
