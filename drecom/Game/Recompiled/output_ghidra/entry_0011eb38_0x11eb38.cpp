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

// Function: entry_0011eb38
// Address: 0x11eb38 - 0x11eb40
void entry_0011eb38_0x11eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb38_0x11eb38");
#endif

    ctx->pc = 0x11eb38u;

    // 0x11eb38: 0xc047a30  jal         func_11E8C0
    ctx->pc = 0x11EB38u;
    SET_GPR_U32(ctx, 31, 0x11EB40u);
    ctx->pc = 0x11EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB38u;
    // 0x11eb3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8C0u, 0x11EB38u, 0x11EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB40u;
}
