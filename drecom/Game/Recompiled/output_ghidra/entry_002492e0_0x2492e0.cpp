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

// Function: entry_002492e0
// Address: 0x2492e0 - 0x249308
void entry_002492e0_0x2492e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002492e0_0x2492e0");
#endif

    ctx->pc = 0x2492e0u;

    // 0x2492e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2492e4: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x2492e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2492e8: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2492E8u;
    {
        const bool branch_taken_0x2492e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492e8) {
            ctx->pc = 0x2491D8u;
            return;
        }
    }
    ctx->pc = 0x2492F0u;
    // 0x2492f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2492f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2492f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2492f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2492f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2492f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2492fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2492fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x249300: 0x3e00008  jr          $ra
    ctx->pc = 0x249300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249308u;
}
