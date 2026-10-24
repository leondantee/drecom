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

// Function: entry_0010bf70
// Address: 0x10bf70 - 0x10bf78
void entry_0010bf70_0x10bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf70_0x10bf70");
#endif

    ctx->pc = 0x10bf70u;

    // 0x10bf70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BF70u;
    {
        const bool branch_taken_0x10bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF70u;
        // 0x10bf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf70) {
            ctx->pc = 0x10BF80u;
            return;
        }
    }
    ctx->pc = 0x10BF78u;
}
