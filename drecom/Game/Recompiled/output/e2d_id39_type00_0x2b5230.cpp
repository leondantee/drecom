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

// Function: e2d_id39_type00
// Address: 0x2b5230 - 0x2b525c
void e2d_id39_type00_0x2b5230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id39_type00_0x2b5230");
#endif

    ctx->pc = 0x2b5230u;

    // 0x2b5230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5234: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5238: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b523c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5240: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5248: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b524c: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b524cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5250: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5254: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B525Cu;
}
