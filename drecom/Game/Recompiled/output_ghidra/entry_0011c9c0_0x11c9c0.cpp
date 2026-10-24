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

// Function: entry_0011c9c0
// Address: 0x11c9c0 - 0x11c9d4
void entry_0011c9c0_0x11c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c9c0_0x11c9c0");
#endif

    switch (ctx->pc) {
        case 0x11c9ccu: goto label_11c9cc;
        default: break;
    }

    ctx->pc = 0x11c9c0u;

    // 0x11c9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9c4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C9C4u;
    SET_GPR_U32(ctx, 31, 0x11C9CCu);
    ctx->pc = 0x11C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9C4u;
    // 0x11c9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C9C4u, 0x11C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9CCu;
label_11c9cc:
    // 0x11c9cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C9CCu;
    {
        const bool branch_taken_0x11c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9cc) {
            ctx->pc = 0x11C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C9CCu;
            // 0x11c9d0: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9D4u;
            return;
        }
    }
    ctx->pc = 0x11C9D4u;
}
