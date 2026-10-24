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

// Function: entry_0011f410
// Address: 0x11f410 - 0x11f42c
void entry_0011f410_0x11f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f410_0x11f410");
#endif

    ctx->pc = 0x11f410u;

    // 0x11f410: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11f414: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F414u;
    {
        const bool branch_taken_0x11f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F414u;
        // 0x11f418: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f414) {
            ctx->pc = 0x11F468u;
            return;
        }
    }
    ctx->pc = 0x11F41Cu;
    // 0x11f41c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F41Cu;
    {
        const bool branch_taken_0x11f41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f41c) {
            ctx->pc = 0x11F42Cu;
            return;
        }
    }
    ctx->pc = 0x11F424u;
    // 0x11f424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11F424u;
    {
        const bool branch_taken_0x11f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F424u;
        // 0x11f428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f424) {
            ctx->pc = 0x11F4A4u;
            return;
        }
    }
    ctx->pc = 0x11F42Cu;
}
