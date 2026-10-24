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

// Function: caseD_3
// Address: 0x25083c - 0x25086c
void caseD_3_0x25083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x25083c");
#endif

    switch (ctx->pc) {
        case 0x25083cu: goto label_25083c;
        case 0x250840u: goto label_250840;
        case 0x250844u: goto label_250844;
        case 0x250848u: goto label_250848;
        case 0x25084cu: goto label_25084c;
        case 0x250850u: goto label_250850;
        case 0x250854u: goto label_250854;
        case 0x250858u: goto label_250858;
        case 0x25085cu: goto label_25085c;
        case 0x250860u: goto label_250860;
        case 0x250864u: goto label_250864;
        case 0x250868u: goto label_250868;
        default: break;
    }

    ctx->pc = 0x25083cu;

label_25083c:
    // 0x25083c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250840:
    // 0x250840: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250844:
    // 0x250844: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250848:
    // 0x250848: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25084c:
    // 0x25084c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250850:
    // 0x250850: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250854:
    // 0x250854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250858:
    // 0x250858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25085c:
    // 0x25085c: 0x40f809  jalr        $v0
label_250860:
    if (ctx->pc == 0x250860u) {
        ctx->pc = 0x250864u;
        goto label_250864;
    }
    ctx->pc = 0x25085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25085Cu, 0x250864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250864u;
label_250864:
    // 0x250864: 0x1000003b  b           . + 4 + (0x3B << 2)
label_250868:
    if (ctx->pc == 0x250868u) {
        ctx->pc = 0x25086Cu;
        goto label_fallthrough_0x250864;
    }
    ctx->pc = 0x250864u;
    {
        const bool branch_taken_0x250864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250864) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x250864:
    ctx->pc = 0x25086Cu;
}
