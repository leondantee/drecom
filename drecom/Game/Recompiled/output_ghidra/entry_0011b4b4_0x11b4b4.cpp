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

// Function: entry_0011b4b4
// Address: 0x11b4b4 - 0x11b504
void entry_0011b4b4_0x11b4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b4b4_0x11b4b4");
#endif

    switch (ctx->pc) {
        case 0x11b4fcu: goto label_11b4fc;
        default: break;
    }

    ctx->pc = 0x11b4b4u;

    // 0x11b4b4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b4b8: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x11b4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11b4bc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B4BCu;
    {
        const bool branch_taken_0x11b4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b4bc) {
            ctx->pc = 0x11B510u;
            return;
        }
    }
    ctx->pc = 0x11B4C4u;
    // 0x11b4c4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x11b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x11b4c8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11b4cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b4d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b4d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11b4d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11b4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b4e0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11b4e4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x11b4e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b4e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B504u;
            return;
        }
    }
    ctx->pc = 0x11B4F0u;
    // 0x11b4f0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b4f4: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11B4F4u;
    SET_GPR_U32(ctx, 31, 0x11B4FCu);
    ctx->pc = 0x11B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4F4u;
    // 0x11b4f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11B4F4u, 0x11B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4FCu;
label_11b4fc:
    // 0x11b4fc: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x11B4FCu;
    {
        const bool branch_taken_0x11b4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4FCu;
        // 0x11b500: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4fc) {
            ctx->pc = 0x11C858u;
            return;
        }
    }
    ctx->pc = 0x11B504u;
}
