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

// Function: Camera_zelda_init
// Address: 0x183a00 - 0x183a20
void Camera_zelda_init_0x183a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_zelda_init_0x183a00");
#endif

    ctx->pc = 0x183a00u;

    // 0x183a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183a04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x183a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x183a08: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x183a0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x183a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183a10: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x183a14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x183a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183a18: 0x3e00008  jr          $ra
    ctx->pc = 0x183A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A20u;
}
