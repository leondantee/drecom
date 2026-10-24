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

// Function: srp_0a_init
// Address: 0x200c60 - 0x200cb8
void srp_0a_init_0x200c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0a_init_0x200c60");
#endif

    switch (ctx->pc) {
        case 0x200ca0u: goto label_200ca0;
        default: break;
    }

    ctx->pc = 0x200c60u;

    // 0x200c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200c64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x200c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x200c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200c70: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x200c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x200c74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200c78: 0x8c500ac0  lw          $s0, 0xAC0($v0)
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x200c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200c84: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x200c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x200c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200c8c: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x200c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x200c90: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x200c90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x200c94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x200c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200c98: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x200C98u;
    SET_GPR_U32(ctx, 31, 0x200CA0u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x200C98u, 0x200CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CA0u;
label_200ca0:
    // 0x200ca0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x200ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200cac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x200cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x200cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x200CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200CB8u;
}
