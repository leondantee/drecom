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

// Function: entry_003148b0
// Address: 0x3148b0 - 0x3148d4
void entry_003148b0_0x3148b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003148b0_0x3148b0");
#endif

    ctx->pc = 0x3148b0u;

    // 0x3148b0: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x3148b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3148b4: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3148B4u;
    {
        const bool branch_taken_0x3148b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3148b4) {
            ctx->pc = 0x31472Cu;
            return;
        }
    }
    ctx->pc = 0x3148BCu;
    // 0x3148bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3148bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3148c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3148c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3148c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3148c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3148c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3148cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3148CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3148CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3148D4u;
}
