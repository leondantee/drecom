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

// Function: R401_init
// Address: 0x2837a0 - 0x2837c8
void R401_init_0x2837a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R401_init_0x2837a0");
#endif

    switch (ctx->pc) {
        case 0x2837b8u: goto label_2837b8;
        default: break;
    }

    ctx->pc = 0x2837a0u;

    // 0x2837a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2837a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2837a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2837a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2837a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2837a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2837ac: 0x244454b0  addiu       $a0, $v0, 0x54B0
    ctx->pc = 0x2837acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21680));
    // 0x2837b0: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2837B0u;
    SET_GPR_U32(ctx, 31, 0x2837B8u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2837B0u, 0x2837B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837B8u;
label_2837b8:
    // 0x2837b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2837b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2837bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2837bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2837c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2837C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2837C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2837C8u;
}
