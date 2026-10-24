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

// Function: R11c_main
// Address: 0x279410 - 0x279430
void R11c_main_0x279410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11c_main_0x279410");
#endif

    ctx->pc = 0x279410u;

    // 0x279410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279418: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x27941c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x27941cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x279420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279424: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279428: 0x3e00008  jr          $ra
    ctx->pc = 0x279428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279430u;
}
