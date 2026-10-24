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

// Function: entry_0011c838
// Address: 0x11c838 - 0x11c854
void entry_0011c838_0x11c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c838_0x11c838");
#endif

    switch (ctx->pc) {
        case 0x11c84cu: goto label_11c84c;
        default: break;
    }

    ctx->pc = 0x11c838u;

    // 0x11c838: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c83c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C83Cu;
    {
        const bool branch_taken_0x11c83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C83Cu;
        // 0x11c840: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c83c) {
            ctx->pc = 0x11C854u;
            return;
        }
    }
    ctx->pc = 0x11C844u;
    // 0x11c844: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C844u;
    SET_GPR_U32(ctx, 31, 0x11C84Cu);
    ctx->pc = 0x11C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C844u;
    // 0x11c848: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C844u, 0x11C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C84Cu;
    {
        const bool branch_taken_0x11c84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C84Cu;
        // 0x11c850: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c84c) {
            ctx->pc = 0x11C85Cu;
            return;
        }
    }
    ctx->pc = 0x11C854u;
}
