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

// Function: entry_0018d2f0
// Address: 0x18d2f0 - 0x18d320
void entry_0018d2f0_0x18d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2f0_0x18d2f0");
#endif

    ctx->pc = 0x18d2f0u;

    // 0x18d2f0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18d2f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d2f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18d2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d2f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18d2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d2fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18d2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d300: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18d300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18d304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18d308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d314: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18d318: 0x3e00008  jr          $ra
    ctx->pc = 0x18D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D320u;
}
