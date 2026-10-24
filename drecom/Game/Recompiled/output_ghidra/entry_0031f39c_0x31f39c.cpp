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

// Function: entry_0031f39c
// Address: 0x31f39c - 0x31f3b4
void entry_0031f39c_0x31f39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f39c_0x31f39c");
#endif

    switch (ctx->pc) {
        case 0x31f3a4u: goto label_31f3a4;
        default: break;
    }

    ctx->pc = 0x31f39cu;

    // 0x31f39c: 0xc084964  jal         func_212590
    ctx->pc = 0x31F39Cu;
    SET_GPR_U32(ctx, 31, 0x31F3A4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F39Cu, 0x31F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3A4u;
label_31f3a4:
    // 0x31f3a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31f3a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f3a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F3B4u;
}
