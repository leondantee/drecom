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

// Function: entry_0010af4c
// Address: 0x10af4c - 0x10af5c
void entry_0010af4c_0x10af4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af4c_0x10af4c");
#endif

    ctx->pc = 0x10af4cu;

    // 0x10af4c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10af50: 0x3c045800  lui         $a0, 0x5800
    ctx->pc = 0x10af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    // 0x10af54: 0xc042cec  jal         func_10B3B0
    ctx->pc = 0x10AF54u;
    SET_GPR_U32(ctx, 31, 0x10AF5Cu);
    ctx->pc = 0x10AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF54u;
    // 0x10af58: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B3B0u, 0x10AF54u, 0x10AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF5Cu;
}
