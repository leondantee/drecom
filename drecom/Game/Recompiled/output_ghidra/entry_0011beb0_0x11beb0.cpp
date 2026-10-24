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

// Function: entry_0011beb0
// Address: 0x11beb0 - 0x11befc
void entry_0011beb0_0x11beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011beb0_0x11beb0");
#endif

    switch (ctx->pc) {
        case 0x11beecu: goto label_11beec;
        default: break;
    }

    ctx->pc = 0x11beb0u;

    // 0x11beb0: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11beb4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11beb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bebc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bec0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11becc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bed0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bed4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bed8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BED8u;
    {
        const bool branch_taken_0x11bed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED8u;
        // 0x11bedc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed8) {
            ctx->pc = 0x11BEFCu;
            return;
        }
    }
    ctx->pc = 0x11BEE0u;
    // 0x11bee0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bee4: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BEE4u;
    SET_GPR_U32(ctx, 31, 0x11BEECu);
    ctx->pc = 0x11BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE4u;
    // 0x11bee8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BEE4u, 0x11BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEECu;
label_11beec:
    // 0x11beec: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x11BEECu;
    {
        const bool branch_taken_0x11beec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEECu;
        // 0x11bef0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beec) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BEF4u;
    // 0x11bef4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BEF4u;
    {
        const bool branch_taken_0x11bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEF4u;
        // 0x11bef8: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bef4) {
            ctx->pc = 0x11BF00u;
            return;
        }
    }
    ctx->pc = 0x11BEFCu;
}
