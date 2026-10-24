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

// Function: Set_Crystal
// Address: 0x31e830 - 0x31e890
void Set_Crystal_0x31e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Crystal_0x31e830");
#endif

    switch (ctx->pc) {
        case 0x31e870u: goto label_31e870;
        default: break;
    }

    ctx->pc = 0x31e830u;

    // 0x31e830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31e834: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x31e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x31e838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31e83c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31e840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e844: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x31e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x31e848: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31e848u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e84c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31e850: 0x2452af60  addiu       $s2, $v0, -0x50A0
    ctx->pc = 0x31e850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946656));
    // 0x31e854: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e854u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e858: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x31e858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e85c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e85cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e860: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31e860u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e864: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x31e864u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e868: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31E868u;
    SET_GPR_U32(ctx, 31, 0x31E870u);
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31E868u, 0x31E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E870u;
label_31e870:
    // 0x31e870: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e870u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e874: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x31e874u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31e878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e87c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e884: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31e884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31e888: 0x3e00008  jr          $ra
    ctx->pc = 0x31E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E890u;
}
