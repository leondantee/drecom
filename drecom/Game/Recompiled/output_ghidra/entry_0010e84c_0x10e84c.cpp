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

// Function: entry_0010e84c
// Address: 0x10e84c - 0x10e854
void entry_0010e84c_0x10e84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e84c_0x10e84c");
#endif

    ctx->pc = 0x10e84cu;

    // 0x10e84c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E84Cu;
    {
        const bool branch_taken_0x10e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E84Cu;
        // 0x10e850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e84c) {
            ctx->pc = 0x10E864u;
            return;
        }
    }
    ctx->pc = 0x10E854u;
}
