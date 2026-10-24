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

// Function: entry_003114e8
// Address: 0x3114e8 - 0x311508
void entry_003114e8_0x3114e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003114e8_0x3114e8");
#endif

    ctx->pc = 0x3114e8u;

    // 0x3114e8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x3114e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3114ec: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3114ECu;
    {
        const bool branch_taken_0x3114ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3114ec) {
            ctx->pc = 0x311410u;
            return;
        }
    }
    ctx->pc = 0x3114F4u;
    // 0x3114f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3114f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3114f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3114f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3114fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3114fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311500: 0x3e00008  jr          $ra
    ctx->pc = 0x311500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311508u;
}
