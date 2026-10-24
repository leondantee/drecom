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

// Function: entry_001046bc
// Address: 0x1046bc - 0x1046c8
void entry_001046bc_0x1046bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001046bc_0x1046bc");
#endif

    ctx->pc = 0x1046bcu;

    // 0x1046bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1046bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1046C0u;
    SET_GPR_U32(ctx, 31, 0x1046C8u);
    ctx->pc = 0x1046C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046C0u;
    // 0x1046c4: 0x2484c628  addiu       $a0, $a0, -0x39D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1046C0u, 0x1046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046C8u;
}
