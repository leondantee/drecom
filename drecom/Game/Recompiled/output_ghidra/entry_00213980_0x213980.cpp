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

// Function: entry_00213980
// Address: 0x213980 - 0x213994
void entry_00213980_0x213980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213980_0x213980");
#endif

    ctx->pc = 0x213980u;

    // 0x213980: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213980u;
    {
        const bool branch_taken_0x213980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213980u;
        // 0x213984: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213980) {
            ctx->pc = 0x213994u;
            return;
        }
    }
    ctx->pc = 0x213988u;
    // 0x213988: 0x8c43aac8  lw          $v1, -0x5538($v0)
    ctx->pc = 0x213988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945480)));
    // 0x21398c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21398Cu;
    {
        const bool branch_taken_0x21398c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21398Cu;
        // 0x213990: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21398c) {
            ctx->pc = 0x21399Cu;
            return;
        }
    }
    ctx->pc = 0x213994u;
}
