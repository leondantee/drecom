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

// Function: entry_0010429c
// Address: 0x10429c - 0x1042b0
void entry_0010429c_0x10429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010429c_0x10429c");
#endif

    switch (ctx->pc) {
        case 0x1042a8u: goto label_1042a8;
        default: break;
    }

    ctx->pc = 0x10429cu;

    // 0x10429c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042a0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1042A0u;
    SET_GPR_U32(ctx, 31, 0x1042A8u);
    ctx->pc = 0x1042A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A0u;
    // 0x1042a4: 0x2484c5e8  addiu       $a0, $a0, -0x3A18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1042A0u, 0x1042A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042A8u;
label_1042a8:
    // 0x1042a8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1042A8u;
    {
        const bool branch_taken_0x1042a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042A8u;
        // 0x1042ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042a8) {
            ctx->pc = 0x1044F0u;
            return;
        }
    }
    ctx->pc = 0x1042B0u;
}
