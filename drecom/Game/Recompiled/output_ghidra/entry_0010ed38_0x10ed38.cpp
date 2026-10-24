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

// Function: entry_0010ed38
// Address: 0x10ed38 - 0x10ed68
void entry_0010ed38_0x10ed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed38_0x10ed38");
#endif

    ctx->pc = 0x10ed38u;

    // 0x10ed38: 0xac8045c8  sw          $zero, 0x45C8($a0)
    ctx->pc = 0x10ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17864), GPR_U32(ctx, 0));
    // 0x10ed3c: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x10ED3Cu;
    {
        const bool branch_taken_0x10ed3c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x10ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED3Cu;
        // 0x10ed40: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed3c) {
            ctx->pc = 0x10ED94u;
            return;
        }
    }
    ctx->pc = 0x10ED44u;
    // 0x10ed44: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10ED44u;
    {
        const bool branch_taken_0x10ed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED44u;
        // 0x10ed48: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed44) {
            ctx->pc = 0x10ED94u;
            return;
        }
    }
    ctx->pc = 0x10ED4Cu;
    // 0x10ed4c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10ED4Cu;
    {
        const bool branch_taken_0x10ed4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x10ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED4Cu;
        // 0x10ed50: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed4c) {
            ctx->pc = 0x10ED94u;
            return;
        }
    }
    ctx->pc = 0x10ED54u;
    // 0x10ed54: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10ed58: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED58u;
    {
        const bool branch_taken_0x10ed58 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED58u;
        // 0x10ed5c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed58) {
            ctx->pc = 0x10ED68u;
            return;
        }
    }
    ctx->pc = 0x10ED60u;
    // 0x10ed60: 0xc046760  jal         func_119D80
    ctx->pc = 0x10ED60u;
    SET_GPR_U32(ctx, 31, 0x10ED68u);
    ctx->pc = 0x10ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED60u;
    // 0x10ed64: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10ED68u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10ED68u) { return; }
    ctx->pc = 0x10ED68u;
}
