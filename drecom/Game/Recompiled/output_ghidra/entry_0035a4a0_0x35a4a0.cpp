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

// Function: entry_0035a4a0
// Address: 0x35a4a0 - 0x35a4b8
void entry_0035a4a0_0x35a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a4a0_0x35a4a0");
#endif

    switch (ctx->pc) {
        case 0x35a4a8u: goto label_35a4a8;
        default: break;
    }

    ctx->pc = 0x35a4a0u;

    // 0x35a4a0: 0xc0d6a00  jal         func_35A800
    ctx->pc = 0x35A4A0u;
    SET_GPR_U32(ctx, 31, 0x35A4A8u);
    ctx->pc = 0x35A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A800u, 0x35A4A0u, 0x35A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4A8u;
label_35a4a8:
    // 0x35a4a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a4a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a4ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A4B8u;
}
