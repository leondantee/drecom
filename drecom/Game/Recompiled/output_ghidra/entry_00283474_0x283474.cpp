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

// Function: entry_00283474
// Address: 0x283474 - 0x28348c
void entry_00283474_0x283474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283474_0x283474");
#endif

    switch (ctx->pc) {
        case 0x28347cu: goto label_28347c;
        default: break;
    }

    ctx->pc = 0x283474u;

    // 0x283474: 0xc084964  jal         func_212590
    ctx->pc = 0x283474u;
    SET_GPR_U32(ctx, 31, 0x28347Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x283474u, 0x28347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28347Cu;
label_28347c:
    // 0x28347c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x28347cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283480: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x283480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x283484: 0x3e00008  jr          $ra
    ctx->pc = 0x283484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28348Cu;
}
