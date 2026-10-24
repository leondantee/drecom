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

// Function: entry_00284834
// Address: 0x284834 - 0x2848bc
void entry_00284834_0x284834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284834_0x284834");
#endif

    switch (ctx->pc) {
        case 0x2848b4u: goto label_2848b4;
        default: break;
    }

    ctx->pc = 0x284834u;

    // 0x284834: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x284834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x284838: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x284838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28483c: 0x24635e90  addiu       $v1, $v1, 0x5E90
    ctx->pc = 0x28483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24208));
    // 0x284840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284848: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x284848u;
    {
        const bool branch_taken_0x284848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284848) {
            ctx->pc = 0x2848F0u;
            return;
        }
    }
    ctx->pc = 0x284850u;
    // 0x284850: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x284854: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x284854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x284858: 0x24635e90  addiu       $v1, $v1, 0x5E90
    ctx->pc = 0x284858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24208));
    // 0x28485c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284860: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x284860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x284864: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x284864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28486c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x28486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284870: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x284870u;
    {
        const bool branch_taken_0x284870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284870) {
            ctx->pc = 0x2848F0u;
            return;
        }
    }
    ctx->pc = 0x284878u;
    // 0x284878: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x284878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28487c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x284880: 0x24425e90  addiu       $v0, $v0, 0x5E90
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x284884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284888: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x284888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28488c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284890: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x284890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x284898: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x284898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28489c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2848a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2848a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2848a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2848a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2848ac: 0xc0848cc  jal         func_212330
    ctx->pc = 0x2848ACu;
    SET_GPR_U32(ctx, 31, 0x2848B4u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x2848ACu, 0x2848B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848B4u;
label_2848b4:
    // 0x2848b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2848B4u;
    {
        const bool branch_taken_0x2848b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848b4) {
            ctx->pc = 0x2848F0u;
            return;
        }
    }
    ctx->pc = 0x2848BCu;
}
