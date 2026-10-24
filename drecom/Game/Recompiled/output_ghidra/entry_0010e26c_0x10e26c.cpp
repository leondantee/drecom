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

// Function: entry_0010e26c
// Address: 0x10e26c - 0x10e274
void entry_0010e26c_0x10e26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e26c_0x10e26c");
#endif

    ctx->pc = 0x10e26cu;

    // 0x10e26c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E26Cu;
    {
        const bool branch_taken_0x10e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E26Cu;
        // 0x10e270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e26c) {
            ctx->pc = 0x10E298u;
            return;
        }
    }
    ctx->pc = 0x10E274u;
}
