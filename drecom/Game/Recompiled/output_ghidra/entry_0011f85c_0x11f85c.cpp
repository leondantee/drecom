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

// Function: entry_0011f85c
// Address: 0x11f85c - 0x11f864
void entry_0011f85c_0x11f85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f85c_0x11f85c");
#endif

    ctx->pc = 0x11f85cu;

    // 0x11f85c: 0xc047d62  jal         func_11F588
    ctx->pc = 0x11F85Cu;
    SET_GPR_U32(ctx, 31, 0x11F864u);
    ctx->pc = 0x11F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F85Cu;
    // 0x11f860: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F588u, 0x11F85Cu, 0x11F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F864u;
}
