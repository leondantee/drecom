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

// Function: entry_00105e20
// Address: 0x105e20 - 0x105e3c
void entry_00105e20_0x105e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105e20_0x105e20");
#endif

    ctx->pc = 0x105e20u;

    // 0x105e20: 0x8d033dac  lw          $v1, 0x3DAC($t0)
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15788)));
    // 0x105e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105e28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E28u;
    {
        const bool branch_taken_0x105e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E28u;
        // 0x105e2c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e28) {
            ctx->pc = 0x105E3Cu;
            return;
        }
    }
    ctx->pc = 0x105E30u;
    // 0x105e30: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x105e34: 0x3e00008  jr          $ra
    ctx->pc = 0x105E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E34u;
        // 0x105e38: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E3Cu;
}
