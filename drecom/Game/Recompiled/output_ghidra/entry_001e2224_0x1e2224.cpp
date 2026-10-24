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

// Function: entry_001e2224
// Address: 0x1e2224 - 0x1e2258
void entry_001e2224_0x1e2224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2224_0x1e2224");
#endif

    ctx->pc = 0x1e2224u;

    // 0x1e2224: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e2228: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e2228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e222c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e222cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2230: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e2230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2234: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e2234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2238: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e2238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e223c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e223cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e224c: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x1e224cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1e2250: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2258u;
}
