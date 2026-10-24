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

// Function: entry_0017e1f8
// Address: 0x17e1f8 - 0x17e214
void entry_0017e1f8_0x17e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e1f8_0x17e1f8");
#endif

    switch (ctx->pc) {
        case 0x17e200u: goto label_17e200;
        default: break;
    }

    ctx->pc = 0x17e1f8u;

    // 0x17e1f8: 0xc0623e0  jal         func_188F80
    ctx->pc = 0x17E1F8u;
    SET_GPR_U32(ctx, 31, 0x17E200u);
    ctx->pc = 0x188F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F80u, 0x17E1F8u, 0x17E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E200u;
label_17e200:
    // 0x17e200: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17e200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e20c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E214u;
}
