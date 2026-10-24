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

// Function: entry_0011c0d8
// Address: 0x11c0d8 - 0x11c120
void entry_0011c0d8_0x11c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c0d8_0x11c0d8");
#endif

    switch (ctx->pc) {
        case 0x11c118u: goto label_11c118;
        default: break;
    }

    ctx->pc = 0x11c0d8u;

    // 0x11c0d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c0dc: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c0e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c0e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c0e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c0ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c0f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c0f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c0fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c100: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c100u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c104: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C104u;
    {
        const bool branch_taken_0x11c104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C104u;
        // 0x11c108: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c104) {
            ctx->pc = 0x11C120u;
            return;
        }
    }
    ctx->pc = 0x11C10Cu;
    // 0x11c10c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c110: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C110u;
    SET_GPR_U32(ctx, 31, 0x11C118u);
    ctx->pc = 0x11C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C110u;
    // 0x11c114: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C110u, 0x11C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C118u;
label_11c118:
    // 0x11c118: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x11C118u;
    {
        const bool branch_taken_0x11c118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C118u;
        // 0x11c11c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c118) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C120u;
}
