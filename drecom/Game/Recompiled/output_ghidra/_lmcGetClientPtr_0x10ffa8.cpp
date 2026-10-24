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

// Function: _lmcGetClientPtr
// Address: 0x10ffa8 - 0x10ffcc
void _lmcGetClientPtr_0x10ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lmcGetClientPtr_0x10ffa8");
#endif

    ctx->pc = 0x10ffa8u;

    // 0x10ffa8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10ffac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10ffb0: 0x244267c0  addiu       $v0, $v0, 0x67C0
    ctx->pc = 0x10ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
    // 0x10ffb4: 0x24634618  addiu       $v1, $v1, 0x4618
    ctx->pc = 0x10ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17944));
    // 0x10ffb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10ffbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10ffc0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x10ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFC4u;
        // 0x10ffc8: 0x24425200  addiu       $v0, $v0, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFCCu;
}
