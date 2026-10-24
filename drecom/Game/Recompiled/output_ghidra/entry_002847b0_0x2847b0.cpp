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

// Function: entry_002847b0
// Address: 0x2847b0 - 0x2847c8
void entry_002847b0_0x2847b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002847b0_0x2847b0");
#endif

    switch (ctx->pc) {
        case 0x2847b8u: goto label_2847b8;
        default: break;
    }

    ctx->pc = 0x2847b0u;

    // 0x2847b0: 0xc0d776c  jal         func_35DDB0
    ctx->pc = 0x2847B0u;
    SET_GPR_U32(ctx, 31, 0x2847B8u);
    ctx->pc = 0x35DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDB0u, 0x2847B0u, 0x2847B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847B8u;
label_2847b8:
    // 0x2847b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2847b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2847bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2847bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2847c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2847C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2847C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2847C8u;
}
