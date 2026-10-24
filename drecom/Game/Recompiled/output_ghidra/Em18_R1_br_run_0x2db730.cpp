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

// Function: Em18_R1_br_run
// Address: 0x2db730 - 0x2db8e4
void Em18_R1_br_run_0x2db730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_br_run_0x2db730");
#endif

    switch (ctx->pc) {
        case 0x2db778u: goto label_2db778;
        case 0x2db838u: goto label_2db838;
        case 0x2db888u: goto label_2db888;
        default: break;
    }

    ctx->pc = 0x2db730u;

    // 0x2db730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db734: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2db734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2db738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db73c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2db73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2db740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db744: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2db744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2db748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db74c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2db74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db750: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2db750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2db754: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db75c: 0x0  nop
    ctx->pc = 0x2db75cu;
    // NOP
    // 0x2db760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db764: 0x0  nop
    ctx->pc = 0x2db764u;
    // NOP
    // 0x2db768: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB768u;
    {
        const bool branch_taken_0x2db768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db768) {
            ctx->pc = 0x2DB7F8u;
            goto label_2db7f8;
        }
    }
    ctx->pc = 0x2DB770u;
    // 0x2db770: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB770u;
    SET_GPR_U32(ctx, 31, 0x2DB778u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB770u, 0x2DB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB778u;
label_2db778:
    // 0x2db778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db77c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db780: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB780u;
    {
        const bool branch_taken_0x2db780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db780) {
            ctx->pc = 0x2DB7C0u;
            goto label_2db7c0;
        }
    }
    ctx->pc = 0x2DB788u;
    // 0x2db788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db78c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db790: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db79c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db79cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db7a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db7a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db7b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db7b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB7B8u;
    {
        const bool branch_taken_0x2db7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db7b8) {
            ctx->pc = 0x2DB7F0u;
            goto label_2db7f0;
        }
    }
    ctx->pc = 0x2DB7C0u;
label_2db7c0:
    // 0x2db7c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db7c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db7cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2db7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2db7d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db7d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db7e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2db7f0:
    // 0x2db7f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB7F0u;
    {
        const bool branch_taken_0x2db7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db7f0) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB7F8u;
label_2db7f8:
    // 0x2db7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db7fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db800: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB800u;
    {
        const bool branch_taken_0x2db800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db800) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB808u;
    // 0x2db808: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db80c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db810: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db814: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB814u;
    {
        const bool branch_taken_0x2db814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db814) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB81Cu;
    // 0x2db81c: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db824: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db828: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB828u;
    {
        const bool branch_taken_0x2db828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db828) {
            ctx->pc = 0x2DB880u;
            goto label_2db880;
        }
    }
    ctx->pc = 0x2DB830u;
    // 0x2db830: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB830u;
    SET_GPR_U32(ctx, 31, 0x2DB838u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB830u, 0x2DB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB838u;
label_2db838:
    // 0x2db838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db83c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db840: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB840u;
    {
        const bool branch_taken_0x2db840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db840) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB848u;
    // 0x2db848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db84c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db850: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db854: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db858: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db85c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db85cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db864: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db868: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db86c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db870: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db874: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db878: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB878u;
    {
        const bool branch_taken_0x2db878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db878) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB880u;
label_2db880:
    // 0x2db880: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB880u;
    SET_GPR_U32(ctx, 31, 0x2DB888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB880u, 0x2DB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB888u;
label_2db888:
    // 0x2db888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db88c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db890: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB890u;
    {
        const bool branch_taken_0x2db890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db890) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB898u;
    // 0x2db898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db89c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db8a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db8a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db8b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db8c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB8C8u;
    {
        const bool branch_taken_0x2db8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8c8) {
            ctx->pc = 0x2DB8D0u;
            goto label_2db8d0;
        }
    }
    ctx->pc = 0x2DB8D0u;
label_2db8d0:
    // 0x2db8d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2db8d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db8d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2db8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8E4u;
}
