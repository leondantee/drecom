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

// Function: Em07_R0_damage
// Address: 0x2d7e20 - 0x2d7e68
void Em07_R0_damage_0x2d7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R0_damage_0x2d7e20");
#endif

    ctx->pc = 0x2d7e20u;

    // 0x2d7e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7e24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d7e28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e2c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2d7e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7e34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7e3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e40: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d7e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7e44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7e4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7e54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7e58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7e5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d7e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7e60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7E68u;
}
