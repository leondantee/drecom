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

// Function: entry_0010cd98
// Address: 0x10cd98 - 0x10cda0
void entry_0010cd98_0x10cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd98_0x10cd98");
#endif

    ctx->pc = 0x10cd98u;

    // 0x10cd98: 0xc043312  jal         func_10CC48
    ctx->pc = 0x10CD98u;
    SET_GPR_U32(ctx, 31, 0x10CDA0u);
    ctx->pc = 0x10CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD98u;
    // 0x10cd9c: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC48u, 0x10CD98u, 0x10CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDA0u;
}
