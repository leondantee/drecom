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

// Function: Sce_program_call
// Address: 0x2847d0 - 0x284908
void Sce_program_call_0x2847d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_program_call_0x2847d0");
#endif

    switch (ctx->pc) {
        case 0x2848b4u: goto label_2848b4;
        case 0x2848c8u: goto label_2848c8;
        case 0x2848dcu: goto label_2848dc;
        case 0x2848f0u: goto label_2848f0;
        default: break;
    }

    ctx->pc = 0x2847d0u;

    // 0x2847d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2847d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2847d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2847d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2847d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2847d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2847dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2847dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2847e0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2847e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2847e4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2847e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2847e8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x2847e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x2847ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2847ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2847f0: 0x8c300068  lw          $s0, 0x68($at)
    ctx->pc = 0x2847f0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0068u));
    // 0x2847f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2847f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2847f8: 0x8c31006c  lw          $s1, 0x6C($at)
    ctx->pc = 0x2847f8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x2847fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2847fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x284800: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x284800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284804: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x284804u;
    {
        const bool branch_taken_0x284804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x284804) {
            ctx->pc = 0x2848E4u;
            goto label_2848e4;
        }
    }
    ctx->pc = 0x28480Cu;
    // 0x28480c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284810: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x284810u;
    {
        const bool branch_taken_0x284810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x284810) {
            ctx->pc = 0x2848D0u;
            goto label_2848d0;
        }
    }
    ctx->pc = 0x284818u;
    // 0x284818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28481c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x28481Cu;
    {
        const bool branch_taken_0x28481c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28481c) {
            ctx->pc = 0x2848BCu;
            goto label_2848bc;
        }
    }
    ctx->pc = 0x284824u;
    // 0x284824: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284824u;
    {
        const bool branch_taken_0x284824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284824) {
            ctx->pc = 0x284834u;
            goto label_284834;
        }
    }
    ctx->pc = 0x28482Cu;
    // 0x28482c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28482Cu;
    {
        const bool branch_taken_0x28482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28482c) {
            ctx->pc = 0x2848F0u;
            goto label_2848f0;
        }
    }
    ctx->pc = 0x284834u;
label_284834:
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
            goto label_2848f0;
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
            goto label_2848f0;
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
            goto label_2848f0;
        }
    }
    ctx->pc = 0x2848BCu;
label_2848bc:
    // 0x2848bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848c0: 0xc084900  jal         func_212400
    ctx->pc = 0x2848C0u;
    SET_GPR_U32(ctx, 31, 0x2848C8u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x2848C0u, 0x2848C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848C8u;
label_2848c8:
    // 0x2848c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2848C8u;
    {
        const bool branch_taken_0x2848c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848c8) {
            ctx->pc = 0x2848F0u;
            goto label_2848f0;
        }
    }
    ctx->pc = 0x2848D0u;
label_2848d0:
    // 0x2848d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848d4: 0xc084944  jal         func_212510
    ctx->pc = 0x2848D4u;
    SET_GPR_U32(ctx, 31, 0x2848DCu);
    ctx->pc = 0x212510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212510u, 0x2848D4u, 0x2848DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848DCu;
label_2848dc:
    // 0x2848dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2848DCu;
    {
        const bool branch_taken_0x2848dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2848dc) {
            ctx->pc = 0x2848F0u;
            goto label_2848f0;
        }
    }
    ctx->pc = 0x2848E4u;
label_2848e4:
    // 0x2848e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848e8: 0xc084954  jal         func_212550
    ctx->pc = 0x2848E8u;
    SET_GPR_U32(ctx, 31, 0x2848F0u);
    ctx->pc = 0x212550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212550u, 0x2848E8u, 0x2848F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848F0u;
label_2848f0:
    // 0x2848f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2848f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2848f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2848f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2848f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2848f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2848fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2848fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x284900: 0x3e00008  jr          $ra
    ctx->pc = 0x284900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284908u;
}
