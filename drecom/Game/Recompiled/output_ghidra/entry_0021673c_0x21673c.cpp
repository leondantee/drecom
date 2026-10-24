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

// Function: entry_0021673c
// Address: 0x21673c - 0x21674c
void entry_0021673c_0x21673c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021673c_0x21673c");
#endif

    switch (ctx->pc) {
        case 0x216744u: goto label_216744;
        default: break;
    }

    ctx->pc = 0x21673cu;

    // 0x21673c: 0xc0858c8  jal         func_216320
    ctx->pc = 0x21673Cu;
    SET_GPR_U32(ctx, 31, 0x216744u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x21673Cu, 0x216744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216744u;
label_216744:
    // 0x216744: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x216744u;
    {
        const bool branch_taken_0x216744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216744u;
        // 0x216748: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216744) {
            ctx->pc = 0x2167B0u;
            return;
        }
    }
    ctx->pc = 0x21674Cu;
}
