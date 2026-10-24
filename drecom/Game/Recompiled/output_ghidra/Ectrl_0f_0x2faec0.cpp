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

// Function: Ectrl_0f
// Address: 0x2faec0 - 0x2faf04
void Ectrl_0f_0x2faec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0f_0x2faec0");
#endif

    switch (ctx->pc) {
        case 0x2faec0u: goto label_2faec0;
        case 0x2faec4u: goto label_2faec4;
        case 0x2faec8u: goto label_2faec8;
        case 0x2faeccu: goto label_2faecc;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faed8u: goto label_2faed8;
        case 0x2faedcu: goto label_2faedc;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faee4u: goto label_2faee4;
        case 0x2faee8u: goto label_2faee8;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faef0u: goto label_2faef0;
        case 0x2faef4u: goto label_2faef4;
        case 0x2faef8u: goto label_2faef8;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf00u: goto label_2faf00;
        default: break;
    }

    ctx->pc = 0x2faec0u;

label_2faec0:
    // 0x2faec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2faec4:
    // 0x2faec4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2faec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2faec8:
    // 0x2faec8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2faec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2faecc:
    // 0x2faecc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2faeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2faed0:
    // 0x2faed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2faed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2faed4:
    // 0x2faed4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2faed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2faed8:
    // 0x2faed8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2faed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2faedc:
    // 0x2faedc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2faedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2faee0:
    // 0x2faee0: 0x24429020  addiu       $v0, $v0, -0x6FE0
    ctx->pc = 0x2faee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938656));
label_2faee4:
    // 0x2faee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2faee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2faee8:
    // 0x2faee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2faee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2faeec:
    // 0x2faeec: 0x40f809  jalr        $v0
label_2faef0:
    if (ctx->pc == 0x2FAEF0u) {
        ctx->pc = 0x2FAEF4u;
        goto label_2faef4;
    }
    ctx->pc = 0x2FAEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FAEF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAEECu, 0x2FAEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FAEF4u;
label_2faef4:
    // 0x2faef4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2faef4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2faef8:
    // 0x2faef8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2faef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2faefc:
    // 0x2faefc: 0x3e00008  jr          $ra
label_2faf00:
    if (ctx->pc == 0x2FAF00u) {
        ctx->pc = 0x2FAF04u;
        goto label_fallthrough_0x2faefc;
    }
    ctx->pc = 0x2FAEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2faefc:
    ctx->pc = 0x2FAF04u;
}
