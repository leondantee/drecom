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

// Function: entry_00373788
// Address: 0x373788 - 0x3737b0
void entry_00373788_0x373788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373788_0x373788");
#endif

    ctx->pc = 0x373788u;

    // 0x373788: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x373788u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37378c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37378cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373790: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x373790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37379c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37379cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3737a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3737a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3737a4: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x3737a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3737a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3737A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3737B0u;
}
