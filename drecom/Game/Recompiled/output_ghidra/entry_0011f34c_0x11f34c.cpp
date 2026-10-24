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

// Function: entry_0011f34c
// Address: 0x11f34c - 0x11f360
void entry_0011f34c_0x11f34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f34c_0x11f34c");
#endif

    switch (ctx->pc) {
        case 0x11f354u: goto label_11f354;
        default: break;
    }

    ctx->pc = 0x11f34cu;

    // 0x11f34c: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11F34Cu;
    SET_GPR_U32(ctx, 31, 0x11F354u);
    ctx->pc = 0x11F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F34Cu;
    // 0x11f350: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11F34Cu, 0x11F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F354u;
label_11f354:
    // 0x11f354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f358: 0x3e00008  jr          $ra
    ctx->pc = 0x11F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F358u;
        // 0x11f35c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F360u;
}
