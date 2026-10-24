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

// Function: entry_00216f50
// Address: 0x216f50 - 0x216f60
void entry_00216f50_0x216f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216f50_0x216f50");
#endif

    switch (ctx->pc) {
        case 0x216f5cu: goto label_216f5c;
        default: break;
    }

    ctx->pc = 0x216f50u;

    // 0x216f50: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x216f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x216f54: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216F54u;
    SET_GPR_U32(ctx, 31, 0x216F5Cu);
    ctx->pc = 0x216F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F54u;
    // 0x216f58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216F54u, 0x216F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F5Cu;
label_216f5c:
    // 0x216f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216f60u;
}
