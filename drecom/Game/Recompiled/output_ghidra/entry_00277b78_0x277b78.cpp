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

// Function: entry_00277b78
// Address: 0x277b78 - 0x277b98
void entry_00277b78_0x277b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277b78_0x277b78");
#endif

    switch (ctx->pc) {
        case 0x277b80u: goto label_277b80;
        default: break;
    }

    ctx->pc = 0x277b78u;

    // 0x277b78: 0xc084934  jal         func_2124D0
    ctx->pc = 0x277B78u;
    SET_GPR_U32(ctx, 31, 0x277B80u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x277B78u, 0x277B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B80u;
label_277b80:
    // 0x277b80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277b80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277b8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x277b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277b90: 0x3e00008  jr          $ra
    ctx->pc = 0x277B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277B98u;
}
