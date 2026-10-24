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

// Function: entry_0011bf24
// Address: 0x11bf24 - 0x11bf68
void entry_0011bf24_0x11bf24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf24_0x11bf24");
#endif

    switch (ctx->pc) {
        case 0x11bf60u: goto label_11bf60;
        default: break;
    }

    ctx->pc = 0x11bf24u;

    // 0x11bf24: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11bf28: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bf2c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bf30: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bf38: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bf3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bf40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf44: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bf48: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bf48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bf4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BF4Cu;
    {
        const bool branch_taken_0x11bf4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF4Cu;
        // 0x11bf50: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf4c) {
            ctx->pc = 0x11BF68u;
            return;
        }
    }
    ctx->pc = 0x11BF54u;
    // 0x11bf54: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bf58: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BF58u;
    SET_GPR_U32(ctx, 31, 0x11BF60u);
    ctx->pc = 0x11BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF58u;
    // 0x11bf5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BF58u, 0x11BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF60u;
label_11bf60:
    // 0x11bf60: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x11BF60u;
    {
        const bool branch_taken_0x11bf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF60u;
        // 0x11bf64: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf60) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BF68u;
}
