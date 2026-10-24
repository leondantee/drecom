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

// Function: entry_00283320
// Address: 0x283320 - 0x28333c
void entry_00283320_0x283320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283320_0x283320");
#endif

    ctx->pc = 0x283320u;

    // 0x283320: 0x1200ffd5  beqz        $s0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x283320) {
            ctx->pc = 0x283278u;
            return;
        }
    }
    ctx->pc = 0x283328u;
    // 0x283328: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x283328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x283330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x283334: 0x3e00008  jr          $ra
    ctx->pc = 0x283334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28333Cu;
}
