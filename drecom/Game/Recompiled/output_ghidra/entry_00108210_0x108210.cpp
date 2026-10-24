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

// Function: entry_00108210
// Address: 0x108210 - 0x108234
void entry_00108210_0x108210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108210_0x108210");
#endif

    ctx->pc = 0x108210u;

    // 0x108210: 0x8c433c0c  lw          $v1, 0x3C0C($v0)
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x108214: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x108218: 0x14a60008  bne         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x108218u;
    {
        const bool branch_taken_0x108218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x10821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108218u;
        // 0x10821c: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108218) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x108220u;
    // 0x108220: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108224: 0x8c433c18  lw          $v1, 0x3C18($v0)
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C18u));
    // 0x108228: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10822c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10822Cu;
    {
        const bool branch_taken_0x10822c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x108230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10822Cu;
        // 0x108230: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10822c) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x108234u;
}
