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

// Function: _Bfree
// Address: 0x118dc8 - 0x118df4
void ps2__Bfree_0x118dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Bfree_0x118dc8");
#endif

    ctx->pc = 0x118dc8u;

    // 0x118dc8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x118DC8u;
    {
        const bool branch_taken_0x118dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x118dc8) {
            ctx->pc = 0x118DECu;
            goto label_118dec;
        }
    }
    ctx->pc = 0x118DD0u;
    // 0x118dd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x118dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x118dd4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x118dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x118dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118ddc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x118ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x118de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118de4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x118de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x118de8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x118de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_118dec:
    // 0x118dec: 0x3e00008  jr          $ra
    ctx->pc = 0x118DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DF4u;
}
