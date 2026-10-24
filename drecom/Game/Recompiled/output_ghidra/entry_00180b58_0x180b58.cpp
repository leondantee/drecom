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

// Function: entry_00180b58
// Address: 0x180b58 - 0x180b74
void entry_00180b58_0x180b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180b58_0x180b58");
#endif

    switch (ctx->pc) {
        case 0x180b60u: goto label_180b60;
        default: break;
    }

    ctx->pc = 0x180b58u;

    // 0x180b58: 0xc0602e0  jal         func_180B80
    ctx->pc = 0x180B58u;
    SET_GPR_U32(ctx, 31, 0x180B60u);
    ctx->pc = 0x180B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B80u, 0x180B58u, 0x180B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B60u;
label_180b60:
    // 0x180b60: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x180b60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x180B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B74u;
}
