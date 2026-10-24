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

// Function: entry_0027b328
// Address: 0x27b328 - 0x27b348
void entry_0027b328_0x27b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b328_0x27b328");
#endif

    ctx->pc = 0x27b328u;

    // 0x27b328: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x27b328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x27b32c: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x27B32Cu;
    {
        const bool branch_taken_0x27b32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b32c) {
            ctx->pc = 0x27B178u;
            return;
        }
    }
    ctx->pc = 0x27B334u;
    // 0x27b334: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27b334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b33c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27b340: 0x3e00008  jr          $ra
    ctx->pc = 0x27B340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B348u;
}
