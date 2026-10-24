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

// Function: Pad_act_stop
// Address: 0x1a1700 - 0x1a171c
void Pad_act_stop_0x1a1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_act_stop_0x1a1700");
#endif

    ctx->pc = 0x1a1700u;

    // 0x1a1700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1704: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a1704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1a1708: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a170c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a170cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1710: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1714: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A171Cu;
}
