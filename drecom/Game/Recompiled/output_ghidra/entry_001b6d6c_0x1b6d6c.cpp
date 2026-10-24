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

// Function: entry_001b6d6c
// Address: 0x1b6d6c - 0x1b6d8c
void entry_001b6d6c_0x1b6d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6d6c_0x1b6d6c");
#endif

    ctx->pc = 0x1b6d6cu;

    // 0x1b6d6c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1b6d6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6d70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b6d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D8Cu;
}
