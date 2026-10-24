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

// Function: entry_0010cdf0
// Address: 0x10cdf0 - 0x10cdf8
void entry_0010cdf0_0x10cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cdf0_0x10cdf0");
#endif

    ctx->pc = 0x10cdf0u;

    // 0x10cdf0: 0xc043312  jal         func_10CC48
    ctx->pc = 0x10CDF0u;
    SET_GPR_U32(ctx, 31, 0x10CDF8u);
    ctx->pc = 0x10CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDF0u;
    // 0x10cdf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC48u, 0x10CDF0u, 0x10CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDF8u;
}
