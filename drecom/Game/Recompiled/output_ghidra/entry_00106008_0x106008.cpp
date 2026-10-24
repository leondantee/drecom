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

// Function: entry_00106008
// Address: 0x106008 - 0x106040
void entry_00106008_0x106008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106008_0x106008");
#endif

    switch (ctx->pc) {
        case 0x10603cu: goto label_10603c;
        default: break;
    }

    ctx->pc = 0x106008u;

label_106008:
    // 0x106008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10600c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x106010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106014: 0x0  nop
    ctx->pc = 0x106014u;
    // NOP
    // 0x106018: 0x0  nop
    ctx->pc = 0x106018u;
    // NOP
    // 0x10601c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10601Cu;
    {
        const bool branch_taken_0x10601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10601c) {
            ctx->pc = 0x106008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106008;
        }
    }
    ctx->pc = 0x106024u;
    // 0x106024: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x106028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106024u;
        // 0x106028: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106024) {
            ctx->pc = 0x106040u;
            return;
        }
    }
    ctx->pc = 0x10602Cu;
    // 0x10602c: 0x26a241f8  addiu       $v0, $s5, 0x41F8
    ctx->pc = 0x10602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    // 0x106030: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x106030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x106034: 0xc0412c6  jal         func_104B18
    ctx->pc = 0x106034u;
    SET_GPR_U32(ctx, 31, 0x10603Cu);
    ctx->pc = 0x106038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106034u;
    // 0x106038: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B18u, 0x106034u, 0x10603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10603Cu;
label_10603c:
    // 0x10603c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x10603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x106040u;
}
