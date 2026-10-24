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

// Function: entry_0011ff44
// Address: 0x11ff44 - 0x11ff58
void entry_0011ff44_0x11ff44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff44_0x11ff44");
#endif

    switch (ctx->pc) {
        case 0x11ff4cu: goto label_11ff4c;
        default: break;
    }

    ctx->pc = 0x11ff44u;

    // 0x11ff44: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FF44u;
    SET_GPR_U32(ctx, 31, 0x11FF4Cu);
    ctx->pc = 0x11FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF44u;
    // 0x11ff48: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FF44u, 0x11FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF4Cu;
label_11ff4c:
    // 0x11ff4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ff4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff50: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF50u;
        // 0x11ff54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF58u;
}
