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

// Function: entry_0011bd28
// Address: 0x11bd28 - 0x11bd78
void entry_0011bd28_0x11bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd28_0x11bd28");
#endif

    switch (ctx->pc) {
        case 0x11bd64u: goto label_11bd64;
        default: break;
    }

    ctx->pc = 0x11bd28u;

    // 0x11bd28: 0x24c2db20  addiu       $v0, $a2, -0x24E0
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11bd2c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11bd30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bd34: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bd38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bd44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bd48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bd48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bd4c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bd50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BD50u;
    {
        const bool branch_taken_0x11bd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD50u;
        // 0x11bd54: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd50) {
            ctx->pc = 0x11BD78u;
            return;
        }
    }
    ctx->pc = 0x11BD58u;
    // 0x11bd58: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bd5c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BD5Cu;
    SET_GPR_U32(ctx, 31, 0x11BD64u);
    ctx->pc = 0x11BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD5Cu;
    // 0x11bd60: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BD5Cu, 0x11BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD64u;
label_11bd64:
    // 0x11bd64: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x11BD64u;
    {
        const bool branch_taken_0x11bd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD64u;
        // 0x11bd68: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd64) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BD6Cu;
    // 0x11bd6c: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x11bd70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD70u;
    {
        const bool branch_taken_0x11bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD70u;
        // 0x11bd74: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd70) {
            ctx->pc = 0x11BD80u;
            return;
        }
    }
    ctx->pc = 0x11BD78u;
}
