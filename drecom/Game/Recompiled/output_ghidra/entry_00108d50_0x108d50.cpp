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

// Function: entry_00108d50
// Address: 0x108d50 - 0x108d88
void entry_00108d50_0x108d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108d50_0x108d50");
#endif

    switch (ctx->pc) {
        case 0x108d84u: goto label_108d84;
        default: break;
    }

    ctx->pc = 0x108d50u;

label_108d50:
    // 0x108d50: 0x8c623b28  lw          $v0, 0x3B28($v1)
    ctx->pc = 0x108d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15144)));
    // 0x108d54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x108d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x108d58: 0x0  nop
    ctx->pc = 0x108d58u;
    // NOP
    // 0x108d5c: 0x0  nop
    ctx->pc = 0x108d5cu;
    // NOP
    // 0x108d60: 0x0  nop
    ctx->pc = 0x108d60u;
    // NOP
    // 0x108d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108D64u;
    {
        const bool branch_taken_0x108d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108d64) {
            ctx->pc = 0x108D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d50;
        }
    }
    ctx->pc = 0x108D6Cu;
    // 0x108d6c: 0x8e823b20  lw          $v0, 0x3B20($s4)
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15136)));
    // 0x108d70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108D70u;
    {
        const bool branch_taken_0x108d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D70u;
        // 0x108d74: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d70) {
            ctx->pc = 0x108D88u;
            return;
        }
    }
    ctx->pc = 0x108D78u;
    // 0x108d78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x108d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x108d7c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x108D7Cu;
    SET_GPR_U32(ctx, 31, 0x108D84u);
    ctx->pc = 0x108D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D7Cu;
    // 0x108d80: 0x2484c858  addiu       $a0, $a0, -0x37A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x108D7Cu, 0x108D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D84u;
label_108d84:
    // 0x108d84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x108d88u;
}
