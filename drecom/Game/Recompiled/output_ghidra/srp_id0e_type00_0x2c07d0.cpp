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

// Function: srp_id0e_type00
// Address: 0x2c07d0 - 0x2c07f0
void srp_id0e_type00_0x2c07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id0e_type00_0x2c07d0");
#endif

    ctx->pc = 0x2c07d0u;

    // 0x2c07d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c07d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c07d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c07d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c07dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c07e0: 0xa064036e  sb          $a0, 0x36E($v1)
    ctx->pc = 0x2c07e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 878), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c07e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c07e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c07e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C07E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C07F0u;
}
