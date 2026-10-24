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

// Function: entry_00119d68
// Address: 0x119d68 - 0x119d7c
void entry_00119d68_0x119d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d68_0x119d68");
#endif

    switch (ctx->pc) {
        case 0x119d70u: goto label_119d70;
        default: break;
    }

    ctx->pc = 0x119d68u;

    // 0x119d68: 0xc046ce2  jal         func_11B388
    ctx->pc = 0x119D68u;
    SET_GPR_U32(ctx, 31, 0x119D70u);
    ctx->pc = 0x119D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D68u;
    // 0x119d6c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B388u, 0x119D68u, 0x119D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D70u;
label_119d70:
    // 0x119d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d74: 0x3e00008  jr          $ra
    ctx->pc = 0x119D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D74u;
        // 0x119d78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D7Cu;
}
