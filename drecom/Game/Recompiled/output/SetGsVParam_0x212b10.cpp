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

// Function: SetGsVParam
// Address: 0x212b10 - 0x212b20
void SetGsVParam_0x212b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGsVParam_0x212b10");
#endif

    switch (ctx->pc) {
        case 0x212b18u: goto label_212b18;
        default: break;
    }

    ctx->pc = 0x212b10u;

    // 0x212b10: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x212b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x212b14: 0xc  syscall     0
    ctx->pc = 0x212b14u;
    ctx->pc = 0x212B18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_212b18:
    // 0x212b18: 0x3e00008  jr          $ra
    ctx->pc = 0x212B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212B20u;
}
