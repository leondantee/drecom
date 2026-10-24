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

// Function: entry_00106d90
// Address: 0x106d90 - 0x106da4
void entry_00106d90_0x106d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d90_0x106d90");
#endif

    ctx->pc = 0x106d90u;

    // 0x106d90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x106d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106d94: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x106d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x106d98: 0x1052fff7  beq         $v0, $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x106D98u;
    {
        const bool branch_taken_0x106d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x106D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D98u;
        // 0x106d9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d98) {
            ctx->pc = 0x106D78u;
            return;
        }
    }
    ctx->pc = 0x106DA0u;
    // 0x106da0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x106da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x106da4u;
}
