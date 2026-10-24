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

// Function: entry_002133f0
// Address: 0x2133f0 - 0x21340c
void entry_002133f0_0x2133f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002133f0_0x2133f0");
#endif

    ctx->pc = 0x2133f0u;

    // 0x2133f0: 0xf  sync
    ctx->pc = 0x2133f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2133f4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2133f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2133f8: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x2133f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2133fc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2133FCu;
    {
        const bool branch_taken_0x2133fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2133fc) {
            ctx->pc = 0x213378u;
            return;
        }
    }
    ctx->pc = 0x213404u;
    // 0x213404: 0x3e00008  jr          $ra
    ctx->pc = 0x213404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21340Cu;
}
