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

// Function: entry_00216a14
// Address: 0x216a14 - 0x216a38
void entry_00216a14_0x216a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216a14_0x216a14");
#endif

    switch (ctx->pc) {
        case 0x216a1cu: goto label_216a1c;
        default: break;
    }

    ctx->pc = 0x216a14u;

    // 0x216a14: 0xc0858c6  jal         func_216318
    ctx->pc = 0x216A14u;
    SET_GPR_U32(ctx, 31, 0x216A1Cu);
    ctx->pc = 0x216A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A14u;
    // 0x216a18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x216A14u, 0x216A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A1Cu;
label_216a1c:
    // 0x216a1c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x216A1Cu;
    {
        const bool branch_taken_0x216a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A1Cu;
        // 0x216a20: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a1c) {
            ctx->pc = 0x216B34u;
            return;
        }
    }
    ctx->pc = 0x216A24u;
    // 0x216a24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216A24u;
    {
        const bool branch_taken_0x216a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a24) {
            ctx->pc = 0x216A38u;
            return;
        }
    }
    ctx->pc = 0x216A2Cu;
    // 0x216a2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216a30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216A30u;
    {
        const bool branch_taken_0x216a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A30u;
        // 0x216a34: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a30) {
            ctx->pc = 0x216A48u;
            return;
        }
    }
    ctx->pc = 0x216A38u;
}
