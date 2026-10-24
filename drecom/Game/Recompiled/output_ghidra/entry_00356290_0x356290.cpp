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

// Function: entry_00356290
// Address: 0x356290 - 0x3562b4
void entry_00356290_0x356290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356290_0x356290");
#endif

    ctx->pc = 0x356290u;

    // 0x356290: 0x2e03001b  sltiu       $v1, $s0, 0x1B
    ctx->pc = 0x356290u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x356294: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x356294u;
    {
        const bool branch_taken_0x356294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356294) {
            ctx->pc = 0x356210u;
            return;
        }
    }
    ctx->pc = 0x35629Cu;
    // 0x35629c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35629cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3562a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3562a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3562a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3562a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3562a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3562a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3562ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3562ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3562ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3562B4u;
}
