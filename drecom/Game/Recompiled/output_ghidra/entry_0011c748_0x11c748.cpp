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

// Function: entry_0011c748
// Address: 0x11c748 - 0x11c798
void entry_0011c748_0x11c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c748_0x11c748");
#endif

    switch (ctx->pc) {
        case 0x11c78cu: goto label_11c78c;
        default: break;
    }

    ctx->pc = 0x11c748u;

    // 0x11c748: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c74c: 0x24c4db20  addiu       $a0, $a2, -0x24E0
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x11c750: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c754: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c758: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c760: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c764: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c76c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c770: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c770u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c774: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C774u;
    {
        const bool branch_taken_0x11c774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C774u;
        // 0x11c778: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c774) {
            ctx->pc = 0x11C798u;
            return;
        }
    }
    ctx->pc = 0x11C77Cu;
    // 0x11c77c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c780: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11c780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c784: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C784u;
    SET_GPR_U32(ctx, 31, 0x11C78Cu);
    ctx->pc = 0x11C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C784u;
    // 0x11c788: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C784u, 0x11C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C78Cu;
label_11c78c:
    // 0x11c78c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x11C78Cu;
    {
        const bool branch_taken_0x11c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C78Cu;
        // 0x11c790: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c78c) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C794u;
    // 0x11c794: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x11c798u;
}
