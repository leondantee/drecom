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

// Function: entry_00106ef8
// Address: 0x106ef8 - 0x106f24
void entry_00106ef8_0x106ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ef8_0x106ef8");
#endif

    ctx->pc = 0x106ef8u;

    // 0x106ef8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106efc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x106efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x106f00: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x106f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x106f04: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x106f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x106f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106f08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x106f0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106f10: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x106f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x106f14: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x106F14u;
    {
        const bool branch_taken_0x106f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x106F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F14u;
        // 0x106f18: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f14) {
            ctx->pc = 0x106ED8u;
            return;
        }
    }
    ctx->pc = 0x106F1Cu;
    // 0x106f1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x106F1Cu;
    {
        const bool branch_taken_0x106f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F1Cu;
        // 0x106f20: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f1c) {
            ctx->pc = 0x106F40u;
            return;
        }
    }
    ctx->pc = 0x106F24u;
}
