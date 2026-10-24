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

// Function: entry_001d8a80
// Address: 0x1d8a80 - 0x1d8aa0
void entry_001d8a80_0x1d8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a80_0x1d8a80");
#endif

    switch (ctx->pc) {
        case 0x1d8a88u: goto label_1d8a88;
        default: break;
    }

    ctx->pc = 0x1d8a80u;

    // 0x1d8a80: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1D8A80u;
    SET_GPR_U32(ctx, 31, 0x1D8A88u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1D8A80u, 0x1D8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A88u;
label_1d8a88:
    // 0x1d8a88: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AA0u;
}
