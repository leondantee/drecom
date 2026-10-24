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

// Function: caseD_1
// Address: 0x2507dc - 0x25080c
void caseD_1_0x2507dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2507dc");
#endif

    switch (ctx->pc) {
        case 0x2507dcu: goto label_2507dc;
        case 0x2507e0u: goto label_2507e0;
        case 0x2507e4u: goto label_2507e4;
        case 0x2507e8u: goto label_2507e8;
        case 0x2507ecu: goto label_2507ec;
        case 0x2507f0u: goto label_2507f0;
        case 0x2507f4u: goto label_2507f4;
        case 0x2507f8u: goto label_2507f8;
        case 0x2507fcu: goto label_2507fc;
        case 0x250800u: goto label_250800;
        case 0x250804u: goto label_250804;
        case 0x250808u: goto label_250808;
        default: break;
    }

    ctx->pc = 0x2507dcu;

label_2507dc:
    // 0x2507dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2507dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507e0:
    // 0x2507e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507e4:
    // 0x2507e4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2507e8:
    // 0x2507e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2507e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2507ec:
    // 0x2507ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2507f0:
    // 0x2507f0: 0x2442b6c8  addiu       $v0, $v0, -0x4938
    ctx->pc = 0x2507f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948552));
label_2507f4:
    // 0x2507f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2507f8:
    // 0x2507f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2507f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2507fc:
    // 0x2507fc: 0x40f809  jalr        $v0
label_250800:
    if (ctx->pc == 0x250800u) {
        ctx->pc = 0x250804u;
        goto label_250804;
    }
    ctx->pc = 0x2507FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507FCu, 0x250804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250804u;
label_250804:
    // 0x250804: 0x10000053  b           . + 4 + (0x53 << 2)
label_250808:
    if (ctx->pc == 0x250808u) {
        ctx->pc = 0x25080Cu;
        goto label_fallthrough_0x250804;
    }
    ctx->pc = 0x250804u;
    {
        const bool branch_taken_0x250804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250804) {
            ctx->pc = 0x250954u;
            return;
        }
    }
label_fallthrough_0x250804:
    ctx->pc = 0x25080Cu;
}
