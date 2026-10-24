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

// Function: entry_001083d8
// Address: 0x1083d8 - 0x1083e4
void entry_001083d8_0x1083d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083d8_0x1083d8");
#endif

    switch (ctx->pc) {
        case 0x1083e0u: goto label_1083e0;
        default: break;
    }

    ctx->pc = 0x1083d8u;

    // 0x1083d8: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x1083D8u;
    SET_GPR_U32(ctx, 31, 0x1083E0u);
    ctx->pc = 0x1083DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083D8u;
    // 0x1083dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x1083D8u, 0x1083E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083E0u;
label_1083e0:
    // 0x1083e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1083e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1083e4u;
}
