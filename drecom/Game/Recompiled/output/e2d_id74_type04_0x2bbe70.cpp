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

// Function: e2d_id74_type04
// Address: 0x2bbe70 - 0x2bbe98
void e2d_id74_type04_0x2bbe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id74_type04_0x2bbe70");
#endif

    switch (ctx->pc) {
        case 0x2bbe88u: goto label_2bbe88;
        default: break;
    }

    ctx->pc = 0x2bbe70u;

    // 0x2bbe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbe74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbe78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbe7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbe80: 0xc0aee3c  jal         func_2BB8F0
    ctx->pc = 0x2BBE80u;
    SET_GPR_U32(ctx, 31, 0x2BBE88u);
    ctx->pc = 0x2BB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB8F0u, 0x2BBE80u, 0x2BBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE88u;
label_2bbe88:
    // 0x2bbe88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbe88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbe8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbe8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbe90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBE98u;
}
