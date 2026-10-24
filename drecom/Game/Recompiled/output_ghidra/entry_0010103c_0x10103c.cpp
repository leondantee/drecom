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

// Function: entry_0010103c
// Address: 0x10103c - 0x101078
void entry_0010103c_0x10103c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010103c_0x10103c");
#endif

    ctx->pc = 0x10103cu;

    // 0x10103c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101040: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101044: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x101044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x101048: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x10104c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10104cu;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 5));
    // 0x101050: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x101050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x101054: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101054u;
    {
        const bool branch_taken_0x101054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x101058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101054u;
        // 0x101058: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101054) {
            ctx->pc = 0x101078u;
            return;
        }
    }
    ctx->pc = 0x10105Cu;
    // 0x10105c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101060: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101064: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101068: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x101068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x10106c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x10106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x101070: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101070u;
    {
        const bool branch_taken_0x101070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101070u;
        // 0x101074: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101070) {
            ctx->pc = 0x101088u;
            return;
        }
    }
    ctx->pc = 0x101078u;
}
