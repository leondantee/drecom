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

// Function: entry_003018c8
// Address: 0x3018c8 - 0x3018f8
void entry_003018c8_0x3018c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003018c8_0x3018c8");
#endif

    ctx->pc = 0x3018c8u;

    // 0x3018c8: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x3018c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3018cc: 0x1460fe9e  bnez        $v1, . + 4 + (-0x162 << 2)
    ctx->pc = 0x3018CCu;
    {
        const bool branch_taken_0x3018cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3018cc) {
            ctx->pc = 0x301348u;
            return;
        }
    }
    ctx->pc = 0x3018D4u;
    // 0x3018d4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x3018d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3018d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3018d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3018dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3018dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3018e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3018e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3018e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3018e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3018e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3018e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3018ec: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x3018ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3018f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3018F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3018F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3018F8u;
}
