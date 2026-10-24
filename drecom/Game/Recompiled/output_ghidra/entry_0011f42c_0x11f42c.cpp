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

// Function: entry_0011f42c
// Address: 0x11f42c - 0x11f45c
void entry_0011f42c_0x11f42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f42c_0x11f42c");
#endif

    ctx->pc = 0x11f42cu;

    // 0x11f42c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11F42Cu;
    {
        const bool branch_taken_0x11f42c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F42Cu;
        // 0x11f430: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f42c) {
            ctx->pc = 0x11F4A8u;
            return;
        }
    }
    ctx->pc = 0x11F434u;
    // 0x11f434: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f438: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x11f438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x11f43c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F43Cu;
    {
        const bool branch_taken_0x11f43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F43Cu;
        // 0x11f440: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f43c) {
            ctx->pc = 0x11F45Cu;
            return;
        }
    }
    ctx->pc = 0x11F444u;
    // 0x11f444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11f444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f448: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x11f448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x11f44c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F44Cu;
        // 0x11f450: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F4A0u;
            return;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11F454u;
    {
        const bool branch_taken_0x11f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F454u;
        // 0x11f458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f454) {
            ctx->pc = 0x11F4A0u;
            return;
        }
    }
    ctx->pc = 0x11F45Cu;
}
