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

// Function: Ectrl_02
// Address: 0x24b840 - 0x24b884
void Ectrl_02_0x24b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_02_0x24b840");
#endif

    switch (ctx->pc) {
        case 0x24b840u: goto label_24b840;
        case 0x24b844u: goto label_24b844;
        case 0x24b848u: goto label_24b848;
        case 0x24b84cu: goto label_24b84c;
        case 0x24b850u: goto label_24b850;
        case 0x24b854u: goto label_24b854;
        case 0x24b858u: goto label_24b858;
        case 0x24b85cu: goto label_24b85c;
        case 0x24b860u: goto label_24b860;
        case 0x24b864u: goto label_24b864;
        case 0x24b868u: goto label_24b868;
        case 0x24b86cu: goto label_24b86c;
        case 0x24b870u: goto label_24b870;
        case 0x24b874u: goto label_24b874;
        case 0x24b878u: goto label_24b878;
        case 0x24b87cu: goto label_24b87c;
        case 0x24b880u: goto label_24b880;
        default: break;
    }

    ctx->pc = 0x24b840u;

label_24b840:
    // 0x24b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24b844:
    // 0x24b844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_24b848:
    // 0x24b848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24b84c:
    // 0x24b84c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24b850:
    // 0x24b850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24b854:
    // 0x24b854: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24b858:
    // 0x24b858: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24b85c:
    // 0x24b85c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24b860:
    // 0x24b860: 0x2442b5c8  addiu       $v0, $v0, -0x4A38
    ctx->pc = 0x24b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948296));
label_24b864:
    // 0x24b864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24b868:
    // 0x24b868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b86c:
    // 0x24b86c: 0x40f809  jalr        $v0
label_24b870:
    if (ctx->pc == 0x24B870u) {
        ctx->pc = 0x24B874u;
        goto label_24b874;
    }
    ctx->pc = 0x24B86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B874u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B86Cu, 0x24B874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B874u;
label_24b874:
    // 0x24b874: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24b874u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b878:
    // 0x24b878: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24b87c:
    // 0x24b87c: 0x3e00008  jr          $ra
label_24b880:
    if (ctx->pc == 0x24B880u) {
        ctx->pc = 0x24B884u;
        goto label_fallthrough_0x24b87c;
    }
    ctx->pc = 0x24B87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b87c:
    ctx->pc = 0x24B884u;
}
