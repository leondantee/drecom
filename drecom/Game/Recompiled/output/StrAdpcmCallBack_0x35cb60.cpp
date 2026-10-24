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

// Function: StrAdpcmCallBack
// Address: 0x35cb60 - 0x35cba4
void StrAdpcmCallBack_0x35cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StrAdpcmCallBack_0x35cb60");
#endif

    ctx->pc = 0x35cb60u;

    // 0x35cb60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35cb64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35cb68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35cb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35cb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35cb74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35cb78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x35cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x35cb7c: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x35cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x35cb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cb84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cb88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cb8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb98: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x35cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35cb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CBA4u;
}
