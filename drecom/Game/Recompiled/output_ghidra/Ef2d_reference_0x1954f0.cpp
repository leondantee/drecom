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

// Function: Ef2d_reference
// Address: 0x1954f0 - 0x1955f4
void Ef2d_reference_0x1954f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ef2d_reference_0x1954f0");
#endif

    switch (ctx->pc) {
        case 0x195520u: goto label_195520;
        default: break;
    }

    ctx->pc = 0x1954f0u;

    // 0x1954f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1954f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1954f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1954f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1954f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1954f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1954fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1954fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195500: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195504: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195508: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19550c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x195510: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x195510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x195514: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A668u));
    // 0x195518: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195518u;
    {
        const bool branch_taken_0x195518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195518) {
            ctx->pc = 0x1955D0u;
            goto label_1955d0;
        }
    }
    ctx->pc = 0x195520u;
label_195520:
    // 0x195520: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x195524: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195528: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195528u;
    {
        const bool branch_taken_0x195528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195528) {
            ctx->pc = 0x195540u;
            goto label_195540;
        }
    }
    ctx->pc = 0x195530u;
    // 0x195530: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195534: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195538: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x195538u;
    {
        const bool branch_taken_0x195538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195538) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x195540u;
label_195540:
    // 0x195540: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x195544: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195548: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195548u;
    {
        const bool branch_taken_0x195548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195548) {
            ctx->pc = 0x195560u;
            goto label_195560;
        }
    }
    ctx->pc = 0x195550u;
    // 0x195550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195554: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195558: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x195558u;
    {
        const bool branch_taken_0x195558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195558) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x195560u;
label_195560:
    // 0x195560: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x195560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x195564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195568: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19556c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19556Cu;
    {
        const bool branch_taken_0x19556c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19556c) {
            ctx->pc = 0x195588u;
            goto label_195588;
        }
    }
    ctx->pc = 0x195574u;
    // 0x195574: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195578: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19557c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19557Cu;
    {
        const bool branch_taken_0x19557c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19557c) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x195584u;
    // 0x195584: 0x0  nop
    ctx->pc = 0x195584u;
    // NOP
label_195588:
    // 0x195588: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x19558c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195590: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195590u;
    {
        const bool branch_taken_0x195590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195590) {
            ctx->pc = 0x1955A8u;
            goto label_1955a8;
        }
    }
    ctx->pc = 0x195598u;
    // 0x195598: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19559c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1955a0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1955A0u;
    {
        const bool branch_taken_0x1955a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1955a0) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x1955A8u;
label_1955a8:
    // 0x1955a8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1955ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1955acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1955b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1955B0u;
    {
        const bool branch_taken_0x1955b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955b0) {
            ctx->pc = 0x1955C4u;
            goto label_1955c4;
        }
    }
    ctx->pc = 0x1955B8u;
    // 0x1955b8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1955b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1955bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1955BCu;
    {
        const bool branch_taken_0x1955bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955bc) {
            ctx->pc = 0x1955E0u;
            goto label_1955e0;
        }
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x1955c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1955c8: 0x0  nop
    ctx->pc = 0x1955c8u;
    // NOP
    // 0x1955cc: 0x0  nop
    ctx->pc = 0x1955ccu;
    // NOP
label_1955d0:
    // 0x1955d0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1955D0u;
    {
        const bool branch_taken_0x1955d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955d0) {
            ctx->pc = 0x195520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195520;
        }
    }
    ctx->pc = 0x1955D8u;
    // 0x1955d8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1955dc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_1955e0:
    // 0x1955e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1955e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1955e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1955e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1955e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1955ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1955ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1955F4u;
}
