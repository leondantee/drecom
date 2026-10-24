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

// Function: entry_0011eb9c
// Address: 0x11eb9c - 0x11eba4
void entry_0011eb9c_0x11eb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb9c_0x11eb9c");
#endif

    ctx->pc = 0x11eb9cu;

    // 0x11eb9c: 0xc047a30  jal         func_11E8C0
    ctx->pc = 0x11EB9Cu;
    SET_GPR_U32(ctx, 31, 0x11EBA4u);
    ctx->pc = 0x11EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB9Cu;
    // 0x11eba0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8C0u, 0x11EB9Cu, 0x11EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBA4u;
}
