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

// Function: par_00_move
// Address: 0x1b18f0 - 0x1b190c
void par_00_move_0x1b18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("par_00_move_0x1b18f0");
#endif

    ctx->pc = 0x1b18f0u;

    // 0x1b18f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b18f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1b18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1b18f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b18fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1b18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1b1900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b1904: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B190Cu;
}
