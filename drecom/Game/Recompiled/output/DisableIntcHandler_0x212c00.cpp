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

// Function: DisableIntcHandler
// Address: 0x212c00 - 0x212c10
void DisableIntcHandler_0x212c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableIntcHandler_0x212c00");
#endif

    switch (ctx->pc) {
        case 0x212c08u: goto label_212c08;
        default: break;
    }

    ctx->pc = 0x212c00u;

    // 0x212c00: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x212c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x212c04: 0xc  syscall     0
    ctx->pc = 0x212c04u;
    ctx->pc = 0x212C08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212c08:
    // 0x212c08: 0x3e00008  jr          $ra
    ctx->pc = 0x212C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212C10u;
}
