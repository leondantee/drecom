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

// Function: entry_0036dc60
// Address: 0x36dc60 - 0x36dc88
void entry_0036dc60_0x36dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036dc60_0x36dc60");
#endif

    ctx->pc = 0x36dc60u;

    // 0x36dc60: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x36dc60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x36dc64: 0x1460fe95  bnez        $v1, . + 4 + (-0x16B << 2)
    ctx->pc = 0x36DC64u;
    {
        const bool branch_taken_0x36dc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36dc64) {
            ctx->pc = 0x36D6BCu;
            return;
        }
    }
    ctx->pc = 0x36DC6Cu;
    // 0x36dc6c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x36dc6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36dc70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36dc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dc74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36dc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dc78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36dc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dc7c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x36dc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x36dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC88u;
}
