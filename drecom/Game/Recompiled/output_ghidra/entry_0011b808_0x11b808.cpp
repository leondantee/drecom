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

// Function: entry_0011b808
// Address: 0x11b808 - 0x11b824
void entry_0011b808_0x11b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b808_0x11b808");
#endif

    switch (ctx->pc) {
        case 0x11b810u: goto label_11b810;
        default: break;
    }

    ctx->pc = 0x11b808u;

    // 0x11b808: 0xc04526c  jal         func_1149B0
    ctx->pc = 0x11B808u;
    SET_GPR_U32(ctx, 31, 0x11B810u);
    ctx->pc = 0x11B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B808u;
    // 0x11b80c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149B0u, 0x11B808u, 0x11B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B810u;
label_11b810:
    // 0x11b810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B810u;
    {
        const bool branch_taken_0x11b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B810u;
        // 0x11b814: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b810) {
            ctx->pc = 0x11B824u;
            return;
        }
    }
    ctx->pc = 0x11B818u;
    // 0x11b818: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b81c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x11B81Cu;
    {
        const bool branch_taken_0x11b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B81Cu;
        // 0x11b820: 0x2453db48  addiu       $s3, $v0, -0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b81c) {
            ctx->pc = 0x11BC58u;
            return;
        }
    }
    ctx->pc = 0x11B824u;
}
