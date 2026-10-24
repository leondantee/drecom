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

// Function: entry_0011ef10
// Address: 0x11ef10 - 0x11ef28
void entry_0011ef10_0x11ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef10_0x11ef10");
#endif

    ctx->pc = 0x11ef10u;

    // 0x11ef10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF10u;
    {
        const bool branch_taken_0x11ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF10u;
        // 0x11ef14: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef10) {
            ctx->pc = 0x11EF28u;
            return;
        }
    }
    ctx->pc = 0x11EF18u;
    // 0x11ef18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ef1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11EF20u;
    {
        const bool branch_taken_0x11ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF20u;
        // 0x11ef24: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef20) {
            ctx->pc = 0x11EFB8u;
            return;
        }
    }
    ctx->pc = 0x11EF28u;
}
