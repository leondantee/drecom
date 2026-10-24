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

// Function: entry_0011d44c
// Address: 0x11d44c - 0x11d460
void entry_0011d44c_0x11d44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d44c_0x11d44c");
#endif

    switch (ctx->pc) {
        case 0x11d454u: goto label_11d454;
        default: break;
    }

    ctx->pc = 0x11d44cu;

    // 0x11d44c: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x11D44Cu;
    SET_GPR_U32(ctx, 31, 0x11D454u);
    ctx->pc = 0x11D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D44Cu;
    // 0x11d450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x11D44Cu, 0x11D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D454u;
label_11d454:
    // 0x11d454: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d458: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d45c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x11d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x11d460u;
}
