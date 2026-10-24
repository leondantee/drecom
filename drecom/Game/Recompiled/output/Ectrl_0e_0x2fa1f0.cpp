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

// Function: Ectrl_0e
// Address: 0x2fa1f0 - 0x2fa234
void Ectrl_0e_0x2fa1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0e_0x2fa1f0");
#endif

    switch (ctx->pc) {
        case 0x2fa1f0u: goto label_2fa1f0;
        case 0x2fa1f4u: goto label_2fa1f4;
        case 0x2fa1f8u: goto label_2fa1f8;
        case 0x2fa1fcu: goto label_2fa1fc;
        case 0x2fa200u: goto label_2fa200;
        case 0x2fa204u: goto label_2fa204;
        case 0x2fa208u: goto label_2fa208;
        case 0x2fa20cu: goto label_2fa20c;
        case 0x2fa210u: goto label_2fa210;
        case 0x2fa214u: goto label_2fa214;
        case 0x2fa218u: goto label_2fa218;
        case 0x2fa21cu: goto label_2fa21c;
        case 0x2fa220u: goto label_2fa220;
        case 0x2fa224u: goto label_2fa224;
        case 0x2fa228u: goto label_2fa228;
        case 0x2fa22cu: goto label_2fa22c;
        case 0x2fa230u: goto label_2fa230;
        default: break;
    }

    ctx->pc = 0x2fa1f0u;

label_2fa1f0:
    // 0x2fa1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fa1f4:
    // 0x2fa1f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fa1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fa1f8:
    // 0x2fa1f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fa1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fa1fc:
    // 0x2fa1fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fa1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fa200:
    // 0x2fa200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fa200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fa204:
    // 0x2fa204: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fa208:
    // 0x2fa208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fa208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fa20c:
    // 0x2fa20c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fa210:
    // 0x2fa210: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x2fa210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
label_2fa214:
    // 0x2fa214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fa218:
    // 0x2fa218: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fa218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa21c:
    // 0x2fa21c: 0x40f809  jalr        $v0
label_2fa220:
    if (ctx->pc == 0x2FA220u) {
        ctx->pc = 0x2FA224u;
        goto label_2fa224;
    }
    ctx->pc = 0x2FA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FA224u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA21Cu, 0x2FA224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA224u;
label_2fa224:
    // 0x2fa224: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fa224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa228:
    // 0x2fa228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fa228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fa22c:
    // 0x2fa22c: 0x3e00008  jr          $ra
label_2fa230:
    if (ctx->pc == 0x2FA230u) {
        ctx->pc = 0x2FA234u;
        goto label_fallthrough_0x2fa22c;
    }
    ctx->pc = 0x2FA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fa22c:
    ctx->pc = 0x2FA234u;
}
