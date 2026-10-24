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

// Function: entry_001651a8
// Address: 0x1651a8 - 0x1651d0
void entry_001651a8_0x1651a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001651a8_0x1651a8");
#endif

    switch (ctx->pc) {
        case 0x1651b0u: goto label_1651b0;
        default: break;
    }

    ctx->pc = 0x1651a8u;

    // 0x1651a8: 0xc059474  jal         func_1651D0
    ctx->pc = 0x1651A8u;
    SET_GPR_U32(ctx, 31, 0x1651B0u);
    ctx->pc = 0x1651D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651D0u, 0x1651A8u, 0x1651B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651B0u;
label_1651b0:
    // 0x1651b0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1651b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1651b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1651b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1651b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1651b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1651bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1651bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1651c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1651c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1651c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1651c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1651c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1651C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1651C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1651D0u;
}
