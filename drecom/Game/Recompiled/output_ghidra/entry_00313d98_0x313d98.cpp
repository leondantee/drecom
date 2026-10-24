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

// Function: entry_00313d98
// Address: 0x313d98 - 0x313dc4
void entry_00313d98_0x313d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313d98_0x313d98");
#endif

    ctx->pc = 0x313d98u;

    // 0x313d98: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x313d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x313d9c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x313D9Cu;
    {
        const bool branch_taken_0x313d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313d9c) {
            ctx->pc = 0x313C80u;
            return;
        }
    }
    ctx->pc = 0x313DA4u;
    // 0x313da4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x313da4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313da8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x313da8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313db8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x313db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x313dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x313DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313DC4u;
}
