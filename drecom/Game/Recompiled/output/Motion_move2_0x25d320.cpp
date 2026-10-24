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

// Function: Motion_move2
// Address: 0x25d320 - 0x25d364
void Motion_move2_0x25d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move2_0x25d320");
#endif

    switch (ctx->pc) {
        case 0x25d33cu: goto label_25d33c;
        case 0x25d34cu: goto label_25d34c;
        default: break;
    }

    ctx->pc = 0x25d320u;

    // 0x25d320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d324: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x25d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x25d328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d32c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x25d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x25d330: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25d330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25d334: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x25D334u;
    SET_GPR_U32(ctx, 31, 0x25D33Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x25D334u, 0x25D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D33Cu;
label_25d33c:
    // 0x25d33c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x25d33cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d340: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25d340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25d344: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x25D344u;
    SET_GPR_U32(ctx, 31, 0x25D34Cu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x25D344u, 0x25D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D34Cu;
label_25d34c:
    // 0x25d34c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x25d34cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25d350: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x25d350u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d35c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D364u;
}
