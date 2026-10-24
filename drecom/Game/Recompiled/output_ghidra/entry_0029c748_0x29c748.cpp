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

// Function: entry_0029c748
// Address: 0x29c748 - 0x29c76c
void entry_0029c748_0x29c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c748_0x29c748");
#endif

    ctx->pc = 0x29c748u;

    // 0x29c748: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x29c74c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x29C74Cu;
    {
        const bool branch_taken_0x29c74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c74c) {
            ctx->pc = 0x29C6B4u;
            return;
        }
    }
    ctx->pc = 0x29C754u;
    // 0x29c754: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29c754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c764: 0x3e00008  jr          $ra
    ctx->pc = 0x29C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C76Cu;
}
