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

// Function: entry_00118d9c
// Address: 0x118d9c - 0x118da4
void entry_00118d9c_0x118d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d9c_0x118d9c");
#endif

    ctx->pc = 0x118d9cu;

    // 0x118d9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118D9Cu;
    {
        const bool branch_taken_0x118d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D9Cu;
        // 0x118da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d9c) {
            ctx->pc = 0x118DB4u;
            return;
        }
    }
    ctx->pc = 0x118DA4u;
}
