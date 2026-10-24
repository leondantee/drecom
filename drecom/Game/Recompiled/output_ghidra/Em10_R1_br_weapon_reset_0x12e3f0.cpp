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

// Function: Em10_R1_br_weapon_reset
// Address: 0x12e3f0 - 0x12e40c
void Em10_R1_br_weapon_reset_0x12e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_weapon_reset_0x12e3f0");
#endif

    ctx->pc = 0x12e3f0u;

    // 0x12e3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e3f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x12e3f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e3fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x12e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12e400: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12e404: 0x3e00008  jr          $ra
    ctx->pc = 0x12E404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E40Cu;
}
