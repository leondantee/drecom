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

// Function: entry_0011f2c0
// Address: 0x11f2c0 - 0x11f2e4
void entry_0011f2c0_0x11f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2c0_0x11f2c0");
#endif

    ctx->pc = 0x11f2c0u;

    // 0x11f2c0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F2C0u;
    {
        const bool branch_taken_0x11f2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2C0u;
        // 0x11f2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2c0) {
            ctx->pc = 0x11F31Cu;
            return;
        }
    }
    ctx->pc = 0x11F2C8u;
    // 0x11f2c8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11f2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2CCu;
    {
        const bool branch_taken_0x11f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2CCu;
        // 0x11f2d0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2cc) {
            ctx->pc = 0x11F2E4u;
            return;
        }
    }
    ctx->pc = 0x11F2D4u;
    // 0x11f2d4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11F2D4u;
    {
        const bool branch_taken_0x11f2d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2D4u;
        // 0x11f2d8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2d4) {
            ctx->pc = 0x11F2B8u;
            return;
        }
    }
    ctx->pc = 0x11F2DCu;
    // 0x11f2dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F2DCu;
    {
        const bool branch_taken_0x11f2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f2dc) {
            ctx->pc = 0x11F2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F2DCu;
            // 0x11f2e0: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2F0u;
            return;
        }
    }
    ctx->pc = 0x11F2E4u;
}
