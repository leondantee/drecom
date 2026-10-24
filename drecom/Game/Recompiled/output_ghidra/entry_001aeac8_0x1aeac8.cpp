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

// Function: entry_001aeac8
// Address: 0x1aeac8 - 0x1aeaec
void entry_001aeac8_0x1aeac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeac8_0x1aeac8");
#endif

    ctx->pc = 0x1aeac8u;

    // 0x1aeac8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1aeac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aeacc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aeaccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aead0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aead0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aead4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aead4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aead8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aead8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aeadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeae0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEAECu;
}
