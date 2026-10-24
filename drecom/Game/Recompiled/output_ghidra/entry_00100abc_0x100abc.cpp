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

// Function: entry_00100abc
// Address: 0x100abc - 0x100ae0
void entry_00100abc_0x100abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100abc_0x100abc");
#endif

    ctx->pc = 0x100abcu;

    // 0x100abc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x100abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x100ac0: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x100ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x100ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x100ac8: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x100ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x100acc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x100ACCu;
    {
        const bool branch_taken_0x100acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ACCu;
        // 0x100ad0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100acc) {
            ctx->pc = 0x100AFCu;
            return;
        }
    }
    ctx->pc = 0x100AD4u;
    // 0x100ad4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x100ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x100ad8: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x100ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x100adc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x100adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100ae0u;
}
