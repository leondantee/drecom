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

// Function: entry_00183d68
// Address: 0x183d68 - 0x183d80
void entry_00183d68_0x183d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d68_0x183d68");
#endif

    switch (ctx->pc) {
        case 0x183d70u: goto label_183d70;
        default: break;
    }

    ctx->pc = 0x183d68u;

    // 0x183d68: 0xc05f910  jal         func_17E440
    ctx->pc = 0x183D68u;
    SET_GPR_U32(ctx, 31, 0x183D70u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x183D68u, 0x183D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D70u;
label_183d70:
    // 0x183d70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183d70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x183d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183d78: 0x3e00008  jr          $ra
    ctx->pc = 0x183D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183D80u;
}
