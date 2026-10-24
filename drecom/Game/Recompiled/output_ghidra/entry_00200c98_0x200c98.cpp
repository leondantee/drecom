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

// Function: entry_00200c98
// Address: 0x200c98 - 0x200cb8
void entry_00200c98_0x200c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200c98_0x200c98");
#endif

    switch (ctx->pc) {
        case 0x200ca0u: goto label_200ca0;
        default: break;
    }

    ctx->pc = 0x200c98u;

    // 0x200c98: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x200C98u;
    SET_GPR_U32(ctx, 31, 0x200CA0u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x200C98u, 0x200CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CA0u;
label_200ca0:
    // 0x200ca0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x200ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200cac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x200cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x200cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x200CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200CB8u;
}
