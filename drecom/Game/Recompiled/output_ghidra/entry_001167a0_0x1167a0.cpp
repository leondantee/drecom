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

// Function: entry_001167a0
// Address: 0x1167a0 - 0x1167c0
void entry_001167a0_0x1167a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001167a0_0x1167a0");
#endif

    ctx->pc = 0x1167a0u;

    // 0x1167a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1167a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1167a4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1167a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1167a8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1167a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1167ac: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1167acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1167b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1167B0u;
    {
        const bool branch_taken_0x1167b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1167B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B0u;
        // 0x1167b4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167b0) {
            ctx->pc = 0x1167C0u;
            return;
        }
    }
    ctx->pc = 0x1167B8u;
    // 0x1167b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1167B8u;
    {
        const bool branch_taken_0x1167b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B8u;
        // 0x1167bc: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167b8) {
            ctx->pc = 0x1167DCu;
            return;
        }
    }
    ctx->pc = 0x1167C0u;
}
