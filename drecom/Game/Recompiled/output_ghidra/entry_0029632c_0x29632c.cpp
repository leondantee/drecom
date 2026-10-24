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

// Function: entry_0029632c
// Address: 0x29632c - 0x296354
void entry_0029632c_0x29632c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029632c_0x29632c");
#endif

    ctx->pc = 0x29632cu;

    // 0x29632c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296330: 0xa22369c9  sb          $v1, 0x69C9($s1)
    ctx->pc = 0x296330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27081), (uint8_t)GPR_U32(ctx, 3));
    // 0x296334: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x296334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29633c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29633cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296348: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x296348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29634c: 0x3e00008  jr          $ra
    ctx->pc = 0x29634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296354u;
}
