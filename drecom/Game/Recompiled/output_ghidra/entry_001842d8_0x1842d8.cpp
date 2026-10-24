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

// Function: entry_001842d8
// Address: 0x1842d8 - 0x184300
void entry_001842d8_0x1842d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001842d8_0x1842d8");
#endif

    ctx->pc = 0x1842d8u;

    // 0x1842d8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1842d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1842dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1842dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1842e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1842e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1842e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1842e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1842e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1842e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1842ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1842ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1842f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1842f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1842f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1842f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1842f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1842F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1842F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184300u;
}
