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

// Function: ExecPS2
// Address: 0x212670 - 0x212680
void ExecPS2_0x212670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecPS2_0x212670");
#endif

    switch (ctx->pc) {
        case 0x212678u: goto label_212678;
        default: break;
    }

    ctx->pc = 0x212670u;

    // 0x212670: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x212674: 0xc  syscall     0
    ctx->pc = 0x212674u;
    ctx->pc = 0x212678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212678:
    // 0x212678: 0x3e00008  jr          $ra
    ctx->pc = 0x212678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212680u;
}
