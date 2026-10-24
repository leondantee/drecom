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

// Function: entry_00290d80
// Address: 0x290d80 - 0x290da0
void entry_00290d80_0x290d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290d80_0x290d80");
#endif

    ctx->pc = 0x290d80u;

    // 0x290d80: 0x1e00ffe4  bgtz        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x290D80u;
    {
        const bool branch_taken_0x290d80 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x290d80) {
            ctx->pc = 0x290D14u;
            return;
        }
    }
    ctx->pc = 0x290D88u;
    // 0x290d88: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x290d88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290d94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x290d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d98: 0x3e00008  jr          $ra
    ctx->pc = 0x290D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290DA0u;
}
