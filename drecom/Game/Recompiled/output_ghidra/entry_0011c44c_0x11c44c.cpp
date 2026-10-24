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

// Function: entry_0011c44c
// Address: 0x11c44c - 0x11c490
void entry_0011c44c_0x11c44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c44c_0x11c44c");
#endif

    switch (ctx->pc) {
        case 0x11c484u: goto label_11c484;
        default: break;
    }

    ctx->pc = 0x11c44cu;

    // 0x11c44c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c450: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11c450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c458: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c45c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c460: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c468: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c46c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c470: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C470u;
    {
        const bool branch_taken_0x11c470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C470u;
        // 0x11c474: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c470) {
            ctx->pc = 0x11C490u;
            return;
        }
    }
    ctx->pc = 0x11C478u;
    // 0x11c478: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c47c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C47Cu;
    SET_GPR_U32(ctx, 31, 0x11C484u);
    ctx->pc = 0x11C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C47Cu;
    // 0x11c480: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C47Cu, 0x11C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C484u;
label_11c484:
    // 0x11c484: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x11C484u;
    {
        const bool branch_taken_0x11c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C484u;
        // 0x11c488: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c484) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C48Cu;
    // 0x11c48c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    ctx->pc = 0x11c490u;
}
