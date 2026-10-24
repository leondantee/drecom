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

// Function: caseD_5
// Address: 0x25089c - 0x2508cc
void caseD_5_0x25089c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x25089c");
#endif

    switch (ctx->pc) {
        case 0x25089cu: goto label_25089c;
        case 0x2508a0u: goto label_2508a0;
        case 0x2508a4u: goto label_2508a4;
        case 0x2508a8u: goto label_2508a8;
        case 0x2508acu: goto label_2508ac;
        case 0x2508b0u: goto label_2508b0;
        case 0x2508b4u: goto label_2508b4;
        case 0x2508b8u: goto label_2508b8;
        case 0x2508bcu: goto label_2508bc;
        case 0x2508c0u: goto label_2508c0;
        case 0x2508c4u: goto label_2508c4;
        case 0x2508c8u: goto label_2508c8;
        default: break;
    }

    ctx->pc = 0x25089cu;

label_25089c:
    // 0x25089c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508a0:
    // 0x2508a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2508a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508a4:
    // 0x2508a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2508a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2508a8:
    // 0x2508a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2508a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2508ac:
    // 0x2508ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2508acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2508b0:
    // 0x2508b0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2508b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_2508b4:
    // 0x2508b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2508b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2508b8:
    // 0x2508b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2508bc:
    // 0x2508bc: 0x40f809  jalr        $v0
label_2508c0:
    if (ctx->pc == 0x2508C0u) {
        ctx->pc = 0x2508C4u;
        goto label_2508c4;
    }
    ctx->pc = 0x2508BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2508C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508BCu, 0x2508C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508C4u;
label_2508c4:
    // 0x2508c4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2508c8:
    if (ctx->pc == 0x2508C8u) {
        ctx->pc = 0x2508CCu;
        goto label_fallthrough_0x2508c4;
    }
    ctx->pc = 0x2508C4u;
    {
        const bool branch_taken_0x2508c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508c4) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x2508c4:
    ctx->pc = 0x2508CCu;
}
