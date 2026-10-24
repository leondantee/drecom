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

// Function: Ectrl_0b
// Address: 0x2f8bd0 - 0x2f8c14
void Ectrl_0b_0x2f8bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0b_0x2f8bd0");
#endif

    switch (ctx->pc) {
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8bd4u: goto label_2f8bd4;
        case 0x2f8bd8u: goto label_2f8bd8;
        case 0x2f8bdcu: goto label_2f8bdc;
        case 0x2f8be0u: goto label_2f8be0;
        case 0x2f8be4u: goto label_2f8be4;
        case 0x2f8be8u: goto label_2f8be8;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8bf0u: goto label_2f8bf0;
        case 0x2f8bf4u: goto label_2f8bf4;
        case 0x2f8bf8u: goto label_2f8bf8;
        case 0x2f8bfcu: goto label_2f8bfc;
        case 0x2f8c00u: goto label_2f8c00;
        case 0x2f8c04u: goto label_2f8c04;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8c0cu: goto label_2f8c0c;
        case 0x2f8c10u: goto label_2f8c10;
        default: break;
    }

    ctx->pc = 0x2f8bd0u;

label_2f8bd0:
    // 0x2f8bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f8bd4:
    // 0x2f8bd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f8bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2f8bd8:
    // 0x2f8bd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2f8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2f8bdc:
    // 0x2f8bdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f8be0:
    // 0x2f8be0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f8be4:
    // 0x2f8be4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2f8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f8be8:
    // 0x2f8be8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f8bec:
    // 0x2f8bec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f8becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2f8bf0:
    // 0x2f8bf0: 0x24428fd8  addiu       $v0, $v0, -0x7028
    ctx->pc = 0x2f8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938584));
label_2f8bf4:
    // 0x2f8bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8bf8:
    // 0x2f8bf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8bfc:
    // 0x2f8bfc: 0x40f809  jalr        $v0
label_2f8c00:
    if (ctx->pc == 0x2F8C00u) {
        ctx->pc = 0x2F8C04u;
        goto label_2f8c04;
    }
    ctx->pc = 0x2F8BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8C04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8BFCu, 0x2F8C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8C04u;
label_2f8c04:
    // 0x2f8c04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f8c04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8c08:
    // 0x2f8c08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f8c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f8c0c:
    // 0x2f8c0c: 0x3e00008  jr          $ra
label_2f8c10:
    if (ctx->pc == 0x2F8C10u) {
        ctx->pc = 0x2F8C14u;
        goto label_fallthrough_0x2f8c0c;
    }
    ctx->pc = 0x2F8C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f8c0c:
    ctx->pc = 0x2F8C14u;
}
