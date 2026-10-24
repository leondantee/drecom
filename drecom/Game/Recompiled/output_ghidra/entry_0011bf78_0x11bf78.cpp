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

// Function: entry_0011bf78
// Address: 0x11bf78 - 0x11bfc4
void entry_0011bf78_0x11bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bf78_0x11bf78");
#endif

    switch (ctx->pc) {
        case 0x11bfb4u: goto label_11bfb4;
        default: break;
    }

    ctx->pc = 0x11bf78u;

    // 0x11bf78: 0x26c2db30  addiu       $v0, $s6, -0x24D0
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11bf7c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11bf80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11bf84: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bf88: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bf90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bf94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11bf98: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bf98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bf9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bfa0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BFA0u;
    {
        const bool branch_taken_0x11bfa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFA0u;
        // 0x11bfa4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfa0) {
            ctx->pc = 0x11BFC4u;
            return;
        }
    }
    ctx->pc = 0x11BFA8u;
    // 0x11bfa8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11bfac: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11BFACu;
    SET_GPR_U32(ctx, 31, 0x11BFB4u);
    ctx->pc = 0x11BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFACu;
    // 0x11bfb0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11BFACu, 0x11BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFB4u;
label_11bfb4:
    // 0x11bfb4: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x11BFB4u;
    {
        const bool branch_taken_0x11bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFB4u;
        // 0x11bfb8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfb4) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11BFBCu;
    // 0x11bfbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BFBCu;
    {
        const bool branch_taken_0x11bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFBCu;
        // 0x11bfc0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfbc) {
            ctx->pc = 0x11BFC8u;
            return;
        }
    }
    ctx->pc = 0x11BFC4u;
}
