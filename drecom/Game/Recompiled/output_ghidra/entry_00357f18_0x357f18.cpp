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

// Function: entry_00357f18
// Address: 0x357f18 - 0x357f30
void entry_00357f18_0x357f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357f18_0x357f18");
#endif

    switch (ctx->pc) {
        case 0x357f20u: goto label_357f20;
        default: break;
    }

    ctx->pc = 0x357f18u;

    // 0x357f18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x357F18u;
    SET_GPR_U32(ctx, 31, 0x357F20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x357F18u, 0x357F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F20u;
label_357f20:
    // 0x357f20: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357f28: 0x3e00008  jr          $ra
    ctx->pc = 0x357F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F30u;
}
