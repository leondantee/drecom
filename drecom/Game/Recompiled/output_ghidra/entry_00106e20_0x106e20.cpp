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

// Function: entry_00106e20
// Address: 0x106e20 - 0x106e38
void entry_00106e20_0x106e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e20_0x106e20");
#endif

    switch (ctx->pc) {
        case 0x106e34u: goto label_106e34;
        default: break;
    }

    ctx->pc = 0x106e20u;

    // 0x106e20: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E24u;
    {
        const bool branch_taken_0x106e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E24u;
        // 0x106e28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e24) {
            ctx->pc = 0x106E38u;
            return;
        }
    }
    ctx->pc = 0x106E2Cu;
    // 0x106e2c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106E2Cu;
    SET_GPR_U32(ctx, 31, 0x106E34u);
    ctx->pc = 0x106E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E2Cu;
    // 0x106e30: 0x8e443bf4  lw          $a0, 0x3BF4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106E2Cu, 0x106E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E34u;
label_106e34:
    // 0x106e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106e38u;
}
