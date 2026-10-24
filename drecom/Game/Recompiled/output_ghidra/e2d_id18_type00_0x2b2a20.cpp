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

// Function: e2d_id18_type00
// Address: 0x2b2a20 - 0x2b2a48
void e2d_id18_type00_0x2b2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id18_type00_0x2b2a20");
#endif

    switch (ctx->pc) {
        case 0x2b2a38u: goto label_2b2a38;
        default: break;
    }

    ctx->pc = 0x2b2a20u;

    // 0x2b2a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2a24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2a28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b2a2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2a30: 0xc0aaba0  jal         func_2AAE80
    ctx->pc = 0x2B2A30u;
    SET_GPR_U32(ctx, 31, 0x2B2A38u);
    ctx->pc = 0x2AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE80u, 0x2B2A30u, 0x2B2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A38u;
label_2b2a38:
    // 0x2b2a38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2a38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A48u;
}
