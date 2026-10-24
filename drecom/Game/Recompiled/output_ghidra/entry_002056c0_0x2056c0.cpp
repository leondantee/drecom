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

// Function: entry_002056c0
// Address: 0x2056c0 - 0x2056f0
void entry_002056c0_0x2056c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002056c0_0x2056c0");
#endif

    ctx->pc = 0x2056c0u;

    // 0x2056c0: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2056c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2056C4u;
    {
        const bool branch_taken_0x2056c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2056c4) {
            ctx->pc = 0x2056A0u;
            return;
        }
    }
    ctx->pc = 0x2056CCu;
    // 0x2056cc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2056ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2056d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2056d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2056d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2056d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2056d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2056d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2056dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2056dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2056e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2056e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056e4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2056e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2056E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056F0u;
}
