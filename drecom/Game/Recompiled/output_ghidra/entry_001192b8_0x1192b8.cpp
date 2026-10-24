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

// Function: entry_001192b8
// Address: 0x1192b8 - 0x1192d8
void entry_001192b8_0x1192b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192b8_0x1192b8");
#endif

    ctx->pc = 0x1192b8u;

    // 0x1192b8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1192b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1192bc: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1192bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1192c0: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1192C0u;
    {
        const bool branch_taken_0x1192c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192C0u;
        // 0x1192c4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192c0) {
            ctx->pc = 0x119334u;
            return;
        }
    }
    ctx->pc = 0x1192C8u;
    // 0x1192c8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d0: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1192d4: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    ctx->pc = 0x1192d8u;
}
