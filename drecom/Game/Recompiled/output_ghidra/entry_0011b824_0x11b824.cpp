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

// Function: entry_0011b824
// Address: 0x11b824 - 0x11b864
void entry_0011b824_0x11b824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b824_0x11b824");
#endif

    switch (ctx->pc) {
        case 0x11b84cu: goto label_11b84c;
        default: break;
    }

    ctx->pc = 0x11b824u;

    // 0x11b824: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x11b824u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)256);
    // 0x11b828: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x11b82c: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x11b830: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b834: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b838: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x11b83c: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x11b83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x11b840: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x11b840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b844: 0xc047228  jal         func_11C8A0
    ctx->pc = 0x11B844u;
    SET_GPR_U32(ctx, 31, 0x11B84Cu);
    ctx->pc = 0x11B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B844u;
    // 0x11b848: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C8A0u, 0x11B844u, 0x11B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B84Cu;
label_11b84c:
    // 0x11b84c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b850: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x11b854: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B854u;
    {
        const bool branch_taken_0x11b854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B854u;
        // 0x11b858: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b854) {
            ctx->pc = 0x11B864u;
            return;
        }
    }
    ctx->pc = 0x11B85Cu;
    // 0x11b85c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B85Cu;
    {
        const bool branch_taken_0x11b85c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B85Cu;
        // 0x11b860: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b85c) {
            ctx->pc = 0x11B890u;
            return;
        }
    }
    ctx->pc = 0x11B864u;
}
