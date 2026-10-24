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

// Function: entry_002163c0
// Address: 0x2163c0 - 0x2163e4
void entry_002163c0_0x2163c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002163c0_0x2163c0");
#endif

    ctx->pc = 0x2163c0u;

label_2163c0:
    // 0x2163c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2163c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2163c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2163c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2163c8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2163c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2163cc: 0x0  nop
    ctx->pc = 0x2163ccu;
    // NOP
    // 0x2163d0: 0x0  nop
    ctx->pc = 0x2163d0u;
    // NOP
    // 0x2163d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2163D4u;
    {
        const bool branch_taken_0x2163d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2163d4) {
            ctx->pc = 0x2163C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2163c0;
        }
    }
    ctx->pc = 0x2163DCu;
    // 0x2163dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2163DCu;
    {
        const bool branch_taken_0x2163dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163DCu;
        // 0x2163e0: 0x2484c8c0  addiu       $a0, $a0, -0x3740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163dc) {
            ctx->pc = 0x2163F0u;
            return;
        }
    }
    ctx->pc = 0x2163E4u;
}
