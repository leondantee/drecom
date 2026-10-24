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

// Function: entry_00195d04
// Address: 0x195d04 - 0x195d28
void entry_00195d04_0x195d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195d04_0x195d04");
#endif

    ctx->pc = 0x195d04u;

    // 0x195d04: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x195d04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x195d08: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x195d08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195d0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d1c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x195d20: 0x3e00008  jr          $ra
    ctx->pc = 0x195D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D28u;
}
