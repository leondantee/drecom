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

// Function: entry_002162b0
// Address: 0x2162b0 - 0x2162c8
void entry_002162b0_0x2162b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002162b0_0x2162b0");
#endif

    ctx->pc = 0x2162b0u;

    // 0x2162b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2162B0u;
    {
        const bool branch_taken_0x2162b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2162b0) {
            ctx->pc = 0x2162B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162B0u;
            // 0x2162b4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2162C8u;
            return;
        }
    }
    ctx->pc = 0x2162B8u;
    // 0x2162b8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2162b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2162bc: 0x42000038  ei
    ctx->pc = 0x2162bcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2162c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2162C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2162C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162C0u;
        // 0x2162c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2162C8u;
}
