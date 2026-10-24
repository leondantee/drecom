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

// Function: entry_001957e0
// Address: 0x1957e0 - 0x1957fc
void entry_001957e0_0x1957e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001957e0_0x1957e0");
#endif

    ctx->pc = 0x1957e0u;

    // 0x1957e0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1957E0u;
    {
        const bool branch_taken_0x1957e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1957e0) {
            ctx->pc = 0x195730u;
            return;
        }
    }
    ctx->pc = 0x1957E8u;
    // 0x1957e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1957e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1957ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1957f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1957F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1957FCu;
}
