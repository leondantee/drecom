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

// Function: ectrl18_init
// Address: 0x358d70 - 0x358d94
void ectrl18_init_0x358d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl18_init_0x358d70");
#endif

    ctx->pc = 0x358d70u;

    // 0x358d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358d74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x358d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x358d78: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x358d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358d7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x358d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x358d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358d84: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x358d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x358d88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x358d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x358d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x358D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358D94u;
}
