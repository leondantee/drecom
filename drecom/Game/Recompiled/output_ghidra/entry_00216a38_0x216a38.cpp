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

// Function: entry_00216a38
// Address: 0x216a38 - 0x216a48
void entry_00216a38_0x216a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216a38_0x216a38");
#endif

    switch (ctx->pc) {
        case 0x216a40u: goto label_216a40;
        default: break;
    }

    ctx->pc = 0x216a38u;

    // 0x216a38: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216A38u;
    SET_GPR_U32(ctx, 31, 0x216A40u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216A38u, 0x216A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A40u;
label_216a40:
    // 0x216a40: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x216A40u;
    {
        const bool branch_taken_0x216a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A40u;
        // 0x216a44: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a40) {
            ctx->pc = 0x216B34u;
            return;
        }
    }
    ctx->pc = 0x216A48u;
}
