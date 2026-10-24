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

// Function: entry_002ebfb8
// Address: 0x2ebfb8 - 0x2ebfdc
void entry_002ebfb8_0x2ebfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ebfb8_0x2ebfb8");
#endif

    ctx->pc = 0x2ebfb8u;

    // 0x2ebfb8: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x2ebfb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2ebfbc: 0x1460ff45  bnez        $v1, . + 4 + (-0xBB << 2)
    ctx->pc = 0x2EBFBCu;
    {
        const bool branch_taken_0x2ebfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfbc) {
            ctx->pc = 0x2EBCD4u;
            return;
        }
    }
    ctx->pc = 0x2EBFC4u;
    // 0x2ebfc4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2ebfc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebfc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebfcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebfd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ebfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ebfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBFDCu;
}
