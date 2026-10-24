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

// Function: entry_00108108
// Address: 0x108108 - 0x10813c
void entry_00108108_0x108108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108108_0x108108");
#endif

    ctx->pc = 0x108108u;

    // 0x108108: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10810c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108110: 0x8c433c10  lw          $v1, 0x3C10($v0)
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C10u));
    // 0x108114: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x108114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x108118: 0x14a40048  bne         $a1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x108118u;
    {
        const bool branch_taken_0x108118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108118) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x108120u;
    // 0x108120: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108124: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x108124u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108128: 0x8c443c1c  lw          $a0, 0x3C1C($v0)
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C1Cu));
    // 0x10812c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108130: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x108130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x108134: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x108134u;
    {
        const bool branch_taken_0x108134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108134u;
        // 0x108138: 0x3c80b  movn        $t9, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108134) {
            ctx->pc = 0x108238u;
            return;
        }
    }
    ctx->pc = 0x10813Cu;
}
