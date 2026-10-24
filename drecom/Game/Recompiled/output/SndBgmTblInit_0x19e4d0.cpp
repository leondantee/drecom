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

// Function: SndBgmTblInit
// Address: 0x19e4d0 - 0x19e4e8
void SndBgmTblInit_0x19e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmTblInit_0x19e4d0");
#endif

    ctx->pc = 0x19e4d0u;

    // 0x19e4d0: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19e4d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19e4d8: 0x8c237e44  lw          $v1, 0x7E44($at)
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387E44u));
    // 0x19e4dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x19e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x19e4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E4E8u;
}
