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

// Function: entry_0036d2d8
// Address: 0x36d2d8 - 0x36d2f4
void entry_0036d2d8_0x36d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d2d8_0x36d2d8");
#endif

    ctx->pc = 0x36d2d8u;

    // 0x36d2d8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x36d2d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36d2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36d2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d2e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36d2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D2F4u;
}
