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

// Function: entry_0011c714
// Address: 0x11c714 - 0x11c724
void entry_0011c714_0x11c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c714_0x11c714");
#endif

    switch (ctx->pc) {
        case 0x11c71cu: goto label_11c71c;
        default: break;
    }

    ctx->pc = 0x11c714u;

    // 0x11c714: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C714u;
    SET_GPR_U32(ctx, 31, 0x11C71Cu);
    ctx->pc = 0x11C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C714u;
    // 0x11c718: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C714u, 0x11C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C71Cu;
label_11c71c:
    // 0x11c71c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x11C71Cu;
    {
        const bool branch_taken_0x11c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C71Cu;
        // 0x11c720: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c71c) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C724u;
}
