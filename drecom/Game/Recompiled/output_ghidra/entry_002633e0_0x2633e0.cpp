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

// Function: entry_002633e0
// Address: 0x2633e0 - 0x2633f8
void entry_002633e0_0x2633e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002633e0_0x2633e0");
#endif

    ctx->pc = 0x2633e0u;

    // 0x2633e0: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x2633e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2633e4: 0x1460feb0  bnez        $v1, . + 4 + (-0x150 << 2)
    ctx->pc = 0x2633E4u;
    {
        const bool branch_taken_0x2633e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2633e4) {
            ctx->pc = 0x262EA8u;
            return;
        }
    }
    ctx->pc = 0x2633ECu;
    // 0x2633ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2633ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2633f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2633F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2633F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2633F8u;
}
