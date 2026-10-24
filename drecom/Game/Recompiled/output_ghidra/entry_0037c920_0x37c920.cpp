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

// Function: entry_0037c920
// Address: 0x37c920 - 0x37c938
void entry_0037c920_0x37c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c920_0x37c920");
#endif

    switch (ctx->pc) {
        case 0x37c928u: goto label_37c928;
        default: break;
    }

    ctx->pc = 0x37c920u;

    // 0x37c920: 0xc079140  jal         func_1E4500
    ctx->pc = 0x37C920u;
    SET_GPR_U32(ctx, 31, 0x37C928u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x37C920u, 0x37C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C928u;
label_37c928:
    // 0x37c928: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c92c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37c92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37c930: 0x3e00008  jr          $ra
    ctx->pc = 0x37C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C938u;
}
