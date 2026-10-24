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

// Function: entry_0011d154
// Address: 0x11d154 - 0x11d164
void entry_0011d154_0x11d154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d154_0x11d154");
#endif

    ctx->pc = 0x11d154u;

    // 0x11d154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D154u;
    {
        const bool branch_taken_0x11d154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D154u;
        // 0x11d158: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d154) {
            ctx->pc = 0x11D164u;
            return;
        }
    }
    ctx->pc = 0x11D15Cu;
    // 0x11d15c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x11D15Cu;
    {
        const bool branch_taken_0x11d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D15Cu;
        // 0x11d160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d15c) {
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11D164u;
}
