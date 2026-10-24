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

// Function: eff2d_0c_init00
// Address: 0x1aa8a0 - 0x1aa8f4
void eff2d_0c_init00_0x1aa8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0c_init00_0x1aa8a0");
#endif

    switch (ctx->pc) {
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8e0u: goto label_1aa8e0;
        default: break;
    }

    ctx->pc = 0x1aa8a0u;

    // 0x1aa8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa8a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1aa8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1aa8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa8ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1aa8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1aa8b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa8b4: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1aa8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1aa8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa8bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1aa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa8c0: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1aa8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1aa8c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa8c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1aa8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1aa8cc: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1AA8CCu;
    SET_GPR_U32(ctx, 31, 0x1AA8D4u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1AA8CCu, 0x1AA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8D4u;
label_1aa8d4:
    // 0x1aa8d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa8d8: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1AA8D8u;
    SET_GPR_U32(ctx, 31, 0x1AA8E0u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1AA8D8u, 0x1AA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8E0u;
label_1aa8e0:
    // 0x1aa8e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1aa8e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA8F4u;
}
