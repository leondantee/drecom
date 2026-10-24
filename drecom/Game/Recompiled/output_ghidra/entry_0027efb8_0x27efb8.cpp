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

// Function: entry_0027efb8
// Address: 0x27efb8 - 0x27efd0
void entry_0027efb8_0x27efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027efb8_0x27efb8");
#endif

    switch (ctx->pc) {
        case 0x27efc0u: goto label_27efc0;
        default: break;
    }

    ctx->pc = 0x27efb8u;

    // 0x27efb8: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27EFB8u;
    SET_GPR_U32(ctx, 31, 0x27EFC0u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27EFB8u, 0x27EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC0u;
label_27efc0:
    // 0x27efc0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27efc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27efc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27efc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFD0u;
}
