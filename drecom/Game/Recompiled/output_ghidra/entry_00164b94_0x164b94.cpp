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

// Function: entry_00164b94
// Address: 0x164b94 - 0x164bac
void entry_00164b94_0x164b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b94_0x164b94");
#endif

    ctx->pc = 0x164b94u;

    // 0x164b94: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x164b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x164b98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164b9c: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x164b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x164ba0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x164ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x164ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x164BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BACu;
}
