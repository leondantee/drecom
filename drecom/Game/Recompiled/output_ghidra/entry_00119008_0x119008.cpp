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

// Function: entry_00119008
// Address: 0x119008 - 0x11902c
void entry_00119008_0x119008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119008_0x119008");
#endif

    switch (ctx->pc) {
        case 0x119024u: goto label_119024;
        default: break;
    }

    ctx->pc = 0x119008u;

label_119008:
    // 0x119008: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x119008u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11900c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119010: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x119014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x119014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x119018: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x11901c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x11901Cu;
    SET_GPR_U32(ctx, 31, 0x119024u);
    ctx->pc = 0x119020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11901Cu;
    // 0x119020: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x11901Cu, 0x119024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119024u;
label_119024:
    // 0x119024: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x119024u;
    {
        const bool branch_taken_0x119024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x119028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119024u;
        // 0x119028: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119024) {
            ctx->pc = 0x119008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119008;
        }
    }
    ctx->pc = 0x11902Cu;
}
