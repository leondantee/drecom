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

// Function: e2d_id74_type00
// Address: 0x2bbdb0 - 0x2bbdd8
void e2d_id74_type00_0x2bbdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id74_type00_0x2bbdb0");
#endif

    switch (ctx->pc) {
        case 0x2bbdc8u: goto label_2bbdc8;
        default: break;
    }

    ctx->pc = 0x2bbdb0u;

    // 0x2bbdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbdb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbdb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbdbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbdc0: 0xc0aed4c  jal         func_2BB530
    ctx->pc = 0x2BBDC0u;
    SET_GPR_U32(ctx, 31, 0x2BBDC8u);
    ctx->pc = 0x2BB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB530u, 0x2BBDC0u, 0x2BBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDC8u;
label_2bbdc8:
    // 0x2bbdc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbdc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbdcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBDD8u;
}
