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

// Function: Ectrl_reference
// Address: 0x195800 - 0x195904
void Ectrl_reference_0x195800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_reference_0x195800");
#endif

    switch (ctx->pc) {
        case 0x195830u: goto label_195830;
        default: break;
    }

    ctx->pc = 0x195800u;

    // 0x195800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19580c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195810: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195814: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195818: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19581c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19581cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x195820: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x195820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x195824: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A6A8u));
    // 0x195828: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195828u;
    {
        const bool branch_taken_0x195828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195828) {
            ctx->pc = 0x1958E0u;
            goto label_1958e0;
        }
    }
    ctx->pc = 0x195830u;
label_195830:
    // 0x195830: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195834: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195838: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195838u;
    {
        const bool branch_taken_0x195838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195838) {
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x195840u;
    // 0x195840: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195844: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195848: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x195848u;
    {
        const bool branch_taken_0x195848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195848) {
            ctx->pc = 0x1958D4u;
            goto label_1958d4;
        }
    }
    ctx->pc = 0x195850u;
label_195850:
    // 0x195850: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195858: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195858u;
    {
        const bool branch_taken_0x195858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195858) {
            ctx->pc = 0x195870u;
            goto label_195870;
        }
    }
    ctx->pc = 0x195860u;
    // 0x195860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195864: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195868: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x195868u;
    {
        const bool branch_taken_0x195868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195868) {
            ctx->pc = 0x1958D4u;
            goto label_1958d4;
        }
    }
    ctx->pc = 0x195870u;
label_195870:
    // 0x195870: 0x920200e2  lbu         $v0, 0xE2($s0)
    ctx->pc = 0x195870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195874: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x195878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19587c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19587Cu;
    {
        const bool branch_taken_0x19587c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19587c) {
            ctx->pc = 0x195898u;
            goto label_195898;
        }
    }
    ctx->pc = 0x195884u;
    // 0x195884: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195888: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19588c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19588Cu;
    {
        const bool branch_taken_0x19588c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19588c) {
            ctx->pc = 0x1958D4u;
            goto label_1958d4;
        }
    }
    ctx->pc = 0x195894u;
    // 0x195894: 0x0  nop
    ctx->pc = 0x195894u;
    // NOP
label_195898:
    // 0x195898: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x19589c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1958a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1958A0u;
    {
        const bool branch_taken_0x1958a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1958a0) {
            ctx->pc = 0x1958B8u;
            goto label_1958b8;
        }
    }
    ctx->pc = 0x1958A8u;
    // 0x1958a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1958ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1958b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1958B0u;
    {
        const bool branch_taken_0x1958b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1958b0) {
            ctx->pc = 0x1958D4u;
            goto label_1958d4;
        }
    }
    ctx->pc = 0x1958B8u;
label_1958b8:
    // 0x1958b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1958bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1958bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1958c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958D4u;
            goto label_1958d4;
        }
    }
    ctx->pc = 0x1958C8u;
    // 0x1958c8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1958c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1958cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1958CCu;
    {
        const bool branch_taken_0x1958cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958cc) {
            ctx->pc = 0x1958F0u;
            goto label_1958f0;
        }
    }
    ctx->pc = 0x1958D4u;
label_1958d4:
    // 0x1958d4: 0x8e1000e8  lw          $s0, 0xE8($s0)
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1958d8: 0x0  nop
    ctx->pc = 0x1958d8u;
    // NOP
    // 0x1958dc: 0x0  nop
    ctx->pc = 0x1958dcu;
    // NOP
label_1958e0:
    // 0x1958e0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1958E0u;
    {
        const bool branch_taken_0x1958e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958e0) {
            ctx->pc = 0x195830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195830;
        }
    }
    ctx->pc = 0x1958E8u;
    // 0x1958e8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1958e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1958ec: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1958ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
label_1958f0:
    // 0x1958f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1958f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1958f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1958f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1958f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1958f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1958fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1958FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195904u;
}
