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

// Function: entry_0011b76c
// Address: 0x11b76c - 0x11b784
void entry_0011b76c_0x11b76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b76c_0x11b76c");
#endif

    ctx->pc = 0x11b76cu;

    // 0x11b76c: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x11B76Cu;
    {
        const bool branch_taken_0x11b76c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B76Cu;
        // 0x11b770: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b76c) {
            ctx->pc = 0x11BADCu;
            return;
        }
    }
    ctx->pc = 0x11B774u;
    // 0x11b774: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x11b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11b778: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x11b778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x11b77c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x11B77Cu;
    {
        const bool branch_taken_0x11b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B77Cu;
        // 0x11b780: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b77c) {
            ctx->pc = 0x11BADCu;
            return;
        }
    }
    ctx->pc = 0x11B784u;
}
