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

// Function: entry_00106040
// Address: 0x106040 - 0x106058
void entry_00106040_0x106040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106040_0x106040");
#endif

    switch (ctx->pc) {
        case 0x106054u: goto label_106054;
        default: break;
    }

    ctx->pc = 0x106040u;

    // 0x106040: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106040u;
    {
        const bool branch_taken_0x106040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106040u;
        // 0x106044: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106040) {
            ctx->pc = 0x106058u;
            return;
        }
    }
    ctx->pc = 0x106048u;
    // 0x106048: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x106048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10604c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10604Cu;
    SET_GPR_U32(ctx, 31, 0x106054u);
    ctx->pc = 0x106050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10604Cu;
    // 0x106050: 0x2484c6b8  addiu       $a0, $a0, -0x3948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10604Cu, 0x106054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106054u;
label_106054:
    // 0x106054: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x106054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106058u;
}
