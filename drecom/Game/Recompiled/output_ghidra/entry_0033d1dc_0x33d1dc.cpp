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

// Function: entry_0033d1dc
// Address: 0x33d1dc - 0x33d200
void entry_0033d1dc_0x33d1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d1dc_0x33d1dc");
#endif

    ctx->pc = 0x33d1dcu;

    // 0x33d1dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33d1dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33d1e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33d1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d1e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33d1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d1e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d1f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33d1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D200u;
}
