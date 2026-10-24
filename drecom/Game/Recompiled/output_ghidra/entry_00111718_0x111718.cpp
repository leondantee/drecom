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

// Function: entry_00111718
// Address: 0x111718 - 0x111744
void entry_00111718_0x111718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111718_0x111718");
#endif

    ctx->pc = 0x111718u;

    // 0x111718: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x111720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111720u;
    {
        const bool branch_taken_0x111720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111720u;
        // 0x111724: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111720) {
            ctx->pc = 0x111744u;
            return;
        }
    }
    ctx->pc = 0x111728u;
    // 0x111728: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x111728u;
    {
        const bool branch_taken_0x111728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x11172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111728u;
        // 0x11172c: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111728) {
            ctx->pc = 0x111774u;
            return;
        }
    }
    ctx->pc = 0x111730u;
    // 0x111730: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x111734: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x111734u;
    {
        const bool branch_taken_0x111734 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x111734) {
            ctx->pc = 0x111738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111734u;
            // 0x111738: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111778u;
            return;
        }
    }
    ctx->pc = 0x11173Cu;
    // 0x11173c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11173Cu;
    {
        const bool branch_taken_0x11173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11173Cu;
        // 0x111740: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11173c) {
            ctx->pc = 0x11174Cu;
            return;
        }
    }
    ctx->pc = 0x111744u;
}
