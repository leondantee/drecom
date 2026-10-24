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

// Function: entry_0011be5c
// Address: 0x11be5c - 0x11bea0
void entry_0011be5c_0x11be5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011be5c_0x11be5c");
#endif

    switch (ctx->pc) {
        case 0x11be98u: goto label_11be98;
        default: break;
    }

    ctx->pc = 0x11be5cu;

    // 0x11be5c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11be60: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11be60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11be64: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11be64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11be68: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11be68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11be70: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11be74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11be78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11be7c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11be80: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11be84: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BE84u;
    {
        const bool branch_taken_0x11be84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE84u;
        // 0x11be88: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be84) {
            ctx->pc = 0x11BEA0u;
            return;
        }
    }
    ctx->pc = 0x11BE8Cu;
    // 0x11be8c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11be90: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BE90u;
    SET_GPR_U32(ctx, 31, 0x11BE98u);
    ctx->pc = 0x11BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE90u;
    // 0x11be94: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BE90u, 0x11BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE98u;
label_11be98:
    // 0x11be98: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x11BE98u;
    {
        const bool branch_taken_0x11be98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE98u;
        // 0x11be9c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be98) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BEA0u;
}
