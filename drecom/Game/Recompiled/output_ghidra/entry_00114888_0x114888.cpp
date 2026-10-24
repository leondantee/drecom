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

// Function: entry_00114888
// Address: 0x114888 - 0x114894
void entry_00114888_0x114888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114888_0x114888");
#endif

    ctx->pc = 0x114888u;

    // 0x114888: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x114888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11488c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11488Cu;
    {
        const bool branch_taken_0x11488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11488Cu;
        // 0x114890: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11488c) {
            ctx->pc = 0x114930u;
            return;
        }
    }
    ctx->pc = 0x114894u;
}
