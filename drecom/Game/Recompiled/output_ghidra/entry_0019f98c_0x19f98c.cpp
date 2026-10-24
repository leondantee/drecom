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

// Function: entry_0019f98c
// Address: 0x19f98c - 0x19f9a4
void entry_0019f98c_0x19f98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f98c_0x19f98c");
#endif

    switch (ctx->pc) {
        case 0x19f994u: goto label_19f994;
        default: break;
    }

    ctx->pc = 0x19f98cu;

    // 0x19f98c: 0xc0ce678  jal         func_3399E0
    ctx->pc = 0x19F98Cu;
    SET_GPR_U32(ctx, 31, 0x19F994u);
    ctx->pc = 0x3399E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3399E0u, 0x19F98Cu, 0x19F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F994u;
label_19f994:
    // 0x19f994: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f994u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f998: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f99c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F9A4u;
}
