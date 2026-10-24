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

// Function: entry_0010df48
// Address: 0x10df48 - 0x10df50
void entry_0010df48_0x10df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df48_0x10df48");
#endif

    ctx->pc = 0x10df48u;

    // 0x10df48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10DF48u;
    {
        const bool branch_taken_0x10df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF48u;
        // 0x10df4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df48) {
            ctx->pc = 0x10DF70u;
            return;
        }
    }
    ctx->pc = 0x10DF50u;
}
