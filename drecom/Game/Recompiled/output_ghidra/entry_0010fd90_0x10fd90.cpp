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

// Function: entry_0010fd90
// Address: 0x10fd90 - 0x10fda0
void entry_0010fd90_0x10fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd90_0x10fd90");
#endif

    ctx->pc = 0x10fd90u;

    // 0x10fd90: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FD90u;
    {
        const bool branch_taken_0x10fd90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd90) {
            ctx->pc = 0x10FDA0u;
            return;
        }
    }
    ctx->pc = 0x10FD98u;
    // 0x10fd98: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FD98u;
    SET_GPR_U32(ctx, 31, 0x10FDA0u);
    ctx->pc = 0x10FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD98u;
    // 0x10fd9c: 0x2484cfe8  addiu       $a0, $a0, -0x3018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FDA0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FDA0u) { return; }
    ctx->pc = 0x10FDA0u;
}
