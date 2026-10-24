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

// Function: entry_003389f0
// Address: 0x3389f0 - 0x338a08
void entry_003389f0_0x3389f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003389f0_0x3389f0");
#endif

    ctx->pc = 0x3389f0u;

    // 0x3389f0: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3389F0u;
    {
        const bool branch_taken_0x3389f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3389f0) {
            ctx->pc = 0x3389CCu;
            return;
        }
    }
    ctx->pc = 0x3389F8u;
    // 0x3389f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3389f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3389fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3389fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x338a00: 0x3e00008  jr          $ra
    ctx->pc = 0x338A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A08u;
}
