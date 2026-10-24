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

// Function: entry_0011c7b8
// Address: 0x11c7b8 - 0x11c7f0
void entry_0011c7b8_0x11c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7b8_0x11c7b8");
#endif

    switch (ctx->pc) {
        case 0x11c7e8u: goto label_11c7e8;
        default: break;
    }

    ctx->pc = 0x11c7b8u;

    // 0x11c7b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c7bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c7c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c7c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c7cc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c7d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c7d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C7D4u;
    {
        const bool branch_taken_0x11c7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D4u;
        // 0x11c7d8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7d4) {
            ctx->pc = 0x11C7F0u;
            return;
        }
    }
    ctx->pc = 0x11C7DCu;
    // 0x11c7dc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c7e0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C7E0u;
    SET_GPR_U32(ctx, 31, 0x11C7E8u);
    ctx->pc = 0x11C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7E0u;
    // 0x11c7e4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C7E0u, 0x11C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7E8u;
label_11c7e8:
    // 0x11c7e8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E8u;
        // 0x11c7ec: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C85Cu;
            return;
        }
    }
    ctx->pc = 0x11C7F0u;
}
