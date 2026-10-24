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

// Function: entry_0019b178
// Address: 0x19b178 - 0x19b190
void entry_0019b178_0x19b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b178_0x19b178");
#endif

    switch (ctx->pc) {
        case 0x19b180u: goto label_19b180;
        default: break;
    }

    ctx->pc = 0x19b178u;

    // 0x19b178: 0xc065a18  jal         func_196860
    ctx->pc = 0x19B178u;
    SET_GPR_U32(ctx, 31, 0x19B180u);
    ctx->pc = 0x196860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196860u, 0x19B178u, 0x19B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B180u;
label_19b180:
    // 0x19b180: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19b180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b184: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19b184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b188: 0x3e00008  jr          $ra
    ctx->pc = 0x19B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B190u;
}
