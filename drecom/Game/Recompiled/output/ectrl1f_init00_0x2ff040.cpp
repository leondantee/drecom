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

// Function: ectrl1f_init00
// Address: 0x2ff040 - 0x2ff064
void ectrl1f_init00_0x2ff040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1f_init00_0x2ff040");
#endif

    ctx->pc = 0x2ff040u;

    // 0x2ff040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff044: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ff044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ff048: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2ff048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff04c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ff04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ff050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ff050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ff054: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ff054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ff058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ff058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ff05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF064u;
}
