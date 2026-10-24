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

// Function: Em01_R1_br_run
// Address: 0x302740 - 0x302b28
void Em01_R1_br_run_0x302740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_br_run_0x302740");
#endif

    switch (ctx->pc) {
        case 0x30284cu: goto label_30284c;
        case 0x3028d8u: goto label_3028d8;
        case 0x302964u: goto label_302964;
        case 0x302a28u: goto label_302a28;
        case 0x302aa0u: goto label_302aa0;
        default: break;
    }

    ctx->pc = 0x302740u;

    // 0x302740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302744: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x302744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x302748: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x302748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30274c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302750: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x302750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302754: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x302754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x302758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30275c: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x30275Cu;
    {
        const bool branch_taken_0x30275c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30275c) {
            ctx->pc = 0x302B18u;
            goto label_302b18;
        }
    }
    ctx->pc = 0x302764u;
    // 0x302764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302768: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30276c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x30276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x302770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302774: 0x0  nop
    ctx->pc = 0x302774u;
    // NOP
    // 0x302778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30277c: 0x0  nop
    ctx->pc = 0x30277cu;
    // NOP
    // 0x302780: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x302780u;
    {
        const bool branch_taken_0x302780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302780) {
            ctx->pc = 0x3027B8u;
            goto label_3027b8;
        }
    }
    ctx->pc = 0x302788u;
    // 0x302788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30278c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302790: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302798: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30279c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30279cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3027a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3027a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3027a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3027acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3027b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3027b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3027b8:
    // 0x3027b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027bc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3027c0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3027c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3027c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3027C4u;
    {
        const bool branch_taken_0x3027c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027c4) {
            ctx->pc = 0x302884u;
            goto label_302884;
        }
    }
    ctx->pc = 0x3027CCu;
    // 0x3027cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3027d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3027d4: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x3027d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x3027d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3027d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3027dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3027dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3027e0: 0x0  nop
    ctx->pc = 0x3027e0u;
    // NOP
    // 0x3027e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3027e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3027e8: 0x0  nop
    ctx->pc = 0x3027e8u;
    // NOP
    // 0x3027ec: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x3027ECu;
    {
        const bool branch_taken_0x3027ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3027ec) {
            ctx->pc = 0x302884u;
            goto label_302884;
        }
    }
    ctx->pc = 0x3027F4u;
    // 0x3027f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3027f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3027fc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x3027fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x302800: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302808: 0x0  nop
    ctx->pc = 0x302808u;
    // NOP
    // 0x30280c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30280cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302810: 0x0  nop
    ctx->pc = 0x302810u;
    // NOP
    // 0x302814: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x302814u;
    {
        const bool branch_taken_0x302814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302814) {
            ctx->pc = 0x302884u;
            goto label_302884;
        }
    }
    ctx->pc = 0x30281Cu;
    // 0x30281c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30282c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302830: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302834: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x302834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302838: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30283c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302840: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302844: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302844u;
    SET_GPR_U32(ctx, 31, 0x30284Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302844u, 0x30284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30284Cu;
label_30284c:
    // 0x30284c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30284Cu;
    {
        const bool branch_taken_0x30284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30284c) {
            ctx->pc = 0x302884u;
            goto label_302884;
        }
    }
    ctx->pc = 0x302854u;
    // 0x302854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30285c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30285cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302860: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x302860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x302864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302868: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30286c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302870: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302878: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30287c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302880: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302884:
    // 0x302884: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302888: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30288c: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x30288cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x302890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302894: 0x0  nop
    ctx->pc = 0x302894u;
    // NOP
    // 0x302898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30289c: 0x0  nop
    ctx->pc = 0x30289cu;
    // NOP
    // 0x3028a0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3028A0u;
    {
        const bool branch_taken_0x3028a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3028a0) {
            ctx->pc = 0x302910u;
            goto label_302910;
        }
    }
    ctx->pc = 0x3028A8u;
    // 0x3028a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028ac: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3028acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3028b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028b4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x3028b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x3028b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3028b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3028bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3028bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3028c0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3028c4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3028c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3028c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3028c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3028cc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3028ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3028d0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3028D0u;
    SET_GPR_U32(ctx, 31, 0x3028D8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3028D0u, 0x3028D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3028D8u;
label_3028d8:
    // 0x3028d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3028D8u;
    {
        const bool branch_taken_0x3028d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3028d8) {
            ctx->pc = 0x302910u;
            goto label_302910;
        }
    }
    ctx->pc = 0x3028E0u;
    // 0x3028e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3028e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3028e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3028e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3028ec: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x3028ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3028f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3028f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3028f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3028fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302904: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30290c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30290cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302910:
    // 0x302910: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302914: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302918: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x30291c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30291cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302920: 0x0  nop
    ctx->pc = 0x302920u;
    // NOP
    // 0x302924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302928: 0x0  nop
    ctx->pc = 0x302928u;
    // NOP
    // 0x30292c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30292Cu;
    {
        const bool branch_taken_0x30292c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30292c) {
            ctx->pc = 0x30299Cu;
            goto label_30299c;
        }
    }
    ctx->pc = 0x302934u;
    // 0x302934: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x302934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x302938: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x302938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x30293c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302940: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302944: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302948: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30294c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302950: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302954: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302958: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30295c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30295Cu;
    SET_GPR_U32(ctx, 31, 0x302964u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30295Cu, 0x302964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302964u;
label_302964:
    // 0x302964: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302964u;
    {
        const bool branch_taken_0x302964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302964) {
            ctx->pc = 0x30299Cu;
            goto label_30299c;
        }
    }
    ctx->pc = 0x30296Cu;
    // 0x30296c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302974: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302978: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x302978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30297c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302980: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302988: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30298c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302990: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302998: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30299c:
    // 0x30299c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3029a0: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x3029a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x3029a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3029A4u;
    {
        const bool branch_taken_0x3029a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3029a4) {
            ctx->pc = 0x302A60u;
            goto label_302a60;
        }
    }
    ctx->pc = 0x3029ACu;
    // 0x3029ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3029acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029b0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3029b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3029b4: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x3029b8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3029b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3029bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3029bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3029c0: 0x0  nop
    ctx->pc = 0x3029c0u;
    // NOP
    // 0x3029c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3029c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029c8: 0x0  nop
    ctx->pc = 0x3029c8u;
    // NOP
    // 0x3029cc: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x3029CCu;
    {
        const bool branch_taken_0x3029cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029cc) {
            ctx->pc = 0x302A60u;
            goto label_302a60;
        }
    }
    ctx->pc = 0x3029D4u;
    // 0x3029d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3029d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029d8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3029d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3029dc: 0x3c03452f  lui         $v1, 0x452F
    ctx->pc = 0x3029dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17711 << 16));
    // 0x3029e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3029e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3029e4: 0x0  nop
    ctx->pc = 0x3029e4u;
    // NOP
    // 0x3029e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3029e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029ec: 0x0  nop
    ctx->pc = 0x3029ecu;
    // NOP
    // 0x3029f0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3029F0u;
    {
        const bool branch_taken_0x3029f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029f0) {
            ctx->pc = 0x302A60u;
            goto label_302a60;
        }
    }
    ctx->pc = 0x3029F8u;
    // 0x3029f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3029f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3029fc: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3029fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302a00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a04: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302a08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302a0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302a10: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302a14: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302a18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302a1c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302a20: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302A20u;
    SET_GPR_U32(ctx, 31, 0x302A28u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302A20u, 0x302A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A28u;
label_302a28:
    // 0x302a28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302A28u;
    {
        const bool branch_taken_0x302a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a28) {
            ctx->pc = 0x302A60u;
            goto label_302a60;
        }
    }
    ctx->pc = 0x302A30u;
    // 0x302a30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302a34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302a3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x302a40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302a48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302a50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302a58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302a60:
    // 0x302a60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a64: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x302a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x302a68: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x302A68u;
    {
        const bool branch_taken_0x302a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302a68) {
            ctx->pc = 0x302AD8u;
            goto label_302ad8;
        }
    }
    ctx->pc = 0x302A70u;
    // 0x302a70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a74: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302a78: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302a80: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x302a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x302a84: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x302a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x302a88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302a8c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302a90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302a94: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302a98: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302A98u;
    SET_GPR_U32(ctx, 31, 0x302AA0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302A98u, 0x302AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AA0u;
label_302aa0:
    // 0x302aa0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302AA0u;
    {
        const bool branch_taken_0x302aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302aa0) {
            ctx->pc = 0x302AD8u;
            goto label_302ad8;
        }
    }
    ctx->pc = 0x302AA8u;
    // 0x302aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302aac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ab0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ab4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x302ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302ab8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302abc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ac0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ac4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302acc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302ad8:
    // 0x302ad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302adc: 0x8c631274  lw          $v1, 0x1274($v1)
    ctx->pc = 0x302adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302ae0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302AE0u;
    {
        const bool branch_taken_0x302ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ae0) {
            ctx->pc = 0x302B18u;
            goto label_302b18;
        }
    }
    ctx->pc = 0x302AE8u;
    // 0x302ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302af0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302afc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302b00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302b14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302b18:
    // 0x302b18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x302b18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302b1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x302b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x302b20: 0x3e00008  jr          $ra
    ctx->pc = 0x302B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302B28u;
}
