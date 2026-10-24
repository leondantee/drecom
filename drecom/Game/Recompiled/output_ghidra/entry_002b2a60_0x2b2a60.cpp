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

// Function: entry_002b2a60
// Address: 0x2b2a60 - 0x2b2a78
void entry_002b2a60_0x2b2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b2a60_0x2b2a60");
#endif

    switch (ctx->pc) {
        case 0x2b2a68u: goto label_2b2a68;
        default: break;
    }

    ctx->pc = 0x2b2a60u;

    // 0x2b2a60: 0xc0aabec  jal         func_2AAFB0
    ctx->pc = 0x2B2A60u;
    SET_GPR_U32(ctx, 31, 0x2B2A68u);
    ctx->pc = 0x2AAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAFB0u, 0x2B2A60u, 0x2B2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A68u;
label_2b2a68:
    // 0x2b2a68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2a68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2a70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A78u;
}
