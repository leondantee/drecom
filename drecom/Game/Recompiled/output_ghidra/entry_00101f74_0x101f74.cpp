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

// Function: entry_00101f74
// Address: 0x101f74 - 0x101f80
void entry_00101f74_0x101f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f74_0x101f74");
#endif

    ctx->pc = 0x101f74u;

    // 0x101f74: 0x8c623978  lw          $v0, 0x3978($v1)
    ctx->pc = 0x101f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14712)));
    // 0x101f78: 0x3e00008  jr          $ra
    ctx->pc = 0x101F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F78u;
        // 0x101f7c: 0xac643978  sw          $a0, 0x3978($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101F80u;
}
