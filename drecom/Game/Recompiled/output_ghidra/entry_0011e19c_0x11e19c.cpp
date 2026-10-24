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

// Function: entry_0011e19c
// Address: 0x11e19c - 0x11e1b0
void entry_0011e19c_0x11e19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e19c_0x11e19c");
#endif

    ctx->pc = 0x11e19cu;

    // 0x11e19c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x11e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x11e1a0: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x11e1a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11e1a4: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x11e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x11e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A8u;
        // 0x11e1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1B0u;
}
