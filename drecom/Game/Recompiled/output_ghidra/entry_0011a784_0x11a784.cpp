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

// Function: entry_0011a784
// Address: 0x11a784 - 0x11a79c
void entry_0011a784_0x11a784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a784_0x11a784");
#endif

    switch (ctx->pc) {
        case 0x11a798u: goto label_11a798;
        default: break;
    }

    ctx->pc = 0x11a784u;

    // 0x11a784: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a788: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a78c: 0x2812  mflo        $a1
    ctx->pc = 0x11a78cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x11a790: 0xc046774  jal         func_119DD0
    ctx->pc = 0x11A790u;
    SET_GPR_U32(ctx, 31, 0x11A798u);
    ctx->pc = 0x11A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A790u;
    // 0x11a794: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DD0u, 0x11A790u, 0x11A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A798u;
label_11a798:
    // 0x11a798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a79cu;
}
