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

// Function: entry_00106a1c
// Address: 0x106a1c - 0x106a28
void entry_00106a1c_0x106a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106a1c_0x106a1c");
#endif

    ctx->pc = 0x106a1cu;

    // 0x106a1c: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x106a1cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x106a20: 0x3e00008  jr          $ra
    ctx->pc = 0x106A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A20u;
        // 0x106a24: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A28u;
}
