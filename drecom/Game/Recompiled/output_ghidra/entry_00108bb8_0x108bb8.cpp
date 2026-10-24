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

// Function: entry_00108bb8
// Address: 0x108bb8 - 0x108bc4
void entry_00108bb8_0x108bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108bb8_0x108bb8");
#endif

    ctx->pc = 0x108bb8u;

    // 0x108bb8: 0xac623b20  sw          $v0, 0x3B20($v1)
    ctx->pc = 0x108bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15136), GPR_U32(ctx, 2));
    // 0x108bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x108BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BBCu;
        // 0x108bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108BC4u;
}
