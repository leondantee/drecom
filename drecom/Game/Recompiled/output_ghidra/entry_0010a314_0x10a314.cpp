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

// Function: entry_0010a314
// Address: 0x10a314 - 0x10a328
void entry_0010a314_0x10a314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a314_0x10a314");
#endif

    switch (ctx->pc) {
        case 0x10a31cu: goto label_10a31c;
        default: break;
    }

    ctx->pc = 0x10a314u;

    // 0x10a314: 0xc04298a  jal         func_10A628
    ctx->pc = 0x10A314u;
    SET_GPR_U32(ctx, 31, 0x10A31Cu);
    ctx->pc = 0x10A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A314u;
    // 0x10a318: 0xac6000b0  sw          $zero, 0xB0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A628u, 0x10A314u, 0x10A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A31Cu;
label_10a31c:
    // 0x10a31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a320: 0x3e00008  jr          $ra
    ctx->pc = 0x10A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A320u;
        // 0x10a324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A328u;
}
