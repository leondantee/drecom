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

// Function: entry_00361e98
// Address: 0x361e98 - 0x361ec0
void entry_00361e98_0x361e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361e98_0x361e98");
#endif

    ctx->pc = 0x361e98u;

    // 0x361e98: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x361e98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361e9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x361e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361ea0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x361ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361ea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361eb4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x361eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x361EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361EC0u;
}
