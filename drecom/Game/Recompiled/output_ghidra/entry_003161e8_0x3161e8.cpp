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

// Function: entry_003161e8
// Address: 0x3161e8 - 0x316210
void entry_003161e8_0x3161e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003161e8_0x3161e8");
#endif

    ctx->pc = 0x3161e8u;

    // 0x3161e8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x3161e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3161ec: 0x1460ff03  bnez        $v1, . + 4 + (-0xFD << 2)
    ctx->pc = 0x3161ECu;
    {
        const bool branch_taken_0x3161ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3161ec) {
            ctx->pc = 0x315DFCu;
            return;
        }
    }
    ctx->pc = 0x3161F4u;
    // 0x3161f4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3161f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3161f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3161f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3161fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3161fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316204: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x316208: 0x3e00008  jr          $ra
    ctx->pc = 0x316208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316210u;
}
