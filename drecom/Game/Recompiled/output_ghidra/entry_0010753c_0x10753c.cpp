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

// Function: entry_0010753c
// Address: 0x10753c - 0x107554
void entry_0010753c_0x10753c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010753c_0x10753c");
#endif

    ctx->pc = 0x10753cu;

    // 0x10753c: 0x1073001b  beq         $v1, $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x10753Cu;
    {
        const bool branch_taken_0x10753c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x107540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10753Cu;
        // 0x107540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10753c) {
            ctx->pc = 0x1075ACu;
            return;
        }
    }
    ctx->pc = 0x107544u;
    // 0x107544: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x107544u;
    {
        const bool branch_taken_0x107544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x107544) {
            ctx->pc = 0x107564u;
            return;
        }
    }
    ctx->pc = 0x10754Cu;
    // 0x10754c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x10754Cu;
    {
        const bool branch_taken_0x10754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10754c) {
            ctx->pc = 0x107508u;
            return;
        }
    }
    ctx->pc = 0x107554u;
}
