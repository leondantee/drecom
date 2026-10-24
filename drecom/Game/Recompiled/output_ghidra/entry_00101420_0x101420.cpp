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

// Function: entry_00101420
// Address: 0x101420 - 0x101450
void entry_00101420_0x101420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101420_0x101420");
#endif

    ctx->pc = 0x101420u;

    // 0x101420: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101424: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101428: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10142c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x10142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101430: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101430u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x101434: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101434u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x101438: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x101438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10143c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10143Cu;
    {
        const bool branch_taken_0x10143c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10143Cu;
        // 0x101440: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10143c) {
            ctx->pc = 0x10146Cu;
            return;
        }
    }
    ctx->pc = 0x101444u;
    // 0x101444: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101448: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x101448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x10144c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101450u;
}
