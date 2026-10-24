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

// Function: R603_init
// Address: 0x29c8f0 - 0x29c918
void R603_init_0x29c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R603_init_0x29c8f0");
#endif

    switch (ctx->pc) {
        case 0x29c908u: goto label_29c908;
        default: break;
    }

    ctx->pc = 0x29c8f0u;

    // 0x29c8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c8f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29c8f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x29c8fc: 0x24446a50  addiu       $a0, $v0, 0x6A50
    ctx->pc = 0x29c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
    // 0x29c900: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x29C900u;
    SET_GPR_U32(ctx, 31, 0x29C908u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x29C900u, 0x29C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C908u;
label_29c908:
    // 0x29c908: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29c908u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c90c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29c90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c910: 0x3e00008  jr          $ra
    ctx->pc = 0x29C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C918u;
}
