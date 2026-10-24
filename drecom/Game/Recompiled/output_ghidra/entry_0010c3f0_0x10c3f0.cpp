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

// Function: entry_0010c3f0
// Address: 0x10c3f0 - 0x10c3fc
void entry_0010c3f0_0x10c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c3f0_0x10c3f0");
#endif

    switch (ctx->pc) {
        case 0x10c3f8u: goto label_10c3f8;
        default: break;
    }

    ctx->pc = 0x10c3f0u;

    // 0x10c3f0: 0xc0430d6  jal         func_10C358
    ctx->pc = 0x10C3F0u;
    SET_GPR_U32(ctx, 31, 0x10C3F8u);
    ctx->pc = 0x10C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3F0u;
    // 0x10c3f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C358u, 0x10C3F0u, 0x10C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3F8u;
label_10c3f8:
    // 0x10c3f8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->pc = 0x10c3fcu;
}
