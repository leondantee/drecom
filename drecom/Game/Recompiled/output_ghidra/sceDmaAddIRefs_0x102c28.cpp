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

// Function: sceDmaAddIRefs
// Address: 0x102c28 - 0x102c50
void sceDmaAddIRefs_0x102c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaAddIRefs_0x102c28");
#endif

    ctx->pc = 0x102c28u;

    // 0x102c28: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102c2c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x102c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x102c30: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x102c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c34: 0xa0e80003  sb          $t0, 0x3($a3)
    ctx->pc = 0x102c34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x102c38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x102c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102c3c: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x102c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x102c40: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x102c40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x102c44: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x102c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x102c48: 0x3e00008  jr          $ra
    ctx->pc = 0x102C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C48u;
        // 0x102c4c: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C50u;
}
