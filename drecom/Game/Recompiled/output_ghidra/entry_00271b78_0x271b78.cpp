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

// Function: entry_00271b78
// Address: 0x271b78 - 0x271ba4
void entry_00271b78_0x271b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271b78_0x271b78");
#endif

    ctx->pc = 0x271b78u;

    // 0x271b78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x271b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x271b7c: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x271b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x271b80: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x271b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x271b84: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x271B84u;
    {
        const bool branch_taken_0x271b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271b84) {
            ctx->pc = 0x271AACu;
            return;
        }
    }
    ctx->pc = 0x271B8Cu;
    // 0x271b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x271B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BA4u;
}
