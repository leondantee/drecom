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

// Function: entry_00115160
// Address: 0x115160 - 0x115168
void entry_00115160_0x115160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115160_0x115160");
#endif

    ctx->pc = 0x115160u;

    // 0x115160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115160u;
    {
        const bool branch_taken_0x115160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115160u;
        // 0x115164: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115160) {
            ctx->pc = 0x115178u;
            return;
        }
    }
    ctx->pc = 0x115168u;
}
