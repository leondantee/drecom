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

// Function: entry_00338484
// Address: 0x338484 - 0x3384a4
void entry_00338484_0x338484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338484_0x338484");
#endif

    ctx->pc = 0x338484u;

    // 0x338484: 0xa023c98e  sb          $v1, -0x3672($at)
    ctx->pc = 0x338484u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294953358), (uint8_t)GPR_U32(ctx, 3));
    // 0x338488: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x338488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33848c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33848cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x338498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33849c: 0x3e00008  jr          $ra
    ctx->pc = 0x33849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3384A4u;
}
