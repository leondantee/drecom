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

// Function: entry_0011ea20
// Address: 0x11ea20 - 0x11ea34
void entry_0011ea20_0x11ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea20_0x11ea20");
#endif

    ctx->pc = 0x11ea20u;

    // 0x11ea20: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x11EA20u;
    {
        const bool branch_taken_0x11ea20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x11EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA20u;
        // 0x11ea24: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea20) {
            ctx->pc = 0x11EAB4u;
            return;
        }
    }
    ctx->pc = 0x11EA28u;
    // 0x11ea28: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11EA28u;
    {
        const bool branch_taken_0x11ea28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA28u;
        // 0x11ea2c: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea28) {
            ctx->pc = 0x11EA34u;
            return;
        }
    }
    ctx->pc = 0x11EA30u;
    // 0x11ea30: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x11ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
    ctx->pc = 0x11ea34u;
}
