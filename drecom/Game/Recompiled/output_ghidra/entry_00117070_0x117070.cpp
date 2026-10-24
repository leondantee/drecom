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

// Function: entry_00117070
// Address: 0x117070 - 0x117098
void entry_00117070_0x117070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117070_0x117070");
#endif

    switch (ctx->pc) {
        case 0x117070u: goto label_117070;
        case 0x117074u: goto label_117074;
        case 0x117078u: goto label_117078;
        case 0x11707cu: goto label_11707c;
        case 0x117080u: goto label_117080;
        case 0x117084u: goto label_117084;
        case 0x117088u: goto label_117088;
        case 0x11708cu: goto label_11708c;
        case 0x117090u: goto label_117090;
        case 0x117094u: goto label_117094;
        default: break;
    }

    ctx->pc = 0x117070u;

label_117070:
    // 0x117070: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x117070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_117074:
    // 0x117074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117078:
    // 0x117078: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x117078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_11707c:
    // 0x11707c: 0x40f809  jalr        $v0
label_117080:
    if (ctx->pc == 0x117080u) {
        ctx->pc = 0x117080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11707Cu;
        // 0x117080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117084u;
        goto label_117084;
    }
    ctx->pc = 0x11707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117084u);
        ctx->pc = 0x117080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11707Cu;
        // 0x117080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11707Cu, 0x117084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117084u;
label_117084:
    // 0x117084: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117088:
    // 0x117088: 0x1860ffec  blez        $v1, . + 4 + (-0x14 << 2)
label_11708c:
    if (ctx->pc == 0x11708Cu) {
        ctx->pc = 0x11708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117088u;
        // 0x11708c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117090u;
        goto label_117090;
    }
    ctx->pc = 0x117088u;
    {
        const bool branch_taken_0x117088 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117088u;
        // 0x11708c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117088) {
            ctx->pc = 0x11703Cu;
            return;
        }
    }
    ctx->pc = 0x117090u;
label_117090:
    // 0x117090: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_117094:
    if (ctx->pc == 0x117094u) {
        ctx->pc = 0x117094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117090u;
        // 0x117094: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117098u;
        goto label_fallthrough_0x117090;
    }
    ctx->pc = 0x117090u;
    {
        const bool branch_taken_0x117090 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x117094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117090u;
        // 0x117094: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117090) {
            ctx->pc = 0x117070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117070;
        }
    }
label_fallthrough_0x117090:
    ctx->pc = 0x117098u;
}
