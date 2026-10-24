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

// Function: Camera_devil_sky_end
// Address: 0x183a80 - 0x183abc
void Camera_devil_sky_end_0x183a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_devil_sky_end_0x183a80");
#endif

    switch (ctx->pc) {
        case 0x183a90u: goto label_183a90;
        default: break;
    }

    ctx->pc = 0x183a80u;

    // 0x183a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183a84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183a88: 0xc058ca4  jal         func_163290
    ctx->pc = 0x183A88u;
    SET_GPR_U32(ctx, 31, 0x183A90u);
    ctx->pc = 0x163290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163290u, 0x183A88u, 0x183A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A90u;
label_183a90:
    // 0x183a90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183a94: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x183a94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x183a98: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x183a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x183a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183aa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183aa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183aa8: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x183aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x183aac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x183AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183ABCu;
}
