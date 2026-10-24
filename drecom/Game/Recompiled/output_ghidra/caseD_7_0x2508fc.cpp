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

// Function: caseD_7
// Address: 0x2508fc - 0x25092c
void caseD_7_0x2508fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2508fc");
#endif

    switch (ctx->pc) {
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        default: break;
    }

    ctx->pc = 0x2508fcu;

label_2508fc:
    // 0x2508fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250900:
    // 0x250900: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250904:
    // 0x250904: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250908:
    // 0x250908: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25090c:
    // 0x25090c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250910:
    // 0x250910: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250914:
    // 0x250914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250918:
    // 0x250918: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25091c:
    // 0x25091c: 0x40f809  jalr        $v0
label_250920:
    if (ctx->pc == 0x250920u) {
        ctx->pc = 0x250924u;
        goto label_250924;
    }
    ctx->pc = 0x25091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25091Cu, 0x250924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250924u;
label_250924:
    // 0x250924: 0x1000000b  b           . + 4 + (0xB << 2)
label_250928:
    if (ctx->pc == 0x250928u) {
        ctx->pc = 0x25092Cu;
        goto label_fallthrough_0x250924;
    }
    ctx->pc = 0x250924u;
    {
        const bool branch_taken_0x250924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250924) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x250924:
    ctx->pc = 0x25092Cu;
}
