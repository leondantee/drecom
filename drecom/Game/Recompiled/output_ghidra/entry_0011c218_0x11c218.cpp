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

// Function: entry_0011c218
// Address: 0x11c218 - 0x11c260
void entry_0011c218_0x11c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c218_0x11c218");
#endif

    switch (ctx->pc) {
        case 0x11c258u: goto label_11c258;
        default: break;
    }

    ctx->pc = 0x11c218u;

    // 0x11c218: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11c21c: 0x26c4db30  addiu       $a0, $s6, -0x24D0
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957872));
    // 0x11c220: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11c220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11c224: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c228: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c22c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c230: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c234: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c23c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c240: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c244: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C244u;
    {
        const bool branch_taken_0x11c244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C244u;
        // 0x11c248: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c244) {
            ctx->pc = 0x11C260u;
            return;
        }
    }
    ctx->pc = 0x11C24Cu;
    // 0x11c24c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c250: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C250u;
    SET_GPR_U32(ctx, 31, 0x11C258u);
    ctx->pc = 0x11C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C250u;
    // 0x11c254: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C250u, 0x11C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C258u;
label_11c258:
    // 0x11c258: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x11C258u;
    {
        const bool branch_taken_0x11c258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C258u;
        // 0x11c25c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c258) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C260u;
}
