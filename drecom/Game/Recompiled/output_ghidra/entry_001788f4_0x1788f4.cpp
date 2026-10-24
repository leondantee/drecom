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

// Function: entry_001788f4
// Address: 0x1788f4 - 0x178918
void entry_001788f4_0x1788f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788f4_0x1788f4");
#endif

    ctx->pc = 0x1788f4u;

    // 0x1788f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1788f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1788f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1788f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1788fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1788fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x178900: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x178900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x178904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17890c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178910: 0x3e00008  jr          $ra
    ctx->pc = 0x178910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178918u;
}
