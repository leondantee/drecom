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

// Function: caseD_2
// Address: 0x25080c - 0x25083c
void caseD_2_0x25080c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x25080c");
#endif

    switch (ctx->pc) {
        case 0x25080cu: goto label_25080c;
        case 0x250810u: goto label_250810;
        case 0x250814u: goto label_250814;
        case 0x250818u: goto label_250818;
        case 0x25081cu: goto label_25081c;
        case 0x250820u: goto label_250820;
        case 0x250824u: goto label_250824;
        case 0x250828u: goto label_250828;
        case 0x25082cu: goto label_25082c;
        case 0x250830u: goto label_250830;
        case 0x250834u: goto label_250834;
        case 0x250838u: goto label_250838;
        default: break;
    }

    ctx->pc = 0x25080cu;

label_25080c:
    // 0x25080c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250810:
    // 0x250810: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250814:
    // 0x250814: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250818:
    // 0x250818: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25081c:
    // 0x25081c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250820:
    // 0x250820: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x250820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
label_250824:
    // 0x250824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250828:
    // 0x250828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25082c:
    // 0x25082c: 0x40f809  jalr        $v0
label_250830:
    if (ctx->pc == 0x250830u) {
        ctx->pc = 0x250834u;
        goto label_250834;
    }
    ctx->pc = 0x25082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25082Cu, 0x250834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250834u;
label_250834:
    // 0x250834: 0x10000047  b           . + 4 + (0x47 << 2)
label_250838:
    if (ctx->pc == 0x250838u) {
        ctx->pc = 0x25083Cu;
        goto label_fallthrough_0x250834;
    }
    ctx->pc = 0x250834u;
    {
        const bool branch_taken_0x250834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250834) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x250834:
    ctx->pc = 0x25083Cu;
}
