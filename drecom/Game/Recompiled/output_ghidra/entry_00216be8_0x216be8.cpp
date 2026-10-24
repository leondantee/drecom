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

// Function: entry_00216be8
// Address: 0x216be8 - 0x216bf8
void entry_00216be8_0x216be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216be8_0x216be8");
#endif

    switch (ctx->pc) {
        case 0x216bf0u: goto label_216bf0;
        default: break;
    }

    ctx->pc = 0x216be8u;

    // 0x216be8: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216BE8u;
    SET_GPR_U32(ctx, 31, 0x216BF0u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216BE8u, 0x216BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF0u;
label_216bf0:
    // 0x216bf0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x216BF0u;
    {
        const bool branch_taken_0x216bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF0u;
        // 0x216bf4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bf0) {
            ctx->pc = 0x216D18u;
            return;
        }
    }
    ctx->pc = 0x216BF8u;
}
