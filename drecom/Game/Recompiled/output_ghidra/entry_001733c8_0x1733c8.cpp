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

// Function: entry_001733c8
// Address: 0x1733c8 - 0x1733e8
void entry_001733c8_0x1733c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001733c8_0x1733c8");
#endif

    ctx->pc = 0x1733c8u;

    // 0x1733c8: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1733cc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1733ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1733d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1733d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1733d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1733d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1733d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1733d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1733dc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1733e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1733E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733E8u;
}
