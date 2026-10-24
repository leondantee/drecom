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

// Function: entry_00155bd8
// Address: 0x155bd8 - 0x155c00
void entry_00155bd8_0x155bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155bd8_0x155bd8");
#endif

    ctx->pc = 0x155bd8u;

    // 0x155bd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155bdc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155be0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x155BE0u;
    {
        const bool branch_taken_0x155be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155be0) {
            ctx->pc = 0x155B70u;
            return;
        }
    }
    ctx->pc = 0x155BE8u;
    // 0x155be8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x155be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bf4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x155BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C00u;
}
