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

// Function: entry_0011c2f8
// Address: 0x11c2f8 - 0x11c34c
void entry_0011c2f8_0x11c2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c2f8_0x11c2f8");
#endif

    switch (ctx->pc) {
        case 0x11c340u: goto label_11c340;
        default: break;
    }

    ctx->pc = 0x11c2f8u;

    // 0x11c2f8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11c2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c2fc: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x11C2FCu;
    {
        const bool branch_taken_0x11c2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c2fc) {
            ctx->pc = 0x11C300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C2FCu;
            // 0x11c300: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C44Cu;
            return;
        }
    }
    ctx->pc = 0x11C304u;
    // 0x11c304: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x11c304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x11c308: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c30c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c310: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c314: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c318: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x11c318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c31c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c320: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c324: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c328: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c32c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C32Cu;
    {
        const bool branch_taken_0x11c32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C32Cu;
        // 0x11c330: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c32c) {
            ctx->pc = 0x11C34Cu;
            return;
        }
    }
    ctx->pc = 0x11C334u;
    // 0x11c334: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c338: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C338u;
    SET_GPR_U32(ctx, 31, 0x11C340u);
    ctx->pc = 0x11C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C338u;
    // 0x11c33c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C338u, 0x11C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C340u;
label_11c340:
    // 0x11c340: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x11C340u;
    {
        const bool branch_taken_0x11c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C340u;
        // 0x11c344: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c340) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C348u;
    // 0x11c348: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x11c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    ctx->pc = 0x11c34cu;
}
