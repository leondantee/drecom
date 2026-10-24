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

// Function: entry_0011c368
// Address: 0x11c368 - 0x11c3b0
void entry_0011c368_0x11c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c368_0x11c368");
#endif

    switch (ctx->pc) {
        case 0x11c3a8u: goto label_11c3a8;
        default: break;
    }

    ctx->pc = 0x11c368u;

    // 0x11c368: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c36c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c370: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c374: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c378: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c37c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c380: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c384: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c38c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c390: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c394: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C394u;
    {
        const bool branch_taken_0x11c394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C394u;
        // 0x11c398: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c394) {
            ctx->pc = 0x11C3B0u;
            return;
        }
    }
    ctx->pc = 0x11C39Cu;
    // 0x11c39c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c3a0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C3A0u;
    SET_GPR_U32(ctx, 31, 0x11C3A8u);
    ctx->pc = 0x11C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3A0u;
    // 0x11c3a4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C3A0u, 0x11C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3A8u;
label_11c3a8:
    // 0x11c3a8: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x11C3A8u;
    {
        const bool branch_taken_0x11c3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3A8u;
        // 0x11c3ac: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3a8) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C3B0u;
}
