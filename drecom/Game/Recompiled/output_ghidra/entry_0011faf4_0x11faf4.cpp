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

// Function: entry_0011faf4
// Address: 0x11faf4 - 0x11fb08
void entry_0011faf4_0x11faf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011faf4_0x11faf4");
#endif

    ctx->pc = 0x11faf4u;

    // 0x11faf4: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x11FAF4u;
    {
        const bool branch_taken_0x11faf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faf4) {
            ctx->pc = 0x11FBC0u;
            return;
        }
    }
    ctx->pc = 0x11FAFCu;
    // 0x11fafc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11fb00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11FB00u;
    {
        const bool branch_taken_0x11fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB00u;
        // 0x11fb04: 0x24446818  addiu       $a0, $v0, 0x6818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb00) {
            ctx->pc = 0x11FBC0u;
            return;
        }
    }
    ctx->pc = 0x11FB08u;
}
