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

// Function: entry_001a4b68
// Address: 0x1a4b68 - 0x1a4b88
void entry_001a4b68_0x1a4b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b68_0x1a4b68");
#endif

    ctx->pc = 0x1a4b68u;

    // 0x1a4b68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1a4b68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a4b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B88u;
}
