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

// Function: entry_0017b20c
// Address: 0x17b20c - 0x17b22c
void entry_0017b20c_0x17b20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b20c_0x17b20c");
#endif

    ctx->pc = 0x17b20cu;

    // 0x17b20c: 0xac25ef00  sw          $a1, -0x1100($at)
    ctx->pc = 0x17b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962944), GPR_U32(ctx, 5));
    // 0x17b210: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x17b210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b220: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17b224: 0x3e00008  jr          $ra
    ctx->pc = 0x17B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B22Cu;
}
