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

// Function: entry_0010c57c
// Address: 0x10c57c - 0x10c58c
void entry_0010c57c_0x10c57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c57c_0x10c57c");
#endif

    switch (ctx->pc) {
        case 0x10c584u: goto label_10c584;
        default: break;
    }

    ctx->pc = 0x10c57cu;

    // 0x10c57c: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C57Cu;
    SET_GPR_U32(ctx, 31, 0x10C584u);
    ctx->pc = 0x10C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C57Cu;
    // 0x10c580: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C57Cu, 0x10C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C584u;
label_10c584:
    // 0x10c584: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x10c584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
    // 0x10c588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10c58cu;
}
