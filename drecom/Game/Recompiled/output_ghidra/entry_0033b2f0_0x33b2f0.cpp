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

// Function: entry_0033b2f0
// Address: 0x33b2f0 - 0x33b314
void entry_0033b2f0_0x33b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b2f0_0x33b2f0");
#endif

    ctx->pc = 0x33b2f0u;

    // 0x33b2f0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x33b2f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33b2f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B2F4u;
    {
        const bool branch_taken_0x33b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b2f4) {
            ctx->pc = 0x33B2C0u;
            return;
        }
    }
    ctx->pc = 0x33B2FCu;
    // 0x33b2fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x33b2fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b308: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B314u;
}
