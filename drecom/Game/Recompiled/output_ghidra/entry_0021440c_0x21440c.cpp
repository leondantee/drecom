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

// Function: entry_0021440c
// Address: 0x21440c - 0x214414
void entry_0021440c_0x21440c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021440c_0x21440c");
#endif

    ctx->pc = 0x21440cu;

    // 0x21440c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x21440Cu;
    SET_GPR_U32(ctx, 31, 0x214414u);
    ctx->pc = 0x214410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21440Cu;
    // 0x214410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x21440Cu, 0x214414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214414u;
}
