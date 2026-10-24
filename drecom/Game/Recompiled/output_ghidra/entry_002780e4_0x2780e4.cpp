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

// Function: entry_002780e4
// Address: 0x2780e4 - 0x278108
void entry_002780e4_0x2780e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002780e4_0x2780e4");
#endif

    switch (ctx->pc) {
        case 0x2780ecu: goto label_2780ec;
        default: break;
    }

    ctx->pc = 0x2780e4u;

    // 0x2780e4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2780E4u;
    SET_GPR_U32(ctx, 31, 0x2780ECu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2780E4u, 0x2780ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780ECu;
label_2780ec:
    // 0x2780ec: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2780ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2780f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2780f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2780f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2780f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2780f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2780f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2780fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2780fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x278100: 0x3e00008  jr          $ra
    ctx->pc = 0x278100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278108u;
}
