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

// Function: ExecOSD
// Address: 0x212e40 - 0x212e50
void ExecOSD_0x212e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecOSD_0x212e40");
#endif

    switch (ctx->pc) {
        case 0x212e48u: goto label_212e48;
        default: break;
    }

    ctx->pc = 0x212e40u;

    // 0x212e40: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x212e44: 0xc  syscall     0
    ctx->pc = 0x212e44u;
    ctx->pc = 0x212E48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212e48:
    // 0x212e48: 0x3e00008  jr          $ra
    ctx->pc = 0x212E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212E50u;
}
