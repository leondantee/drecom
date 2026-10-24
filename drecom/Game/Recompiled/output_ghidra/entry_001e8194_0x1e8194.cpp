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

// Function: entry_001e8194
// Address: 0x1e8194 - 0x1e81c8
void entry_001e8194_0x1e8194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8194_0x1e8194");
#endif

    ctx->pc = 0x1e8194u;

    // 0x1e8194: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e8194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8198: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e8198u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e819c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e819cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e81a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e81a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e81a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e81a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e81a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e81a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e81ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e81acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e81b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e81b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e81b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e81b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e81b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81bc: 0x27bd03f0  addiu       $sp, $sp, 0x3F0
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x1e81c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E81C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E81C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E81C8u;
}
