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

// Function: entry_00141b80
// Address: 0x141b80 - 0x141ba0
void entry_00141b80_0x141b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b80_0x141b80");
#endif

    ctx->pc = 0x141b80u;

    // 0x141b80: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x141b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x141b84: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x141B84u;
    {
        const bool branch_taken_0x141b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b84) {
            ctx->pc = 0x141B48u;
            return;
        }
    }
    ctx->pc = 0x141B8Cu;
    // 0x141b8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x141b8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141b98: 0x3e00008  jr          $ra
    ctx->pc = 0x141B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BA0u;
}
