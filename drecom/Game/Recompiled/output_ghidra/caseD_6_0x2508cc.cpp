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

// Function: caseD_6
// Address: 0x2508cc - 0x2508fc
void caseD_6_0x2508cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2508cc");
#endif

    switch (ctx->pc) {
        case 0x2508ccu: goto label_2508cc;
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        default: break;
    }

    ctx->pc = 0x2508ccu;

label_2508cc:
    // 0x2508cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2508ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508d0:
    // 0x2508d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2508d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508d4:
    // 0x2508d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2508d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2508d8:
    // 0x2508d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2508dc:
    // 0x2508dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2508e0:
    // 0x2508e0: 0x2442b6e8  addiu       $v0, $v0, -0x4918
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948584));
label_2508e4:
    // 0x2508e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2508e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2508e8:
    // 0x2508e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2508ec:
    // 0x2508ec: 0x40f809  jalr        $v0
label_2508f0:
    if (ctx->pc == 0x2508F0u) {
        ctx->pc = 0x2508F4u;
        goto label_2508f4;
    }
    ctx->pc = 0x2508ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2508F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508ECu, 0x2508F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508F4u;
label_2508f4:
    // 0x2508f4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2508f8:
    if (ctx->pc == 0x2508F8u) {
        ctx->pc = 0x2508FCu;
        goto label_fallthrough_0x2508f4;
    }
    ctx->pc = 0x2508F4u;
    {
        const bool branch_taken_0x2508f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508f4) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x2508f4:
    ctx->pc = 0x2508FCu;
}
