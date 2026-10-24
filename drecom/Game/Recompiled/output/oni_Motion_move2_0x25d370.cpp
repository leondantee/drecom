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

// Function: oni_Motion_move2
// Address: 0x25d370 - 0x25d398
void oni_Motion_move2_0x25d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("oni_Motion_move2_0x25d370");
#endif

    switch (ctx->pc) {
        case 0x25d388u: goto label_25d388;
        default: break;
    }

    ctx->pc = 0x25d370u;

    // 0x25d370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d374: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25d378: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x25d378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25d37c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d380: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x25D380u;
    SET_GPR_U32(ctx, 31, 0x25D388u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x25D380u, 0x25D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D388u;
label_25d388:
    // 0x25d388: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25d388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d38c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d390: 0x3e00008  jr          $ra
    ctx->pc = 0x25D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D398u;
}
