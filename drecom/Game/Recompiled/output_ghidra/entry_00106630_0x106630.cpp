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

// Function: entry_00106630
// Address: 0x106630 - 0x10665c
void entry_00106630_0x106630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106630_0x106630");
#endif

    switch (ctx->pc) {
        case 0x106650u: goto label_106650;
        default: break;
    }

    ctx->pc = 0x106630u;

    // 0x106630: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x106630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x106634: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106638: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x106638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x10663c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10663Cu;
    {
        const bool branch_taken_0x10663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10663Cu;
        // 0x106640: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10663c) {
            ctx->pc = 0x10665Cu;
            return;
        }
    }
    ctx->pc = 0x106644u;
    // 0x106644: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x106644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x106648: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106648u;
    SET_GPR_U32(ctx, 31, 0x106650u);
    ctx->pc = 0x10664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106648u;
    // 0x10664c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106648u, 0x106650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106650u;
label_106650:
    // 0x106650: 0xae023e40  sw          $v0, 0x3E40($s0)
    ctx->pc = 0x106650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15936), GPR_U32(ctx, 2));
    // 0x106654: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106658: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x106658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    ctx->pc = 0x10665cu;
}
