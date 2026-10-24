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

// Function: entry_0017507c
// Address: 0x17507c - 0x175094
void entry_0017507c_0x17507c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017507c_0x17507c");
#endif

    switch (ctx->pc) {
        case 0x175084u: goto label_175084;
        default: break;
    }

    ctx->pc = 0x17507cu;

    // 0x17507c: 0xc096290  jal         func_258A40
    ctx->pc = 0x17507Cu;
    SET_GPR_U32(ctx, 31, 0x175084u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x17507Cu, 0x175084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175084u;
label_175084:
    // 0x175084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x175084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x175088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17508c: 0x3e00008  jr          $ra
    ctx->pc = 0x17508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175094u;
}
