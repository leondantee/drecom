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

// Function: entry_00214868
// Address: 0x214868 - 0x214880
void entry_00214868_0x214868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214868_0x214868");
#endif

    switch (ctx->pc) {
        case 0x214868u: goto label_214868;
        case 0x21486cu: goto label_21486c;
        case 0x214870u: goto label_214870;
        case 0x214874u: goto label_214874;
        case 0x214878u: goto label_214878;
        case 0x21487cu: goto label_21487c;
        default: break;
    }

    ctx->pc = 0x214868u;

label_214868:
    // 0x214868: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_21486c:
    if (ctx->pc == 0x21486Cu) {
        ctx->pc = 0x21486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214868u;
        // 0x21486c: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214870u;
        goto label_214870;
    }
    ctx->pc = 0x214868u;
    {
        const bool branch_taken_0x214868 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x21486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214868u;
        // 0x21486c: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214868) {
            ctx->pc = 0x214880u;
            return;
        }
    }
    ctx->pc = 0x214870u;
label_214870:
    // 0x214870: 0x11882f  dsubu       $s1, $zero, $s1
    ctx->pc = 0x214870u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_214874:
    // 0x214874: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214878:
    // 0x214878: 0x40f809  jalr        $v0
label_21487c:
    if (ctx->pc == 0x21487Cu) {
        ctx->pc = 0x21487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214878u;
        // 0x21487c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214880u;
        goto label_fallthrough_0x214878;
    }
    ctx->pc = 0x214878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214880u);
        ctx->pc = 0x21487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214878u;
        // 0x21487c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214878u, 0x214880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x214878:
    ctx->pc = 0x214880u;
}
