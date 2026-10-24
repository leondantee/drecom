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

// Function: entry_0011c6cc
// Address: 0x11c6cc - 0x11c6dc
void entry_0011c6cc_0x11c6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c6cc_0x11c6cc");
#endif

    switch (ctx->pc) {
        case 0x11c6d4u: goto label_11c6d4;
        default: break;
    }

    ctx->pc = 0x11c6ccu;

    // 0x11c6cc: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x11C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6CCu;
    // 0x11c6d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C6CCu, 0x11C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6D4u;
label_11c6d4:
    // 0x11c6d4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x11C6D4u;
    {
        const bool branch_taken_0x11c6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D4u;
        // 0x11c6d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d4) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C6DCu;
}
