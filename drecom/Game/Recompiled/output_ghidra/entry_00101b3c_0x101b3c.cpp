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

// Function: entry_00101b3c
// Address: 0x101b3c - 0x101b48
void entry_00101b3c_0x101b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101b3c_0x101b3c");
#endif

    ctx->pc = 0x101b3cu;

    // 0x101b3c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x101b40: 0x3e00008  jr          $ra
    ctx->pc = 0x101B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B40u;
        // 0x101b44: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B48u;
}
