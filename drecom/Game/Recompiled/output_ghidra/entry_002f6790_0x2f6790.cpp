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

// Function: entry_002f6790
// Address: 0x2f6790 - 0x2f67ac
void entry_002f6790_0x2f6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6790_0x2f6790");
#endif

    ctx->pc = 0x2f6790u;

    // 0x2f6790: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2f6790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f679c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f679cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f67a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67ACu;
}
