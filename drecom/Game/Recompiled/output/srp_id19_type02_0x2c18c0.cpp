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

// Function: srp_id19_type02
// Address: 0x2c18c0 - 0x2c18f8
void srp_id19_type02_0x2c18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id19_type02_0x2c18c0");
#endif

    ctx->pc = 0x2c18c0u;

    // 0x2c18c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c18c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c18c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c18cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c18d0: 0xa064034e  sb          $a0, 0x34E($v1)
    ctx->pc = 0x2c18d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 846), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c18d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c18d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c18dc: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c18dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c18e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c18e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c18e8: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2c18e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c18ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c18ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c18f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C18F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C18F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C18F8u;
}
