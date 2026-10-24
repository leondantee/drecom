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

// Function: entry_001ac198
// Address: 0x1ac198 - 0x1ac1b0
void entry_001ac198_0x1ac198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac198_0x1ac198");
#endif

    switch (ctx->pc) {
        case 0x1ac1a0u: goto label_1ac1a0;
        default: break;
    }

    ctx->pc = 0x1ac198u;

    // 0x1ac198: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x1AC198u;
    SET_GPR_U32(ctx, 31, 0x1AC1A0u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x1AC1A0u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC1A0u) { return; }
    ctx->pc = 0x1AC1A0u;
label_1ac1a0:
    // 0x1ac1a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ac1a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC1B0u;
}
