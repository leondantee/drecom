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

// Function: Motion_move03
// Address: 0x2cdd90 - 0x2cddd4
void Motion_move03_0x2cdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move03_0x2cdd90");
#endif

    switch (ctx->pc) {
        case 0x2cddacu: goto label_2cddac;
        case 0x2cddbcu: goto label_2cddbc;
        default: break;
    }

    ctx->pc = 0x2cdd90u;

    // 0x2cdd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cdd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cdd94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2cdd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2cdd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdd9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2cdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2cdda0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2cdda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cdda4: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2CDDA4u;
    SET_GPR_U32(ctx, 31, 0x2CDDACu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2CDDA4u, 0x2CDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDACu;
label_2cddac:
    // 0x2cddac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2cddacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cddb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2cddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cddb4: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x2CDDB4u;
    SET_GPR_U32(ctx, 31, 0x2CDDBCu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x2CDDB4u, 0x2CDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDBCu;
label_2cddbc:
    // 0x2cddbc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2cddbcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2cddc0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2cddc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cddc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cddc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cddc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cddc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDDD4u;
}
