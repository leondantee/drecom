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

// Function: entry_00175c98
// Address: 0x175c98 - 0x175cc8
void entry_00175c98_0x175c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c98_0x175c98");
#endif

    ctx->pc = 0x175c98u;

    // 0x175c98: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x175c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x175c9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x175c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x175ca0: 0x1640fff2  bnez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x175CA0u;
    {
        const bool branch_taken_0x175ca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ca0) {
            ctx->pc = 0x175C6Cu;
            return;
        }
    }
    ctx->pc = 0x175CA8u;
    // 0x175ca8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x175ca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175cbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x175cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x175cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x175CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175CC8u;
}
