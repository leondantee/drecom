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

// Function: entry_0011f1dc
// Address: 0x11f1dc - 0x11f1e8
void entry_0011f1dc_0x11f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1dc_0x11f1dc");
#endif

    switch (ctx->pc) {
        case 0x11f1e4u: goto label_11f1e4;
        default: break;
    }

    ctx->pc = 0x11f1dcu;

    // 0x11f1dc: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11F1DCu;
    SET_GPR_U32(ctx, 31, 0x11F1E4u);
    ctx->pc = 0x11F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1DCu;
    // 0x11f1e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11F1DCu, 0x11F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1E4u;
label_11f1e4:
    // 0x11f1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11f1e8u;
}
