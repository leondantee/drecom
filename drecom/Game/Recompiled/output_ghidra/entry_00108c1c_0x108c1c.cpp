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

// Function: entry_00108c1c
// Address: 0x108c1c - 0x108c30
void entry_00108c1c_0x108c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c1c_0x108c1c");
#endif

    ctx->pc = 0x108c1cu;

    // 0x108c1c: 0xad023b28  sw          $v0, 0x3B28($t0)
    ctx->pc = 0x108c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15144), GPR_U32(ctx, 2));
    // 0x108c20: 0xf  sync
    ctx->pc = 0x108c20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x108c24: 0x42000038  ei
    ctx->pc = 0x108c24u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x108c28: 0x3e00008  jr          $ra
    ctx->pc = 0x108C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C28u;
        // 0x108c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C30u;
}
