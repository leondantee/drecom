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

// Function: Em1c_R0_damage
// Address: 0x36ed10 - 0x36ed2c
void Em1c_R0_damage_0x36ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R0_damage_0x36ed10");
#endif

    ctx->pc = 0x36ed10u;

    // 0x36ed10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ed14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x36ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x36ed18: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ed1c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ed20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x36ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ED2Cu;
}
