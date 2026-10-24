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

// Function: entry_0010136c
// Address: 0x10136c - 0x101390
void entry_0010136c_0x10136c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010136c_0x10136c");
#endif

    ctx->pc = 0x10136cu;

    // 0x10136c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101370: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x101370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101374u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x101378: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x10137c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10137Cu;
    {
        const bool branch_taken_0x10137c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10137Cu;
        // 0x101380: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10137c) {
            ctx->pc = 0x1013ACu;
            return;
        }
    }
    ctx->pc = 0x101384u;
    // 0x101384: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101388: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x101388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x10138c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101390u;
}
