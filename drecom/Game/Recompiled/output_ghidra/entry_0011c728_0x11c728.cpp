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

// Function: entry_0011c728
// Address: 0x11c728 - 0x11c748
void entry_0011c728_0x11c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c728_0x11c728");
#endif

    ctx->pc = 0x11c728u;

    // 0x11c728: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11C728u;
    {
        const bool branch_taken_0x11c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C728u;
        // 0x11c72c: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c728) {
            ctx->pc = 0x11C7F0u;
            return;
        }
    }
    ctx->pc = 0x11C730u;
    // 0x11c730: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c734: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11c738: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11C738u;
    {
        const bool branch_taken_0x11c738 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C738u;
        // 0x11c73c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c738) {
            ctx->pc = 0x11C7F0u;
            return;
        }
    }
    ctx->pc = 0x11C740u;
    // 0x11c740: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11C740u;
    {
        const bool branch_taken_0x11c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C740u;
        // 0x11c744: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c740) {
            ctx->pc = 0x11C7B0u;
            return;
        }
    }
    ctx->pc = 0x11C748u;
}
