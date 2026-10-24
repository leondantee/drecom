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

// Function: entry_003281a0
// Address: 0x3281a0 - 0x3281b8
void entry_003281a0_0x3281a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003281a0_0x3281a0");
#endif

    switch (ctx->pc) {
        case 0x3281a8u: goto label_3281a8;
        default: break;
    }

    ctx->pc = 0x3281a0u;

    // 0x3281a0: 0xc0ca1e0  jal         func_328780
    ctx->pc = 0x3281A0u;
    SET_GPR_U32(ctx, 31, 0x3281A8u);
    ctx->pc = 0x328780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328780u, 0x3281A0u, 0x3281A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281A8u;
label_3281a8:
    // 0x3281a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3281a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3281ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3281acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3281b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3281B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281B8u;
}
