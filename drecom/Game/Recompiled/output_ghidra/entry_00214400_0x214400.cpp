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

// Function: entry_00214400
// Address: 0x214400 - 0x21440c
void entry_00214400_0x214400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214400_0x214400");
#endif

    switch (ctx->pc) {
        case 0x214408u: goto label_214408;
        default: break;
    }

    ctx->pc = 0x214400u;

    // 0x214400: 0xc047520  jal         func_11D480
    ctx->pc = 0x214400u;
    SET_GPR_U32(ctx, 31, 0x214408u);
    ctx->pc = 0x214404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214400u;
    // 0x214404: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x214400u, 0x214408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214408u;
label_214408:
    // 0x214408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21440cu;
}
