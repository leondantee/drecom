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

// Function: eff2d_00_init
// Address: 0x1a9810 - 0x1a9874
void eff2d_00_init_0x1a9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_00_init_0x1a9810");
#endif

    switch (ctx->pc) {
        case 0x1a9850u: goto label_1a9850;
        case 0x1a985cu: goto label_1a985c;
        default: break;
    }

    ctx->pc = 0x1a9810u;

    // 0x1a9810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9814: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a9814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a9818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a981c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9820: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a9820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a9824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9828: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a982c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9830: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x1a9830u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1a9834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a983c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1a983cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1a9840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9844: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a9844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a9848: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1A9848u;
    SET_GPR_U32(ctx, 31, 0x1A9850u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1A9848u, 0x1A9850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9850u;
label_1a9850:
    // 0x1a9850: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9854: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1A9854u;
    SET_GPR_U32(ctx, 31, 0x1A985Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1A9854u, 0x1A985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A985Cu;
label_1a985c:
    // 0x1a985c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a985cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9868: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a9868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a986c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9874u;
}
