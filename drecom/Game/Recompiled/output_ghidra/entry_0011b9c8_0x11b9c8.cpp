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

// Function: entry_0011b9c8
// Address: 0x11b9c8 - 0x11b9d0
void entry_0011b9c8_0x11b9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9c8_0x11b9c8");
#endif

    ctx->pc = 0x11b9c8u;

    // 0x11b9c8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11B9C8u;
    {
        const bool branch_taken_0x11b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C8u;
        // 0x11b9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9c8) {
            ctx->pc = 0x11BAD8u;
            return;
        }
    }
    ctx->pc = 0x11B9D0u;
}
