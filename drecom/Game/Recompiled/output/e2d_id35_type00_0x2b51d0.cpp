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

// Function: e2d_id35_type00
// Address: 0x2b51d0 - 0x2b51f0
void e2d_id35_type00_0x2b51d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id35_type00_0x2b51d0");
#endif

    ctx->pc = 0x2b51d0u;

    // 0x2b51d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b51d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b51d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b51d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b51dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b51e0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b51e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b51e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b51e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b51e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B51E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B51E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B51F0u;
}
