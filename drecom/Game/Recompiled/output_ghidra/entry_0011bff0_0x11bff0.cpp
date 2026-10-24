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

// Function: entry_0011bff0
// Address: 0x11bff0 - 0x11c058
void entry_0011bff0_0x11bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bff0_0x11bff0");
#endif

    switch (ctx->pc) {
        case 0x11c004u: goto label_11c004;
        case 0x11c050u: goto label_11c050;
        default: break;
    }

    ctx->pc = 0x11bff0u;

    // 0x11bff0: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x11BFF0u;
    {
        const bool branch_taken_0x11bff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF0u;
        // 0x11bff4: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff0) {
            ctx->pc = 0x11C52Cu;
            return;
        }
    }
    ctx->pc = 0x11BFF8u;
    // 0x11bff8: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11bffc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11BFFCu;
    SET_GPR_U32(ctx, 31, 0x11C004u);
    ctx->pc = 0x11C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFFCu;
    // 0x11c000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11BFFCu, 0x11C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C004u;
label_11c004:
    // 0x11c004: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x11C004u;
    {
        const bool branch_taken_0x11c004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C004u;
        // 0x11c008: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c004) {
            ctx->pc = 0x11C168u;
            return;
        }
    }
    ctx->pc = 0x11C00Cu;
    // 0x11c00c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c010: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c014: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x11c018: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c01c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c020: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c024: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c034: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c034u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c038: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c03c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C03Cu;
    {
        const bool branch_taken_0x11c03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C03Cu;
        // 0x11c040: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c03c) {
            ctx->pc = 0x11C058u;
            return;
        }
    }
    ctx->pc = 0x11C044u;
    // 0x11c044: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c048: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C048u;
    SET_GPR_U32(ctx, 31, 0x11C050u);
    ctx->pc = 0x11C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C048u;
    // 0x11c04c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C048u, 0x11C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C050u;
label_11c050:
    // 0x11c050: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x11C050u;
    {
        const bool branch_taken_0x11c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C050u;
        // 0x11c054: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c050) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C058u;
}
