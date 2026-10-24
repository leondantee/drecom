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

// Function: entry_0016611c
// Address: 0x16611c - 0x166138
void entry_0016611c_0x16611c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016611c_0x16611c");
#endif

    switch (ctx->pc) {
        case 0x166124u: goto label_166124;
        default: break;
    }

    ctx->pc = 0x16611cu;

    // 0x16611c: 0xc06afc8  jal         func_1ABF20
    ctx->pc = 0x16611Cu;
    SET_GPR_U32(ctx, 31, 0x166124u);
    ctx->pc = 0x1ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF20u, 0x16611Cu, 0x166124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166124u;
label_166124:
    // 0x166124: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x166124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16612c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16612cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166130: 0x3e00008  jr          $ra
    ctx->pc = 0x166130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166138u;
}
