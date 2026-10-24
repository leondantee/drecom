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

// Function: entry_002835a8
// Address: 0x2835a8 - 0x2835c0
void entry_002835a8_0x2835a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002835a8_0x2835a8");
#endif

    switch (ctx->pc) {
        case 0x2835b0u: goto label_2835b0;
        default: break;
    }

    ctx->pc = 0x2835a8u;

    // 0x2835a8: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2835A8u;
    SET_GPR_U32(ctx, 31, 0x2835B0u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2835A8u, 0x2835B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2835B0u;
label_2835b0:
    // 0x2835b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2835b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2835b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2835b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2835b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2835B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835C0u;
}
