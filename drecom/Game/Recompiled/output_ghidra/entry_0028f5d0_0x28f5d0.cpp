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

// Function: entry_0028f5d0
// Address: 0x28f5d0 - 0x28f5ec
void entry_0028f5d0_0x28f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f5d0_0x28f5d0");
#endif

    switch (ctx->pc) {
        case 0x28f5d8u: goto label_28f5d8;
        default: break;
    }

    ctx->pc = 0x28f5d0u;

    // 0x28f5d0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28F5D0u;
    SET_GPR_U32(ctx, 31, 0x28F5D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28F5D0u, 0x28F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5D8u;
label_28f5d8:
    // 0x28f5d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x28f5d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f5e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F5ECu;
}
