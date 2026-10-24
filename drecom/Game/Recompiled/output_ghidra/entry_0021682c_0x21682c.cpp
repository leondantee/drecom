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

// Function: entry_0021682c
// Address: 0x21682c - 0x216850
void entry_0021682c_0x21682c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021682c_0x21682c");
#endif

    switch (ctx->pc) {
        case 0x216834u: goto label_216834;
        default: break;
    }

    ctx->pc = 0x21682cu;

    // 0x21682c: 0xc0858c6  jal         func_216318
    ctx->pc = 0x21682Cu;
    SET_GPR_U32(ctx, 31, 0x216834u);
    ctx->pc = 0x216830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21682Cu;
    // 0x216830: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x21682Cu, 0x216834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216834u;
label_216834:
    // 0x216834: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x216834u;
    {
        const bool branch_taken_0x216834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216834u;
        // 0x216838: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216834) {
            ctx->pc = 0x2168F4u;
            return;
        }
    }
    ctx->pc = 0x21683Cu;
    // 0x21683c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21683Cu;
    {
        const bool branch_taken_0x21683c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21683c) {
            ctx->pc = 0x216850u;
            return;
        }
    }
    ctx->pc = 0x216844u;
    // 0x216844: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216848: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216848u;
    {
        const bool branch_taken_0x216848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216848) {
            ctx->pc = 0x21684Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216848u;
            // 0x21684c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216860u;
            return;
        }
    }
    ctx->pc = 0x216850u;
}
