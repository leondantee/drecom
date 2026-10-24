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

// Function: entry_00106514
// Address: 0x106514 - 0x10651c
void entry_00106514_0x106514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106514_0x106514");
#endif

    ctx->pc = 0x106514u;

    // 0x106514: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x106514u;
    {
        const bool branch_taken_0x106514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106514u;
        // 0x106518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106514) {
            ctx->pc = 0x10696Cu;
            return;
        }
    }
    ctx->pc = 0x10651Cu;
}
