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

// Function: entry_0011c2bc
// Address: 0x11c2bc - 0x11c2f8
void entry_0011c2bc_0x11c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c2bc_0x11c2bc");
#endif

    ctx->pc = 0x11c2bcu;

    // 0x11c2bc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x11c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c2c0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11c2c4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11c2c8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c2d0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c2d4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c2e0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x11c2e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c2e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c2e8: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x11C2E8u;
    {
        const bool branch_taken_0x11c2e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E8u;
        // 0x11c2ec: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e8) {
            ctx->pc = 0x11C724u;
            return;
        }
    }
    ctx->pc = 0x11C2F0u;
    // 0x11c2f0: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x11C2F0u;
    {
        const bool branch_taken_0x11c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F0u;
        // 0x11c2f4: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f0) {
            ctx->pc = 0x11C714u;
            return;
        }
    }
    ctx->pc = 0x11C2F8u;
}
