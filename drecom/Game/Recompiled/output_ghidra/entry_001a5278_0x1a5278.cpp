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

// Function: entry_001a5278
// Address: 0x1a5278 - 0x1a5290
void entry_001a5278_0x1a5278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5278_0x1a5278");
#endif

    switch (ctx->pc) {
        case 0x1a5280u: goto label_1a5280;
        default: break;
    }

    ctx->pc = 0x1a5278u;

    // 0x1a5278: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5278u;
    SET_GPR_U32(ctx, 31, 0x1A5280u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5278u, 0x1A5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5280u;
label_1a5280:
    // 0x1a5280: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a5280u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5284: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5288: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5290u;
}
