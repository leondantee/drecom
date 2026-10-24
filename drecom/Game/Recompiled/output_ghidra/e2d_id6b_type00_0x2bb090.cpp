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

// Function: e2d_id6b_type00
// Address: 0x2bb090 - 0x2bb0b8
void e2d_id6b_type00_0x2bb090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6b_type00_0x2bb090");
#endif

    switch (ctx->pc) {
        case 0x2bb0a8u: goto label_2bb0a8;
        default: break;
    }

    ctx->pc = 0x2bb090u;

    // 0x2bb090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb094: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb098: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb09c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb0a0: 0xc0aea18  jal         func_2BA860
    ctx->pc = 0x2BB0A0u;
    SET_GPR_U32(ctx, 31, 0x2BB0A8u);
    ctx->pc = 0x2BA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA860u, 0x2BB0A0u, 0x2BB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0A8u;
label_2bb0a8:
    // 0x2bb0a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb0ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0B8u;
}
