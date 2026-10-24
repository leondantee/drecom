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

// Function: SetCPUTimerHandler
// Address: 0x212d00 - 0x212d10
void SetCPUTimerHandler_0x212d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCPUTimerHandler_0x212d00");
#endif

    switch (ctx->pc) {
        case 0x212d08u: goto label_212d08;
        default: break;
    }

    ctx->pc = 0x212d00u;

    // 0x212d00: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x212d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x212d04: 0xc  syscall     0
    ctx->pc = 0x212d04u;
    ctx->pc = 0x212D08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212d08:
    // 0x212d08: 0x3e00008  jr          $ra
    ctx->pc = 0x212D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212D10u;
}
