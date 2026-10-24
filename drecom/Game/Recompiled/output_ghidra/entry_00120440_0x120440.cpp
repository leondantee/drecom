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

// Function: entry_00120440
// Address: 0x120440 - 0x12045c
void entry_00120440_0x120440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120440_0x120440");
#endif

    switch (ctx->pc) {
        case 0x120448u: goto label_120448;
        default: break;
    }

    ctx->pc = 0x120440u;

    // 0x120440: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x120440u;
    SET_GPR_U32(ctx, 31, 0x120448u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x120440u, 0x120448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120448u;
label_120448:
    // 0x120448: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x120448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12044c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120450: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x120450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x120454: 0x3e00008  jr          $ra
    ctx->pc = 0x120454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12045Cu;
}
