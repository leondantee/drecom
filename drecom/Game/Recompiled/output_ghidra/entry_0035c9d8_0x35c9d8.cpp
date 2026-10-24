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

// Function: entry_0035c9d8
// Address: 0x35c9d8 - 0x35ca00
void entry_0035c9d8_0x35c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c9d8_0x35c9d8");
#endif

    ctx->pc = 0x35c9d8u;

    // 0x35c9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c9dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x35c9dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c9e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35c9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c9e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35c9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c9f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x35c9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA00u;
}
