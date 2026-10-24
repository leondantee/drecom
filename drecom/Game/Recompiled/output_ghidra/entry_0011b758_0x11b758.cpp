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

// Function: entry_0011b758
// Address: 0x11b758 - 0x11b768
void entry_0011b758_0x11b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b758_0x11b758");
#endif

    ctx->pc = 0x11b758u;

    // 0x11b758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B758u;
    {
        const bool branch_taken_0x11b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B758u;
        // 0x11b75c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b758) {
            ctx->pc = 0x11B768u;
            return;
        }
    }
    ctx->pc = 0x11B760u;
    // 0x11b760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B760u;
    {
        const bool branch_taken_0x11b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B760u;
        // 0x11b764: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b760) {
            ctx->pc = 0x11B76Cu;
            return;
        }
    }
    ctx->pc = 0x11B768u;
}
