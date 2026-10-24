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

// Function: entry_0010651c
// Address: 0x10651c - 0x106544
void entry_0010651c_0x10651c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010651c_0x10651c");
#endif

    ctx->pc = 0x10651cu;

    // 0x10651c: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x10651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x106520: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106520u;
    {
        const bool branch_taken_0x106520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106520u;
        // 0x106524: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106520) {
            ctx->pc = 0x106554u;
            return;
        }
    }
    ctx->pc = 0x106528u;
    // 0x106528: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10652c: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15788)));
    // 0x106530: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106530u;
    {
        const bool branch_taken_0x106530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106530u;
        // 0x106534: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106530) {
            ctx->pc = 0x106544u;
            return;
        }
    }
    ctx->pc = 0x106538u;
    // 0x106538: 0x8c433db4  lw          $v1, 0x3DB4($v0)
    ctx->pc = 0x106538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15796)));
    // 0x10653c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10653Cu;
    {
        const bool branch_taken_0x10653c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10653Cu;
        // 0x106540: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10653c) {
            ctx->pc = 0x106580u;
            return;
        }
    }
    ctx->pc = 0x106544u;
}
