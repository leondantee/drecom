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

// Function: entry_0011c540
// Address: 0x11c540 - 0x11c59c
void entry_0011c540_0x11c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c540_0x11c540");
#endif

    switch (ctx->pc) {
        case 0x11c594u: goto label_11c594;
        default: break;
    }

    ctx->pc = 0x11c540u;

    // 0x11c540: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x11c540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c544: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x11c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x11c548: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x11c548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c550: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x11c550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x11c554: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11c558: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c55c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11c55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11c560: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c564: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c568: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c56c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c574: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11c578: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c578u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c57c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c580: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C580u;
        // 0x11c584: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C59Cu;
            return;
        }
    }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c58c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C58Cu;
    SET_GPR_U32(ctx, 31, 0x11C594u);
    ctx->pc = 0x11C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C58Cu;
    // 0x11c590: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C58Cu, 0x11C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C594u;
label_11c594:
    // 0x11c594: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C594u;
        // 0x11c598: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C59Cu;
}
