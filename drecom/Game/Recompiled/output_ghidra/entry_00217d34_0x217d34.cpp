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

// Function: entry_00217d34
// Address: 0x217d34 - 0x217d44
void entry_00217d34_0x217d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217d34_0x217d34");
#endif

    ctx->pc = 0x217d34u;

    // 0x217d34: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x217d34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x217d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d3c: 0xc085eae  jal         func_217AB8
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x217D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D3Cu;
    // 0x217d40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217AB8u, 0x217D3Cu, 0x217D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D44u;
}
