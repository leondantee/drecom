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

// Function: e2d_id80_type00
// Address: 0x2bcd60 - 0x2bcd80
void e2d_id80_type00_0x2bcd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id80_type00_0x2bcd60");
#endif

    ctx->pc = 0x2bcd60u;

    // 0x2bcd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bcd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bcd64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bcd68: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2bcd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2bcd6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bcd70: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2bcd70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bcd74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bcd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcd78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCD80u;
}
