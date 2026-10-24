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

// Function: entry_00169e24
// Address: 0x169e24 - 0x169e44
void entry_00169e24_0x169e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169e24_0x169e24");
#endif

    ctx->pc = 0x169e24u;

    // 0x169e24: 0x8c23bb30  lw          $v1, -0x44D0($at)
    ctx->pc = 0x169e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949680)));
    // 0x169e28: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x169E28u;
    {
        const bool branch_taken_0x169e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e28) {
            ctx->pc = 0x169DC8u;
            return;
        }
    }
    ctx->pc = 0x169E30u;
    // 0x169e30: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x169e30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x169e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x169e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x169E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169E44u;
}
