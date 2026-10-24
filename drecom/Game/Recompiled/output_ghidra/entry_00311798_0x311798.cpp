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

// Function: entry_00311798
// Address: 0x311798 - 0x3117b8
void entry_00311798_0x311798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311798_0x311798");
#endif

    ctx->pc = 0x311798u;

    // 0x311798: 0x2e03000c  sltiu       $v1, $s0, 0xC
    ctx->pc = 0x311798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x31179c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x31179Cu;
    {
        const bool branch_taken_0x31179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31179c) {
            ctx->pc = 0x3116C0u;
            return;
        }
    }
    ctx->pc = 0x3117A4u;
    // 0x3117a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3117a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3117a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3117a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3117ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3117acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3117b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3117B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3117B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3117B8u;
}
