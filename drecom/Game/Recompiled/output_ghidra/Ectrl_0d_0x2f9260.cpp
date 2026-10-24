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

// Function: Ectrl_0d
// Address: 0x2f9260 - 0x2f92a4
void Ectrl_0d_0x2f9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0d_0x2f9260");
#endif

    switch (ctx->pc) {
        case 0x2f9260u: goto label_2f9260;
        case 0x2f9264u: goto label_2f9264;
        case 0x2f9268u: goto label_2f9268;
        case 0x2f926cu: goto label_2f926c;
        case 0x2f9270u: goto label_2f9270;
        case 0x2f9274u: goto label_2f9274;
        case 0x2f9278u: goto label_2f9278;
        case 0x2f927cu: goto label_2f927c;
        case 0x2f9280u: goto label_2f9280;
        case 0x2f9284u: goto label_2f9284;
        case 0x2f9288u: goto label_2f9288;
        case 0x2f928cu: goto label_2f928c;
        case 0x2f9290u: goto label_2f9290;
        case 0x2f9294u: goto label_2f9294;
        case 0x2f9298u: goto label_2f9298;
        case 0x2f929cu: goto label_2f929c;
        case 0x2f92a0u: goto label_2f92a0;
        default: break;
    }

    ctx->pc = 0x2f9260u;

label_2f9260:
    // 0x2f9260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f9264:
    // 0x2f9264: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f9264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2f9268:
    // 0x2f9268: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2f9268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2f926c:
    // 0x2f926c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f9270:
    // 0x2f9270: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f9274:
    // 0x2f9274: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2f9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f9278:
    // 0x2f9278: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f927c:
    // 0x2f927c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2f9280:
    // 0x2f9280: 0x24428fe0  addiu       $v0, $v0, -0x7020
    ctx->pc = 0x2f9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938592));
label_2f9284:
    // 0x2f9284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f9288:
    // 0x2f9288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f928c:
    // 0x2f928c: 0x40f809  jalr        $v0
label_2f9290:
    if (ctx->pc == 0x2F9290u) {
        ctx->pc = 0x2F9294u;
        goto label_2f9294;
    }
    ctx->pc = 0x2F928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F928Cu, 0x2F9294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9294u;
label_2f9294:
    // 0x2f9294: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f9294u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9298:
    // 0x2f9298: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f9298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f929c:
    // 0x2f929c: 0x3e00008  jr          $ra
label_2f92a0:
    if (ctx->pc == 0x2F92A0u) {
        ctx->pc = 0x2F92A4u;
        goto label_fallthrough_0x2f929c;
    }
    ctx->pc = 0x2F929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f929c:
    ctx->pc = 0x2F92A4u;
}
