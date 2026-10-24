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

// Function: entry_00114818
// Address: 0x114818 - 0x114838
void entry_00114818_0x114818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114818_0x114818");
#endif

    ctx->pc = 0x114818u;

    // 0x114818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11481c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x11481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x114820: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x114820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x114824: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x114824u;
    {
        const bool branch_taken_0x114824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114824u;
        // 0x114828: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114824) {
            ctx->pc = 0x114938u;
            return;
        }
    }
    ctx->pc = 0x11482Cu;
    // 0x11482c: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x114830: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x114830u;
    {
        const bool branch_taken_0x114830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114830u;
        // 0x114834: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114830) {
            ctx->pc = 0x114930u;
            return;
        }
    }
    ctx->pc = 0x114838u;
}
