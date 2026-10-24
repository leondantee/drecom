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

// Function: entry_001a2e48
// Address: 0x1a2e48 - 0x1a2e68
void entry_001a2e48_0x1a2e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2e48_0x1a2e48");
#endif

    switch (ctx->pc) {
        case 0x1a2e50u: goto label_1a2e50;
        default: break;
    }

    ctx->pc = 0x1a2e48u;

    // 0x1a2e48: 0xc068be4  jal         func_1A2F90
    ctx->pc = 0x1A2E48u;
    SET_GPR_U32(ctx, 31, 0x1A2E50u);
    ctx->pc = 0x1A2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F90u, 0x1A2E48u, 0x1A2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E50u;
label_1a2e50:
    // 0x1a2e50: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a2e50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a2e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E68u;
}
