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

// Function: entry_001e2a04
// Address: 0x1e2a04 - 0x1e2a28
void entry_001e2a04_0x1e2a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2a04_0x1e2a04");
#endif

    ctx->pc = 0x1e2a04u;

    // 0x1e2a04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e2a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2a08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e2a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2a0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e2a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2a14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a1c: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x1e2a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1e2a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A28u;
}
