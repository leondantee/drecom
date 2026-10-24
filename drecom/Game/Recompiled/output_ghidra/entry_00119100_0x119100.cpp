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

// Function: entry_00119100
// Address: 0x119100 - 0x119118
void entry_00119100_0x119100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119100_0x119100");
#endif

    ctx->pc = 0x119100u;

    // 0x119100: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119100u;
    {
        const bool branch_taken_0x119100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119100) {
            ctx->pc = 0x119104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119100u;
            // 0x119104: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119118u;
            return;
        }
    }
    ctx->pc = 0x119108u;
    // 0x119108: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x11910c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119110: 0x3e00008  jr          $ra
    ctx->pc = 0x119110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119110u;
        // 0x119114: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119118u;
}
