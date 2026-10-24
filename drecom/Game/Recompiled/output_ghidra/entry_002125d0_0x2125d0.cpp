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

// Function: entry_002125d0
// Address: 0x2125d0 - 0x2125e8
void entry_002125d0_0x2125d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002125d0_0x2125d0");
#endif

    switch (ctx->pc) {
        case 0x2125d8u: goto label_2125d8;
        default: break;
    }

    ctx->pc = 0x2125d0u;

    // 0x2125d0: 0xc084a50  jal         func_212940
    ctx->pc = 0x2125D0u;
    SET_GPR_U32(ctx, 31, 0x2125D8u);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x2125D8u;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2125D8u) { return; }
    ctx->pc = 0x2125D8u;
label_2125d8:
    // 0x2125d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2125d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2125dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2125e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2125E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2125E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2125E8u;
}
