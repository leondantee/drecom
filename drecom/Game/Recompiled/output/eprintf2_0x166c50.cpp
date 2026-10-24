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

// Function: eprintf2
// Address: 0x166c50 - 0x166c98
void eprintf2_0x166c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eprintf2_0x166c50");
#endif

    ctx->pc = 0x166c50u;

    // 0x166c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x166c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x166c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166c60: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x166c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x166c64: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x166c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x166c68: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x166c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x166c6c: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x166c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x166c70: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x166c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x166c74: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x166c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x166c78: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x166c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x166c7c: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x166c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x166c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c8c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x166c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x166c90: 0x3e00008  jr          $ra
    ctx->pc = 0x166C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C98u;
}
