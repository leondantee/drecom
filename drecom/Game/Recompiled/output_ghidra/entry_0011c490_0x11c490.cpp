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

// Function: entry_0011c490
// Address: 0x11c490 - 0x11c4e0
void entry_0011c490_0x11c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c490_0x11c490");
#endif

    switch (ctx->pc) {
        case 0x11c4d8u: goto label_11c4d8;
        default: break;
    }

    ctx->pc = 0x11c490u;

    // 0x11c490: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11c494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c498: 0x2442dbb0  addiu       $v0, $v0, -0x2450
    ctx->pc = 0x11c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
    // 0x11c49c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x11c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11c4a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c4a4: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x11c4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x11c4a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c4ac: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c4b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c4b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c4bc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c4bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c4c0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c4c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C4C4u;
    {
        const bool branch_taken_0x11c4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4C4u;
        // 0x11c4c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4c4) {
            ctx->pc = 0x11C4E0u;
            return;
        }
    }
    ctx->pc = 0x11C4CCu;
    // 0x11c4cc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c4d0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C4D0u;
    SET_GPR_U32(ctx, 31, 0x11C4D8u);
    ctx->pc = 0x11C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4D0u;
    // 0x11c4d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C4D0u, 0x11C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4D8u;
label_11c4d8:
    // 0x11c4d8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x11C4D8u;
    {
        const bool branch_taken_0x11c4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4D8u;
        // 0x11c4dc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4d8) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C4E0u;
}
