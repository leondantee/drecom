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

// Function: entry_00108b50
// Address: 0x108b50 - 0x108b78
void entry_00108b50_0x108b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108b50_0x108b50");
#endif

    ctx->pc = 0x108b50u;

label_108b50:
    // 0x108b50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108b54: 0x0  nop
    ctx->pc = 0x108b54u;
    // NOP
    // 0x108b58: 0x0  nop
    ctx->pc = 0x108b58u;
    // NOP
    // 0x108b5c: 0x0  nop
    ctx->pc = 0x108b5cu;
    // NOP
    // 0x108b60: 0x0  nop
    ctx->pc = 0x108b60u;
    // NOP
    // 0x108b64: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108B64u;
    {
        const bool branch_taken_0x108b64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108b64) {
            ctx->pc = 0x108B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108b50;
        }
    }
    ctx->pc = 0x108B6Cu;
    // 0x108b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b70: 0x3e00008  jr          $ra
    ctx->pc = 0x108B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B70u;
        // 0x108b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B78u;
}
