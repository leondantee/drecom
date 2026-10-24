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

// Function: entry_0027f4d0
// Address: 0x27f4d0 - 0x27f4e8
void entry_0027f4d0_0x27f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f4d0_0x27f4d0");
#endif

    switch (ctx->pc) {
        case 0x27f4d8u: goto label_27f4d8;
        default: break;
    }

    ctx->pc = 0x27f4d0u;

    // 0x27f4d0: 0xc0a0100  jal         func_280400
    ctx->pc = 0x27F4D0u;
    SET_GPR_U32(ctx, 31, 0x27F4D8u);
    ctx->pc = 0x280400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280400u, 0x27F4D0u, 0x27F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4D8u;
label_27f4d8:
    // 0x27f4d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f4d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f4dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4E8u;
}
