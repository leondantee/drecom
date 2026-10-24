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

// Function: entry_00104b04
// Address: 0x104b04 - 0x104b18
void entry_00104b04_0x104b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b04_0x104b04");
#endif

    ctx->pc = 0x104b04u;

    // 0x104b04: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x104b04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x104b08: 0xad440038  sw          $a0, 0x38($t2)
    ctx->pc = 0x104b08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 4));
    // 0x104b0c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x104b10: 0x3e00008  jr          $ra
    ctx->pc = 0x104B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B10u;
        // 0x104b14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B18u;
}
