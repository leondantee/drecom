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

// Function: DisableDispatchThread
// Address: 0x212890 - 0x2128a0
void DisableDispatchThread_0x212890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableDispatchThread_0x212890");
#endif

    switch (ctx->pc) {
        case 0x212898u: goto label_212898;
        default: break;
    }

    ctx->pc = 0x212890u;

    // 0x212890: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x212890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x212894: 0xc  syscall     0
    ctx->pc = 0x212894u;
    ctx->pc = 0x212898u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212898:
    // 0x212898: 0x3e00008  jr          $ra
    ctx->pc = 0x212898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2128A0u;
}
