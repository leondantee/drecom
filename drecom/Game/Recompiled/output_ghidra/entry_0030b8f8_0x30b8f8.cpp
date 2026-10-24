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

// Function: entry_0030b8f8
// Address: 0x30b8f8 - 0x30b928
void entry_0030b8f8_0x30b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b8f8_0x30b8f8");
#endif

    ctx->pc = 0x30b8f8u;

    // 0x30b8f8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30b8f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30b8fc: 0x1460ff0b  bnez        $v1, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x30B8FCu;
    {
        const bool branch_taken_0x30b8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b8fc) {
            ctx->pc = 0x30B52Cu;
            return;
        }
    }
    ctx->pc = 0x30B904u;
    // 0x30b904: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x30b904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b908: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30b908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b90c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b91c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x30b91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30b920: 0x3e00008  jr          $ra
    ctx->pc = 0x30B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B928u;
}
