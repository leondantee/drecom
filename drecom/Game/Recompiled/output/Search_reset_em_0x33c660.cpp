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

// Function: Search_reset_em
// Address: 0x33c660 - 0x33c6b4
void Search_reset_em_0x33c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_reset_em_0x33c660");
#endif

    switch (ctx->pc) {
        case 0x33c694u: goto label_33c694;
        default: break;
    }

    ctx->pc = 0x33c660u;

    // 0x33c660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c664: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x33c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x33c668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c670: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x33c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x33c674: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33c674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33c678: 0x24515450  addiu       $s1, $v0, 0x5450
    ctx->pc = 0x33c678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33c67c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x33c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33c680: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x33c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x33c684: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33c684u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c688: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33c688u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c68c: 0xc0cf480  jal         func_33D200
    ctx->pc = 0x33C68Cu;
    SET_GPR_U32(ctx, 31, 0x33C694u);
    ctx->pc = 0x33D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D200u, 0x33C68Cu, 0x33C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C694u;
label_33c694:
    // 0x33c694: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33c694u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33c698: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33c698u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33c69c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x33c69cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c6a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33c6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C6B4u;
}
