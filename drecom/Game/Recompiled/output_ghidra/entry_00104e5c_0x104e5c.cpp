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

// Function: entry_00104e5c
// Address: 0x104e5c - 0x104e6c
void entry_00104e5c_0x104e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e5c_0x104e5c");
#endif

    ctx->pc = 0x104e5cu;

    // 0x104e5c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x104E5Cu;
    {
        const bool branch_taken_0x104e5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E5Cu;
        // 0x104e60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e5c) {
            ctx->pc = 0x104DFCu;
            return;
        }
    }
    ctx->pc = 0x104E64u;
    // 0x104e64: 0x3e00008  jr          $ra
    ctx->pc = 0x104E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E6Cu;
}
