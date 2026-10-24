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

// Function: ectrl17_init
// Address: 0x357f30 - 0x357f54
void ectrl17_init_0x357f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_init_0x357f30");
#endif

    ctx->pc = 0x357f30u;

    // 0x357f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357f34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x357f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x357f38: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x357f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357f3c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x357f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x357f40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x357f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357f44: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x357f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x357f48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x357f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x357f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x357F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F54u;
}
