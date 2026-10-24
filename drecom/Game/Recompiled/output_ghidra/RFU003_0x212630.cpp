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

// Function: RFU003
// Address: 0x212630 - 0x212640
void RFU003_0x212630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU003_0x212630");
#endif

    switch (ctx->pc) {
        case 0x212638u: goto label_212638;
        default: break;
    }

    ctx->pc = 0x212630u;

    // 0x212630: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x212630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212634: 0xc  syscall     0
    ctx->pc = 0x212634u;
    ctx->pc = 0x212638u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212638:
    // 0x212638: 0x3e00008  jr          $ra
    ctx->pc = 0x212638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212640u;
}
