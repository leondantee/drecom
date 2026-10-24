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

// Function: entry_0030f6b0
// Address: 0x30f6b0 - 0x30f6e0
void entry_0030f6b0_0x30f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f6b0_0x30f6b0");
#endif

    ctx->pc = 0x30f6b0u;

    // 0x30f6b0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x30f6b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f6b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30f6b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f6b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30f6b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f6bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30f6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f6c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30f6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f6c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f6d4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x30f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F6E0u;
}
