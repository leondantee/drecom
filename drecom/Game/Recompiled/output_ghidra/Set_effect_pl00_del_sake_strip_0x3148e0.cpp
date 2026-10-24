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

// Function: Set_effect_pl00_del_sake_strip
// Address: 0x3148e0 - 0x314910
void Set_effect_pl00_del_sake_strip_0x3148e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_del_sake_strip_0x3148e0");
#endif

    switch (ctx->pc) {
        case 0x314900u: goto label_314900;
        default: break;
    }

    ctx->pc = 0x3148e0u;

    // 0x3148e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3148e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3148e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3148e8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3148e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3148ec: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3148f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3148f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3148f4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x3148f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3148f8: 0xc065580  jal         func_195600
    ctx->pc = 0x3148F8u;
    SET_GPR_U32(ctx, 31, 0x314900u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x3148F8u, 0x314900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314900u;
label_314900:
    // 0x314900: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x314900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314904: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x314904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x314908: 0x3e00008  jr          $ra
    ctx->pc = 0x314908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314910u;
}
