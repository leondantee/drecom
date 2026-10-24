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

// Function: eff2d_06_init
// Address: 0x21ed10 - 0x21ed74
void eff2d_06_init_0x21ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_06_init_0x21ed10");
#endif

    switch (ctx->pc) {
        case 0x21ed50u: goto label_21ed50;
        case 0x21ed5cu: goto label_21ed5c;
        default: break;
    }

    ctx->pc = 0x21ed10u;

    // 0x21ed10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ed14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21ed18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ed1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ed20: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21ed24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21ed28: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21ed2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ed30: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x21ed30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x21ed34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ed38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ed3c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x21ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x21ed40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ed44: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21ed44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21ed48: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21ED48u;
    SET_GPR_U32(ctx, 31, 0x21ED50u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21ED48u, 0x21ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED50u;
label_21ed50:
    // 0x21ed50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ed54: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21ED54u;
    SET_GPR_U32(ctx, 31, 0x21ED5Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21ED54u, 0x21ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED5Cu;
label_21ed5c:
    // 0x21ed5c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21ed5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ed60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ed60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ed64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ed64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ed68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21ed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ED74u;
}
