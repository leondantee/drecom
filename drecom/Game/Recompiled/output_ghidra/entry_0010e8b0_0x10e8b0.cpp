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

// Function: entry_0010e8b0
// Address: 0x10e8b0 - 0x10e8b8
void entry_0010e8b0_0x10e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e8b0_0x10e8b0");
#endif

    ctx->pc = 0x10e8b0u;

    // 0x10e8b0: 0xc043420  jal         func_10D080
    ctx->pc = 0x10E8B0u;
    SET_GPR_U32(ctx, 31, 0x10E8B8u);
    ctx->pc = 0x10E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8B0u;
    // 0x10e8b4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D080u, 0x10E8B0u, 0x10E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8B8u;
}
