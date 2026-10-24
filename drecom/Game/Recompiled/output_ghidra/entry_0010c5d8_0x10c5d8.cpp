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

// Function: entry_0010c5d8
// Address: 0x10c5d8 - 0x10c5e4
void entry_0010c5d8_0x10c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c5d8_0x10c5d8");
#endif

    switch (ctx->pc) {
        case 0x10c5e0u: goto label_10c5e0;
        default: break;
    }

    ctx->pc = 0x10c5d8u;

    // 0x10c5d8: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C5D8u;
    SET_GPR_U32(ctx, 31, 0x10C5E0u);
    ctx->pc = 0x10C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5D8u;
    // 0x10c5dc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C5D8u, 0x10C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5E0u;
label_10c5e0:
    // 0x10c5e0: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x10c5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
    ctx->pc = 0x10c5e4u;
}
