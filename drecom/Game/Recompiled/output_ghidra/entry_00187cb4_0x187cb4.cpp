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

// Function: entry_00187cb4
// Address: 0x187cb4 - 0x187cd0
void entry_00187cb4_0x187cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187cb4_0x187cb4");
#endif

    ctx->pc = 0x187cb4u;

    // 0x187cb4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x187cb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187cc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x187CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187CD0u;
}
