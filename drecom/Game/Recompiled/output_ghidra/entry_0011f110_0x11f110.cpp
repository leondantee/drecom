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

// Function: entry_0011f110
// Address: 0x11f110 - 0x11f11c
void entry_0011f110_0x11f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f110_0x11f110");
#endif

    switch (ctx->pc) {
        case 0x11f118u: goto label_11f118;
        default: break;
    }

    ctx->pc = 0x11f110u;

    // 0x11f110: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F110u;
    SET_GPR_U32(ctx, 31, 0x11F118u);
    ctx->pc = 0x11F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F110u;
    // 0x11f114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F110u, 0x11F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F118u;
label_11f118:
    // 0x11f118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11f11cu;
}
