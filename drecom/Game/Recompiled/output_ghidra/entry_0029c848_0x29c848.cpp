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

// Function: entry_0029c848
// Address: 0x29c848 - 0x29c86c
void entry_0029c848_0x29c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c848_0x29c848");
#endif

    ctx->pc = 0x29c848u;

    // 0x29c848: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x29c84c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x29C84Cu;
    {
        const bool branch_taken_0x29c84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c84c) {
            ctx->pc = 0x29C7B8u;
            return;
        }
    }
    ctx->pc = 0x29C854u;
    // 0x29c854: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29c854u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c864: 0x3e00008  jr          $ra
    ctx->pc = 0x29C864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C86Cu;
}
