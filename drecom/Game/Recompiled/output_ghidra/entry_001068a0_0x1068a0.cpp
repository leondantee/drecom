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

// Function: entry_001068a0
// Address: 0x1068a0 - 0x1068d0
void entry_001068a0_0x1068a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001068a0_0x1068a0");
#endif

    ctx->pc = 0x1068a0u;

    // 0x1068a0: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x1068A0u;
    {
        const bool branch_taken_0x1068a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A0u;
        // 0x1068a4: 0xae003e3c  sw          $zero, 0x3E3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068a0) {
            ctx->pc = 0x106514u;
            return;
        }
    }
    ctx->pc = 0x1068A8u;
    // 0x1068a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1068ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1068acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1068b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1068B0u;
    {
        const bool branch_taken_0x1068b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068B0u;
        // 0x1068b4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068b0) {
            ctx->pc = 0x1068D0u;
            return;
        }
    }
    ctx->pc = 0x1068B8u;
    // 0x1068b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1068bc: 0xae033e3c  sw          $v1, 0x3E3C($s0)
    ctx->pc = 0x1068bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15932), GPR_U32(ctx, 3));
    // 0x1068c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1068c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1068c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1068C8u;
    {
        const bool branch_taken_0x1068c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068C8u;
        // 0x1068cc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068c8) {
            ctx->pc = 0x1068FCu;
            return;
        }
    }
    ctx->pc = 0x1068D0u;
}
