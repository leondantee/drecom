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

// Function: RFU000_FullReset
// Address: 0x212600 - 0x212610
void RFU000_FullReset_0x212600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU000_FullReset_0x212600");
#endif

    switch (ctx->pc) {
        case 0x212608u: goto label_212608;
        default: break;
    }

    ctx->pc = 0x212600u;

    // 0x212600: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x212600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x212604: 0xc  syscall     0
    ctx->pc = 0x212604u;
    ctx->pc = 0x212608u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212608:
    // 0x212608: 0x3e00008  jr          $ra
    ctx->pc = 0x212608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212610u;
}
