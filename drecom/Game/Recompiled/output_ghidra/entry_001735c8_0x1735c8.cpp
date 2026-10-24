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

// Function: entry_001735c8
// Address: 0x1735c8 - 0x1735e0
void entry_001735c8_0x1735c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001735c8_0x1735c8");
#endif

    switch (ctx->pc) {
        case 0x1735d0u: goto label_1735d0;
        default: break;
    }

    ctx->pc = 0x1735c8u;

    // 0x1735c8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1735C8u;
    SET_GPR_U32(ctx, 31, 0x1735D0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1735C8u, 0x1735D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735D0u;
label_1735d0:
    // 0x1735d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1735d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1735d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1735d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1735D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1735E0u;
}
