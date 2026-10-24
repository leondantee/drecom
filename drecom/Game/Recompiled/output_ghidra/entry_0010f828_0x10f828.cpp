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

// Function: entry_0010f828
// Address: 0x10f828 - 0x10f868
void entry_0010f828_0x10f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f828_0x10f828");
#endif

    switch (ctx->pc) {
        case 0x10f84cu: goto label_10f84c;
        default: break;
    }

    ctx->pc = 0x10f828u;

label_10f828:
    // 0x10f828: 0x26843e80  addiu       $a0, $s4, 0x3E80
    ctx->pc = 0x10f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
    // 0x10f82c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10f830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f834: 0x26675110  addiu       $a3, $s3, 0x5110
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 20752));
    // 0x10f838: 0x24080084  addiu       $t0, $zero, 0x84
    ctx->pc = 0x10f838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x10f83c: 0x26c93c00  addiu       $t1, $s6, 0x3C00
    ctx->pc = 0x10f83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 15360));
    // 0x10f840: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f840u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f844: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F844u;
    SET_GPR_U32(ctx, 31, 0x10F84Cu);
    ctx->pc = 0x10F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F844u;
    // 0x10f848: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F84Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F84Cu) { return; }
    ctx->pc = 0x10F84Cu;
label_10f84c:
    // 0x10f84c: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10F84Cu;
    {
        const bool branch_taken_0x10f84c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10f84c) {
            ctx->pc = 0x10F850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F84Cu;
            // 0x10f850: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f828;
        }
    }
    ctx->pc = 0x10F854u;
    // 0x10f854: 0x8e4245a8  lw          $v0, 0x45A8($s2)
    ctx->pc = 0x10f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17832)));
    // 0x10f858: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F858u;
    {
        const bool branch_taken_0x10f858 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F858u;
        // 0x10f85c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f858) {
            ctx->pc = 0x10F868u;
            return;
        }
    }
    ctx->pc = 0x10F860u;
    // 0x10f860: 0xc046760  jal         func_119D80
    ctx->pc = 0x10F860u;
    SET_GPR_U32(ctx, 31, 0x10F868u);
    ctx->pc = 0x10F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F860u;
    // 0x10f864: 0x2484cee0  addiu       $a0, $a0, -0x3120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10F868u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F868u) { return; }
    ctx->pc = 0x10F868u;
}
