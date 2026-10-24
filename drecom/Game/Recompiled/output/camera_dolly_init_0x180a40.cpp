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

// Function: camera_dolly_init
// Address: 0x180a40 - 0x180a5c
void camera_dolly_init_0x180a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_dolly_init_0x180a40");
#endif

    ctx->pc = 0x180a40u;

    // 0x180a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180a44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x180a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x180a48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180a4c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x180a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x180a50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x180a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180a54: 0x3e00008  jr          $ra
    ctx->pc = 0x180A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A5Cu;
}
