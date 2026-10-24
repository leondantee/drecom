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

// Function: entry_0011c4e0
// Address: 0x11c4e0 - 0x11c52c
void entry_0011c4e0_0x11c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4e0_0x11c4e0");
#endif

    ctx->pc = 0x11c4e0u;

    // 0x11c4e0: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c4e4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c4e8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c4ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c4f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c4f4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c4f8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c4fc: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c500: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x11c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c504: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c508: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x11c508u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c50c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11c510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c514: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x11c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11c518: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x11c518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c51c: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x11C51Cu;
    {
        const bool branch_taken_0x11c51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C51Cu;
        // 0x11c520: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c51c) {
            ctx->pc = 0x11C724u;
            return;
        }
    }
    ctx->pc = 0x11C524u;
    // 0x11c524: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x11C524u;
    {
        const bool branch_taken_0x11c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C524u;
        // 0x11c528: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c524) {
            ctx->pc = 0x11C714u;
            return;
        }
    }
    ctx->pc = 0x11C52Cu;
}
