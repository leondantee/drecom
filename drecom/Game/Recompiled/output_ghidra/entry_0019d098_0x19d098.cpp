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

// Function: entry_0019d098
// Address: 0x19d098 - 0x19d0c8
void entry_0019d098_0x19d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d098_0x19d098");
#endif

    ctx->pc = 0x19d098u;

    // 0x19d098: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x19d098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x19d09c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x19D09Cu;
    {
        const bool branch_taken_0x19d09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d09c) {
            ctx->pc = 0x19D000u;
            return;
        }
    }
    ctx->pc = 0x19D0A4u;
    // 0x19d0a4: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x19d0a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19d0a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19d0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d0ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d0b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0C8u;
}
