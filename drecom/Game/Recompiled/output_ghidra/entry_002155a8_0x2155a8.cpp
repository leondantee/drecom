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

// Function: entry_002155a8
// Address: 0x2155a8 - 0x2155bc
void entry_002155a8_0x2155a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002155a8_0x2155a8");
#endif

    ctx->pc = 0x2155a8u;

    // 0x2155a8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2155a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x2155ac: 0xaca50014  sw          $a1, 0x14($a1)
    ctx->pc = 0x2155acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 5));
    // 0x2155b0: 0x42000038  ei
    ctx->pc = 0x2155b0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2155b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2155B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155B4u;
        // 0x2155b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2155B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2155BCu;
}
