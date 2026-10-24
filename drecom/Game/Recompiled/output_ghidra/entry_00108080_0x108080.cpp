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

// Function: entry_00108080
// Address: 0x108080 - 0x1080b4
void entry_00108080_0x108080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108080_0x108080");
#endif

    ctx->pc = 0x108080u;

    // 0x108080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108084: 0x8e423dac  lw          $v0, 0x3DAC($s2)
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
    // 0x108088: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x108088u;
    {
        const bool branch_taken_0x108088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108088u;
        // 0x10808c: 0xace03e34  sw          $zero, 0x3E34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108088) {
            ctx->pc = 0x1080D0u;
            return;
        }
    }
    ctx->pc = 0x108090u;
    // 0x108090: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108098: 0x8c433c00  lw          $v1, 0x3C00($v0)
    ctx->pc = 0x108098u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C00u));
    // 0x10809c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x10809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080a0: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A0u;
        // 0x1080a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x1080B4u;
            return;
        }
    }
    ctx->pc = 0x1080A8u;
    // 0x1080a8: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x1080ac: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1080ACu;
    {
        const bool branch_taken_0x1080ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080ACu;
        // 0x1080b0: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ac) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x1080B4u;
}
