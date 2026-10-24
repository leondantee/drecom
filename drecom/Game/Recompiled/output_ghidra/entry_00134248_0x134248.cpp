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

// Function: entry_00134248
// Address: 0x134248 - 0x134260
void entry_00134248_0x134248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134248_0x134248");
#endif

    switch (ctx->pc) {
        case 0x134250u: goto label_134250;
        default: break;
    }

    ctx->pc = 0x134248u;

    // 0x134248: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x134248u;
    SET_GPR_U32(ctx, 31, 0x134250u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x134248u, 0x134250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134250u;
label_134250:
    // 0x134250: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x134250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134254: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x134254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134258: 0x3e00008  jr          $ra
    ctx->pc = 0x134258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134260u;
}
