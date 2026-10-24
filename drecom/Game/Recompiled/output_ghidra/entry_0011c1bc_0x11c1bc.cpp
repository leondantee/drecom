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

// Function: entry_0011c1bc
// Address: 0x11c1bc - 0x11c200
void entry_0011c1bc_0x11c1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c1bc_0x11c1bc");
#endif

    switch (ctx->pc) {
        case 0x11c1f8u: goto label_11c1f8;
        default: break;
    }

    ctx->pc = 0x11c1bcu;

    // 0x11c1bc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x11c1c0: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x11c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x11c1c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x11c1c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c1cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c1d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c1d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c1dc: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11c1dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c1e0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11c1e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C1E4u;
    {
        const bool branch_taken_0x11c1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1E4u;
        // 0x11c1e8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1e4) {
            ctx->pc = 0x11C200u;
            return;
        }
    }
    ctx->pc = 0x11C1ECu;
    // 0x11c1ec: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c1f0: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C1F0u;
    SET_GPR_U32(ctx, 31, 0x11C1F8u);
    ctx->pc = 0x11C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1F0u;
    // 0x11c1f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C1F0u, 0x11C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1F8u;
label_11c1f8:
    // 0x11c1f8: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x11C1F8u;
    {
        const bool branch_taken_0x11c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1F8u;
        // 0x11c1fc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f8) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11C200u;
}
