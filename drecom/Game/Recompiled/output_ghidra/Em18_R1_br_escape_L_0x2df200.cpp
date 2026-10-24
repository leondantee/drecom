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

// Function: Em18_R1_br_escape_L
// Address: 0x2df200 - 0x2df21c
void Em18_R1_br_escape_L_0x2df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_br_escape_L_0x2df200");
#endif

    ctx->pc = 0x2df200u;

    // 0x2df200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df204: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2df204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2df208: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2df208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df20c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2df20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2df210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2df210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df214: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF21Cu;
}
