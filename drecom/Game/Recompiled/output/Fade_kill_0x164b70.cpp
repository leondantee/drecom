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

// Function: Fade_kill
// Address: 0x164b70 - 0x164bac
void Fade_kill_0x164b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fade_kill_0x164b70");
#endif

    ctx->pc = 0x164b70u;

    // 0x164b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164b74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x164b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x164b78: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x164b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164b7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x164b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x164b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164b84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164b88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164b8c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x164b90: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
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
