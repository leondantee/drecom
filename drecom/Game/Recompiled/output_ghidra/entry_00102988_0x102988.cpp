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

// Function: entry_00102988
// Address: 0x102988 - 0x1029a4
void entry_00102988_0x102988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102988_0x102988");
#endif

    ctx->pc = 0x102988u;

    // 0x102988: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10298c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10298Cu;
    {
        const bool branch_taken_0x10298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x102990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10298Cu;
        // 0x102990: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10298c) {
            ctx->pc = 0x1029A4u;
            return;
        }
    }
    ctx->pc = 0x102994u;
    // 0x102994: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102994u;
    {
        const bool branch_taken_0x102994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x102998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102994u;
        // 0x102998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102994) {
            ctx->pc = 0x1029BCu;
            return;
        }
    }
    ctx->pc = 0x10299Cu;
    // 0x10299c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10299Cu;
    {
        const bool branch_taken_0x10299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10299c) {
            ctx->pc = 0x1029C4u;
            return;
        }
    }
    ctx->pc = 0x1029A4u;
}
