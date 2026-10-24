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

// Function: entry_002f9230
// Address: 0x2f9230 - 0x2f925c
void entry_002f9230_0x2f9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9230_0x2f9230");
#endif

    ctx->pc = 0x2f9230u;

    // 0x2f9230: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2f9230u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9234: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f9234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9238: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f9238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f923c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f923cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f924c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f924cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9250: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f9254: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F925Cu;
}
