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

// Function: Ectrl_10
// Address: 0x2fcf80 - 0x2fcfc4
void Ectrl_10_0x2fcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_10_0x2fcf80");
#endif

    switch (ctx->pc) {
        case 0x2fcf80u: goto label_2fcf80;
        case 0x2fcf84u: goto label_2fcf84;
        case 0x2fcf88u: goto label_2fcf88;
        case 0x2fcf8cu: goto label_2fcf8c;
        case 0x2fcf90u: goto label_2fcf90;
        case 0x2fcf94u: goto label_2fcf94;
        case 0x2fcf98u: goto label_2fcf98;
        case 0x2fcf9cu: goto label_2fcf9c;
        case 0x2fcfa0u: goto label_2fcfa0;
        case 0x2fcfa4u: goto label_2fcfa4;
        case 0x2fcfa8u: goto label_2fcfa8;
        case 0x2fcfacu: goto label_2fcfac;
        case 0x2fcfb0u: goto label_2fcfb0;
        case 0x2fcfb4u: goto label_2fcfb4;
        case 0x2fcfb8u: goto label_2fcfb8;
        case 0x2fcfbcu: goto label_2fcfbc;
        case 0x2fcfc0u: goto label_2fcfc0;
        default: break;
    }

    ctx->pc = 0x2fcf80u;

label_2fcf80:
    // 0x2fcf80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fcf84:
    // 0x2fcf84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fcf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fcf88:
    // 0x2fcf88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fcf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fcf8c:
    // 0x2fcf8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fcf90:
    // 0x2fcf90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fcf94:
    // 0x2fcf94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fcf98:
    // 0x2fcf98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fcf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fcf9c:
    // 0x2fcf9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fcfa0:
    // 0x2fcfa0: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x2fcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
label_2fcfa4:
    // 0x2fcfa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fcfa8:
    // 0x2fcfa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fcfac:
    // 0x2fcfac: 0x40f809  jalr        $v0
label_2fcfb0:
    if (ctx->pc == 0x2FCFB0u) {
        ctx->pc = 0x2FCFB4u;
        goto label_2fcfb4;
    }
    ctx->pc = 0x2FCFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FCFB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFACu, 0x2FCFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FCFB4u;
label_2fcfb4:
    // 0x2fcfb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fcfb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcfb8:
    // 0x2fcfb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fcfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fcfbc:
    // 0x2fcfbc: 0x3e00008  jr          $ra
label_2fcfc0:
    if (ctx->pc == 0x2FCFC0u) {
        ctx->pc = 0x2FCFC4u;
        goto label_fallthrough_0x2fcfbc;
    }
    ctx->pc = 0x2FCFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fcfbc:
    ctx->pc = 0x2FCFC4u;
}
