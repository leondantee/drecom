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

// Function: entry_00363518
// Address: 0x363518 - 0x363540
void entry_00363518_0x363518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363518_0x363518");
#endif

    ctx->pc = 0x363518u;

    // 0x363518: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x363518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36351c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36351cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36352c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363534: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x363534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x363538: 0x3e00008  jr          $ra
    ctx->pc = 0x363538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363540u;
}
