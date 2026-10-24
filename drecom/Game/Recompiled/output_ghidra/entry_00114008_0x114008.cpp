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

// Function: entry_00114008
// Address: 0x114008 - 0x114020
void entry_00114008_0x114008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114008_0x114008");
#endif

    ctx->pc = 0x114008u;

    // 0x114008: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x11400c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114010: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x114010u;
    {
        const bool branch_taken_0x114010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x114014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114010u;
        // 0x114014: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114010) {
            ctx->pc = 0x114114u;
            return;
        }
    }
    ctx->pc = 0x114018u;
    // 0x114018: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114018u;
        // 0x11401c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x114234u;
            return;
        }
    }
    ctx->pc = 0x114020u;
}
