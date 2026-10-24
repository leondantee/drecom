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

// Function: entry_0019c468
// Address: 0x19c468 - 0x19c484
void entry_0019c468_0x19c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c468_0x19c468");
#endif

    ctx->pc = 0x19c468u;

    // 0x19c468: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19c468u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c46c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19c46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c470: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19c470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c478: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C484u;
}
