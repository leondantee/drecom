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

// Function: entry_0011f7f8
// Address: 0x11f7f8 - 0x11f800
void entry_0011f7f8_0x11f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f7f8_0x11f7f8");
#endif

    ctx->pc = 0x11f7f8u;

    // 0x11f7f8: 0xc047d62  jal         func_11F588
    ctx->pc = 0x11F7F8u;
    SET_GPR_U32(ctx, 31, 0x11F800u);
    ctx->pc = 0x11F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7F8u;
    // 0x11f7fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F588u, 0x11F7F8u, 0x11F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F800u;
}
