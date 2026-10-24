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

// Function: entry_0011933c
// Address: 0x11933c - 0x119358
void entry_0011933c_0x11933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011933c_0x11933c");
#endif

    ctx->pc = 0x11933cu;

    // 0x11933c: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x11933cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119340: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x119340u;
    {
        const bool branch_taken_0x119340 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x119344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119340u;
        // 0x119344: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119340) {
            ctx->pc = 0x1193ACu;
            return;
        }
    }
    ctx->pc = 0x119348u;
    // 0x119348: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x119348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11934c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x11934cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119350: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x119350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119354: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x119354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119358u;
}
