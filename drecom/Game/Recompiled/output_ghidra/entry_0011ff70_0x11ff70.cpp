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

// Function: entry_0011ff70
// Address: 0x11ff70 - 0x11ff84
void entry_0011ff70_0x11ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff70_0x11ff70");
#endif

    switch (ctx->pc) {
        case 0x11ff78u: goto label_11ff78;
        default: break;
    }

    ctx->pc = 0x11ff70u;

    // 0x11ff70: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FF70u;
    SET_GPR_U32(ctx, 31, 0x11FF78u);
    ctx->pc = 0x11FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF70u;
    // 0x11ff74: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FF70u, 0x11FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF78u;
label_11ff78:
    // 0x11ff78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF7Cu;
        // 0x11ff80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF84u;
}
