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

// Function: Scr_parts_near_trans
// Address: 0x13e790 - 0x140054
void Scr_parts_near_trans_0x13e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_near_trans_0x13e790");
#endif

    switch (ctx->pc) {
        case 0x13e804u: goto label_13e804;
        case 0x13e828u: goto label_13e828;
        case 0x13e920u: goto label_13e920;
        case 0x13e9b0u: goto label_13e9b0;
        case 0x13e9d4u: goto label_13e9d4;
        case 0x13e9d8u: goto label_13e9d8;
        case 0x13ea00u: goto label_13ea00;
        case 0x13ea14u: goto label_13ea14;
        case 0x13ec80u: goto label_13ec80;
        case 0x13ee0cu: goto label_13ee0c;
        case 0x13ef28u: goto label_13ef28;
        case 0x13ef54u: goto label_13ef54;
        case 0x13f038u: goto label_13f038;
        case 0x13f150u: goto label_13f150;
        case 0x13f188u: goto label_13f188;
        case 0x13f26cu: goto label_13f26c;
        case 0x13f384u: goto label_13f384;
        case 0x13f3b4u: goto label_13f3b4;
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f534u: goto label_13f534;
        case 0x13f564u: goto label_13f564;
        case 0x13f578u: goto label_13f578;
        case 0x13f5a8u: goto label_13f5a8;
        case 0x13f5b8u: goto label_13f5b8;
        case 0x13f5e8u: goto label_13f5e8;
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f62cu: goto label_13f62c;
        case 0x13f640u: goto label_13f640;
        case 0x13f678u: goto label_13f678;
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f710u: goto label_13f710;
        case 0x13f744u: goto label_13f744;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f814u: goto label_13f814;
        case 0x13f830u: goto label_13f830;
        case 0x13f864u: goto label_13f864;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f948u: goto label_13f948;
        case 0x13f960u: goto label_13f960;
        case 0x13f980u: goto label_13f980;
        case 0x13f998u: goto label_13f998;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9ecu: goto label_13f9ec;
        case 0x13fa04u: goto label_13fa04;
        case 0x13fa20u: goto label_13fa20;
        case 0x13fa78u: goto label_13fa78;
        case 0x13faa8u: goto label_13faa8;
        case 0x13fab8u: goto label_13fab8;
        case 0x13faf0u: goto label_13faf0;
        case 0x13fb10u: goto label_13fb10;
        case 0x13fb44u: goto label_13fb44;
        case 0x13fb60u: goto label_13fb60;
        case 0x13fb9cu: goto label_13fb9c;
        case 0x13fbb0u: goto label_13fbb0;
        case 0x13fbe0u: goto label_13fbe0;
        case 0x13fc0cu: goto label_13fc0c;
        case 0x13fc1cu: goto label_13fc1c;
        case 0x13fc3cu: goto label_13fc3c;
        case 0x13fc58u: goto label_13fc58;
        case 0x13fcb8u: goto label_13fcb8;
        case 0x13fcf8u: goto label_13fcf8;
        case 0x13fd10u: goto label_13fd10;
        case 0x13fd4cu: goto label_13fd4c;
        case 0x13fd64u: goto label_13fd64;
        case 0x13fd98u: goto label_13fd98;
        case 0x13fdb8u: goto label_13fdb8;
        case 0x13fdecu: goto label_13fdec;
        case 0x13fe08u: goto label_13fe08;
        case 0x13fe44u: goto label_13fe44;
        case 0x13fe78u: goto label_13fe78;
        case 0x13fe94u: goto label_13fe94;
        case 0x13feb0u: goto label_13feb0;
        case 0x13feccu: goto label_13fecc;
        default: break;
    }

    ctx->pc = 0x13e790u;

    // 0x13e790: 0x27bde940  addiu       $sp, $sp, -0x16C0
    ctx->pc = 0x13e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961472));
    // 0x13e794: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x13e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x13e798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13e79c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13e7a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13e7a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13e7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13e7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13e7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13e7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e7bc: 0xafa416a0  sw          $a0, 0x16A0($sp)
    ctx->pc = 0x13e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5792), GPR_U32(ctx, 4));
    // 0x13e7c0: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13e7c4: 0xafa616b0  sw          $a2, 0x16B0($sp)
    ctx->pc = 0x13e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5808), GPR_U32(ctx, 6));
    // 0x13e7c8: 0xafa01674  sw          $zero, 0x1674($sp)
    ctx->pc = 0x13e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5748), GPR_U32(ctx, 0));
    // 0x13e7cc: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x13e7ccu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e7d0: 0xafa0168c  sw          $zero, 0x168C($sp)
    ctx->pc = 0x13e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5772), GPR_U32(ctx, 0));
    // 0x13e7d4: 0xa3a00240  sb          $zero, 0x240($sp)
    ctx->pc = 0x13e7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e7d8: 0xa3a00241  sb          $zero, 0x241($sp)
    ctx->pc = 0x13e7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 577), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e7dc: 0x8fa416a0  lw          $a0, 0x16A0($sp)
    ctx->pc = 0x13e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e7e0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x13e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13e7e4: 0xafa31678  sw          $v1, 0x1678($sp)
    ctx->pc = 0x13e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5752), GPR_U32(ctx, 3));
    // 0x13e7e8: 0x8fa21678  lw          $v0, 0x1678($sp)
    ctx->pc = 0x13e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13e7ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13e7f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13e7f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13e7f4: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x13e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x13e7f8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13e7f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13e7fc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x13E7FCu;
    SET_GPR_U32(ctx, 31, 0x13E804u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x13E804u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E804u) { return; }
    ctx->pc = 0x13E804u;
label_13e804:
    // 0x13e804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e808: 0x8c250af0  lw          $a1, 0xAF0($at)
    ctx->pc = 0x13e808u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13e80c: 0x8fa316a0  lw          $v1, 0x16A0($sp)
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e810: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x13e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13e814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e818: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13e818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13e81c: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x13e81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x13e820: 0xc040c00  jal         func_103000
    ctx->pc = 0x13E820u;
    SET_GPR_U32(ctx, 31, 0x13E828u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13E828u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E828u) { return; }
    ctx->pc = 0x13E828u;
label_13e828:
    // 0x13e828: 0x8fa516a0  lw          $a1, 0x16A0($sp)
    ctx->pc = 0x13e828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e82c: 0x8ca600a0  lw          $a2, 0xA0($a1)
    ctx->pc = 0x13e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13e830: 0xafa61660  sw          $a2, 0x1660($sp)
    ctx->pc = 0x13e830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5728), GPR_U32(ctx, 6));
    // 0x13e834: 0x8fa31660  lw          $v1, 0x1660($sp)
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5728)));
    // 0x13e838: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x13e838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e83c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13e83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e840: 0xafa41664  sw          $a0, 0x1664($sp)
    ctx->pc = 0x13e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5732), GPR_U32(ctx, 4));
    // 0x13e844: 0x8fa51664  lw          $a1, 0x1664($sp)
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5732)));
    // 0x13e848: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E848u;
    {
        const bool branch_taken_0x13e848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e848) {
            ctx->pc = 0x13E85Cu;
            goto label_13e85c;
        }
    }
    ctx->pc = 0x13E850u;
    // 0x13e850: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e854: 0x100005f2  b           . + 4 + (0x5F2 << 2)
    ctx->pc = 0x13E854u;
    {
        const bool branch_taken_0x13e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e854) {
            ctx->pc = 0x140020u;
            goto label_140020;
        }
    }
    ctx->pc = 0x13E85Cu;
label_13e85c:
    // 0x13e85c: 0x8fa816a0  lw          $t0, 0x16A0($sp)
    ctx->pc = 0x13e85cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e860: 0x8d020034  lw          $v0, 0x34($t0)
    ctx->pc = 0x13e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x13e864: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13e864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13e868: 0x8fa416b0  lw          $a0, 0x16B0($sp)
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e86c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e870: 0x8fa216a0  lw          $v0, 0x16A0($sp)
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e874: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e878: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x13e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13e87c: 0xafa51698  sw          $a1, 0x1698($sp)
    ctx->pc = 0x13e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5784), GPR_U32(ctx, 5));
    // 0x13e880: 0x8fa216a0  lw          $v0, 0x16A0($sp)
    ctx->pc = 0x13e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5792)));
    // 0x13e884: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13e888: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
    // 0x13e88c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e890: 0xafa41670  sw          $a0, 0x1670($sp)
    ctx->pc = 0x13e890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5744), GPR_U32(ctx, 4));
    // 0x13e894: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e898: 0x34450003  ori         $a1, $v0, 0x3
    ctx->pc = 0x13e898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13e89c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8a0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x13e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x13e8a4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8a8: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x13e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x13e8ac: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8b0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13e8b4: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13e8b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13e8bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e8c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e8c8: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8cc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x13e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x13e8d0: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x13e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x13e8d4: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8d8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x13e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x13e8dc: 0x8fa8169c  lw          $t0, 0x169C($sp)
    ctx->pc = 0x13e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13e8e0: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x13e8e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x13e8e4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8e8: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x13e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x13e8ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e8f0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e8f4: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x13e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x13e8f8: 0x8fa81698  lw          $t0, 0x1698($sp)
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5784)));
    // 0x13e8fc: 0xdd020010  ld          $v0, 0x10($t0)
    ctx->pc = 0x13e8fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x13e900: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e904: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x13e904u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x13e908: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13e90c: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e910: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x13e910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x13e914: 0x8fa816a8  lw          $t0, 0x16A8($sp)
    ctx->pc = 0x13e914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13e918: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x13e91c: 0xafa416a8  sw          $a0, 0x16A8($sp)
    ctx->pc = 0x13e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 4));
label_13e920:
    // 0x13e920: 0x8fa91668  lw          $t1, 0x1668($sp)
    ctx->pc = 0x13e920u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e924: 0x8d250020  lw          $a1, 0x20($t1)
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13e928: 0xafa5167c  sw          $a1, 0x167C($sp)
    ctx->pc = 0x13e928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 5));
    // 0x13e92c: 0x8fa5167c  lw          $a1, 0x167C($sp)
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13e930: 0x28a10065  slti        $at, $a1, 0x65
    ctx->pc = 0x13e930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x13e934: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E934u;
    {
        const bool branch_taken_0x13e934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e934) {
            ctx->pc = 0x13E95Cu;
            goto label_13e95c;
        }
    }
    ctx->pc = 0x13E93Cu;
    // 0x13e93c: 0x8fa61668  lw          $a2, 0x1668($sp)
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e940: 0x24c700c0  addiu       $a3, $a2, 0xC0
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x13e944: 0xafa71668  sw          $a3, 0x1668($sp)
    ctx->pc = 0x13e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 7));
    // 0x13e948: 0x8fa8169c  lw          $t0, 0x169C($sp)
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13e94c: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x13e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13e950: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13e950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
    // 0x13e954: 0x1000058a  b           . + 4 + (0x58A << 2)
    ctx->pc = 0x13E954u;
    {
        const bool branch_taken_0x13e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e954) {
            ctx->pc = 0x13FF80u;
            goto label_13ff80;
        }
    }
    ctx->pc = 0x13E95Cu;
label_13e95c:
    // 0x13e95c: 0x8fa416b0  lw          $a0, 0x16B0($sp)
    ctx->pc = 0x13e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e960: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e964: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e968: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e96c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13e970: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x13e970u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e974: 0x8fa216b0  lw          $v0, 0x16B0($sp)
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e978: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e97c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e980: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13e984: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x13e988: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x13e988u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e98c: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
    // 0x13e990: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x13e990u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e994: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x13e994u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e998: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e99c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13e99cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13e9a0: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e9a4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x13e9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13e9a8: 0xc04f96c  jal         func_13E5B0
    ctx->pc = 0x13E9A8u;
    SET_GPR_U32(ctx, 31, 0x13E9B0u);
    ctx->pc = 0x13E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5B0u, 0x13E9A8u, 0x13E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9B0u;
label_13e9b0:
    // 0x13e9b0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x13e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9b4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x13e9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x13e9b8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x13e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9bc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13e9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x13e9c0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x13e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9c4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x13e9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x13e9c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13e9cc: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13E9CCu;
    SET_GPR_U32(ctx, 31, 0x13E9D4u);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13E9CCu, 0x13E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9D4u;
label_13e9d4:
    // 0x13e9d4: 0x0  nop
    ctx->pc = 0x13e9d4u;
    // NOP
label_13e9d8:
    // 0x13e9d8: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x13e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9dc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x13e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x13e9e0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x13e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9e4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13e9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x13e9e8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x13e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9ec: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x13e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x13e9f0: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13e9f4: 0xa0400240  sb          $zero, 0x240($v0)
    ctx->pc = 0x13e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e9f8: 0xc04f980  jal         func_13E600
    ctx->pc = 0x13E9F8u;
    SET_GPR_U32(ctx, 31, 0x13EA00u);
    ctx->pc = 0x13E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E600u, 0x13E9F8u, 0x13EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA00u;
label_13ea00:
    // 0x13ea00: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x13ea00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x13ea04: 0x3c5f025  or          $fp, $fp, $a1
    ctx->pc = 0x13ea04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 5));
    // 0x13ea08: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13ea0c: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13EA0Cu;
    SET_GPR_U32(ctx, 31, 0x13EA14u);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13EA0Cu, 0x13EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA14u;
label_13ea14:
    // 0x13ea14: 0x92a50003  lbu         $a1, 0x3($s5)
    ctx->pc = 0x13ea14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x13ea18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ea1c: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x13ea1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13ea20: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x13EA20u;
    {
        const bool branch_taken_0x13ea20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea20) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13EA28u;
    // 0x13ea28: 0x1e1bbc  dsll32      $v1, $fp, 14
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 14));
    // 0x13ea2c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x13ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x13ea30: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x13EA30u;
    {
        const bool branch_taken_0x13ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea30) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13EA38u;
    // 0x13ea38: 0x33c3003f  andi        $v1, $fp, 0x3F
    ctx->pc = 0x13ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x13ea3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13EA3Cu;
    {
        const bool branch_taken_0x13ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea3c) {
            ctx->pc = 0x13EA68u;
            goto label_13ea68;
        }
    }
    ctx->pc = 0x13EA44u;
    // 0x13ea44: 0x33c30fc0  andi        $v1, $fp, 0xFC0
    ctx->pc = 0x13ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4032);
    // 0x13ea48: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EA48u;
    {
        const bool branch_taken_0x13ea48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea48) {
            ctx->pc = 0x13EA68u;
            goto label_13ea68;
        }
    }
    ctx->pc = 0x13EA50u;
    // 0x13ea50: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x13ea54: 0x34c7f000  ori         $a3, $a2, 0xF000
    ctx->pc = 0x13ea54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x13ea58: 0x3c72824  and         $a1, $fp, $a3
    ctx->pc = 0x13ea58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 7));
    // 0x13ea5c: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x13EA5Cu;
    {
        const bool branch_taken_0x13ea5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea5c) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13EA64u;
    // 0x13ea64: 0x0  nop
    ctx->pc = 0x13ea64u;
    // NOP
label_13ea68:
    // 0x13ea68: 0x33c4003f  andi        $a0, $fp, 0x3F
    ctx->pc = 0x13ea68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x13ea6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA6Cu;
    {
        const bool branch_taken_0x13ea6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea6c) {
            ctx->pc = 0x13EA88u;
            goto label_13ea88;
        }
    }
    ctx->pc = 0x13EA74u;
    // 0x13ea74: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ea78: 0x90620240  lbu         $v0, 0x240($v1)
    ctx->pc = 0x13ea78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 576)));
    // 0x13ea7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13ea80: 0xa0620240  sb          $v0, 0x240($v1)
    ctx->pc = 0x13ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ea84: 0x0  nop
    ctx->pc = 0x13ea84u;
    // NOP
label_13ea88:
    // 0x13ea88: 0x33c40fc0  andi        $a0, $fp, 0xFC0
    ctx->pc = 0x13ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4032);
    // 0x13ea8c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA8Cu;
    {
        const bool branch_taken_0x13ea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea8c) {
            ctx->pc = 0x13EAA8u;
            goto label_13eaa8;
        }
    }
    ctx->pc = 0x13EA94u;
    // 0x13ea94: 0x2dd2821  addu        $a1, $s6, $sp
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ea98: 0x90a20240  lbu         $v0, 0x240($a1)
    ctx->pc = 0x13ea98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x13ea9c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13eaa0: 0xa0a30240  sb          $v1, 0x240($a1)
    ctx->pc = 0x13eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 576), (uint8_t)GPR_U32(ctx, 3));
    // 0x13eaa4: 0x0  nop
    ctx->pc = 0x13eaa4u;
    // NOP
label_13eaa8:
    // 0x13eaa8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x13eaac: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x13eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x13eab0: 0x3c22824  and         $a1, $fp, $v0
    ctx->pc = 0x13eab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x13eab4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EAB4u;
    {
        const bool branch_taken_0x13eab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eab4) {
            ctx->pc = 0x13EAD0u;
            goto label_13ead0;
        }
    }
    ctx->pc = 0x13EABCu;
    // 0x13eabc: 0x2dd3021  addu        $a2, $s6, $sp
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13eac0: 0x90c70240  lbu         $a3, 0x240($a2)
    ctx->pc = 0x13eac0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 576)));
    // 0x13eac4: 0x34e20004  ori         $v0, $a3, 0x4
    ctx->pc = 0x13eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x13eac8: 0xa0c20240  sb          $v0, 0x240($a2)
    ctx->pc = 0x13eac8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x13eacc: 0x0  nop
    ctx->pc = 0x13eaccu;
    // NOP
label_13ead0:
    // 0x13ead0: 0x8fa41680  lw          $a0, 0x1680($sp)
    ctx->pc = 0x13ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13ead4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x13ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13ead8: 0xafa51680  sw          $a1, 0x1680($sp)
    ctx->pc = 0x13ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 5));
    // 0x13eadc: 0x0  nop
    ctx->pc = 0x13eadcu;
    // NOP
label_13eae0:
    // 0x13eae0: 0x1ef180  sll         $fp, $fp, 6
    ctx->pc = 0x13eae0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x13eae4: 0x26a80004  addiu       $t0, $s5, 0x4
    ctx->pc = 0x13eae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13eae8: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x13eae8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13eaec: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x13eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x13eaf0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x13eaf0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13eaf4: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x13eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13eaf8: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x13eaf8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13eafc: 0x8fa5167c  lw          $a1, 0x167C($sp)
    ctx->pc = 0x13eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13eb00: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13eb04: 0xafa2167c  sw          $v0, 0x167C($sp)
    ctx->pc = 0x13eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 2));
    // 0x13eb08: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x13EB08u;
    {
        const bool branch_taken_0x13eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb08) {
            ctx->pc = 0x13E9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e9d8;
        }
    }
    ctx->pc = 0x13EB10u;
    // 0x13eb10: 0x8fa71680  lw          $a3, 0x1680($sp)
    ctx->pc = 0x13eb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13eb14: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EB14u;
    {
        const bool branch_taken_0x13eb14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb14) {
            ctx->pc = 0x13EB3Cu;
            goto label_13eb3c;
        }
    }
    ctx->pc = 0x13EB1Cu;
    // 0x13eb1c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13eb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13eb20: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x13eb24: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13eb28: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13eb2c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x13eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13eb30: 0xafa4169c  sw          $a0, 0x169C($sp)
    ctx->pc = 0x13eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 4));
    // 0x13eb34: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x13EB34u;
    {
        const bool branch_taken_0x13eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb34) {
            ctx->pc = 0x13FF80u;
            goto label_13ff80;
        }
    }
    ctx->pc = 0x13EB3Cu;
label_13eb3c:
    // 0x13eb3c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13eb40: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x13eb40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13eb44: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13eb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13eb48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13eb48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x13eb4c: 0xafa41694  sw          $a0, 0x1694($sp)
    ctx->pc = 0x13eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 4));
    // 0x13eb50: 0x8fa51694  lw          $a1, 0x1694($sp)
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13eb54: 0x2406fdd8  addiu       $a2, $zero, -0x228
    ctx->pc = 0x13eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966744));
    // 0x13eb58: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x13eb58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x13eb5c: 0xafa71694  sw          $a3, 0x1694($sp)
    ctx->pc = 0x13eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 7));
    // 0x13eb60: 0x8fa41694  lw          $a0, 0x1694($sp)
    ctx->pc = 0x13eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13eb64: 0x34850005  ori         $a1, $a0, 0x5
    ctx->pc = 0x13eb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x13eb68: 0xafa51694  sw          $a1, 0x1694($sp)
    ctx->pc = 0x13eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5780), GPR_U32(ctx, 5));
    // 0x13eb6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13eb70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13eb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb78: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x13eb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13eb7c: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb80: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x13eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x13eb84: 0x3406eeee  ori         $a2, $zero, 0xEEEE
    ctx->pc = 0x13eb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x13eb88: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb8c: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x13eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x13eb90: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13eb94: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x13eb94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13eb98: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eb9c: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x13eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x13eba0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13eba4: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13eba8: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x13eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x13ebac: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ebb0: 0xdc440020  ld          $a0, 0x20($v0)
    ctx->pc = 0x13ebb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13ebb4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebb8: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x13ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x13ebbc: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x13ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x13ebc0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ebc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebc4: 0xfce60028  sd          $a2, 0x28($a3)
    ctx->pc = 0x13ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 6));
    // 0x13ebc8: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ebcc: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ebd0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebd4: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x13ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x13ebd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13ebdc: 0x8fa816a8  lw          $t0, 0x16A8($sp)
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebe0: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x13ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x13ebe4: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ebe8: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13ebec: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebf0: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x13ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x13ebf4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13ebf8: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ebfc: 0xfce60048  sd          $a2, 0x48($a3)
    ctx->pc = 0x13ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 72), GPR_U64(ctx, 6));
    // 0x13ec00: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ec04: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13ec08: 0xafa816a8  sw          $t0, 0x16A8($sp)
    ctx->pc = 0x13ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 8));
    // 0x13ec0c: 0x8fa516b0  lw          $a1, 0x16B0($sp)
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec10: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ec14: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec18: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x13ec18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13ec1c: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x13ec20: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x13ec20u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ec24: 0x8fa516b0  lw          $a1, 0x16B0($sp)
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec28: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ec2c: 0x8fa31668  lw          $v1, 0x1668($sp)
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec30: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x13ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13ec34: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13ec38: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x13ec38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ec3c: 0x8fa616b0  lw          $a2, 0x16B0($sp)
    ctx->pc = 0x13ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec40: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x13ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ec44: 0x8fa81668  lw          $t0, 0x1668($sp)
    ctx->pc = 0x13ec44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec48: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13ec4c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x13ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ec50: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x13ec50u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ec54: 0x8fa616b0  lw          $a2, 0x16B0($sp)
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13ec58: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ec5c: 0x8fa31668  lw          $v1, 0x1668($sp)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec60: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ec64: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13ec68: 0xafa2166c  sw          $v0, 0x166C($sp)
    ctx->pc = 0x13ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5740), GPR_U32(ctx, 2));
    // 0x13ec6c: 0x8fa61668  lw          $a2, 0x1668($sp)
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ec70: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13ec74: 0xafa8167c  sw          $t0, 0x167C($sp)
    ctx->pc = 0x13ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 8));
    // 0x13ec78: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x13ec78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ec7c: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
label_13ec80:
    // 0x13ec80: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ec84: 0x90420240  lbu         $v0, 0x240($v0)
    ctx->pc = 0x13ec84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x13ec88: 0x104004a7  beqz        $v0, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x13EC88u;
    {
        const bool branch_taken_0x13ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec88) {
            ctx->pc = 0x13FF28u;
            goto label_13ff28;
        }
    }
    ctx->pc = 0x13EC90u;
    // 0x13ec90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ec94: 0xafa51684  sw          $a1, 0x1684($sp)
    ctx->pc = 0x13ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 5));
    // 0x13ec98: 0xafa01688  sw          $zero, 0x1688($sp)
    ctx->pc = 0x13ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 0));
    // 0x13ec9c: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13eca0: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13eca4: 0x90850240  lbu         $a1, 0x240($a0)
    ctx->pc = 0x13eca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x13eca8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ecac: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x13ecacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ecb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECB0u;
    {
        const bool branch_taken_0x13ecb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ecb0) {
            ctx->pc = 0x13ECD0u;
            goto label_13ecd0;
        }
    }
    ctx->pc = 0x13ECB8u;
    // 0x13ecb8: 0x8fa21684  lw          $v0, 0x1684($sp)
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ecbc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ecc0: 0xafa61684  sw          $a2, 0x1684($sp)
    ctx->pc = 0x13ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 6));
    // 0x13ecc4: 0x8fb11684  lw          $s1, 0x1684($sp)
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ecc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13ECC8u;
    {
        const bool branch_taken_0x13ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ecc8) {
            ctx->pc = 0x13ECE8u;
            goto label_13ece8;
        }
    }
    ctx->pc = 0x13ECD0u;
label_13ecd0:
    // 0x13ecd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ecd4: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ecd8: 0x448823  subu        $s1, $v0, $a0
    ctx->pc = 0x13ecd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ecdc: 0x8fb01688  lw          $s0, 0x1688($sp)
    ctx->pc = 0x13ecdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ece0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13ece4: 0xafa41688  sw          $a0, 0x1688($sp)
    ctx->pc = 0x13ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 4));
label_13ece8:
    // 0x13ece8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13ecec: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x13ececu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ecf0: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ecf4: 0x90450240  lbu         $a1, 0x240($v0)
    ctx->pc = 0x13ecf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x13ecf8: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ecf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ecfc: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x13ecfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x13ed00: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED00u;
    {
        const bool branch_taken_0x13ed00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed00) {
            ctx->pc = 0x13ED24u;
            goto label_13ed24;
        }
    }
    ctx->pc = 0x13ED08u;
    // 0x13ed08: 0x8fa51684  lw          $a1, 0x1684($sp)
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed0c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x13ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13ed10: 0xafa61684  sw          $a2, 0x1684($sp)
    ctx->pc = 0x13ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 6));
    // 0x13ed14: 0x8fa71684  lw          $a3, 0x1684($sp)
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed18: 0x70e09628  paddub      $s2, $a3, $zero
    ctx->pc = 0x13ed18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13ed1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED1Cu;
    {
        const bool branch_taken_0x13ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed1c) {
            ctx->pc = 0x13ED40u;
            goto label_13ed40;
        }
    }
    ctx->pc = 0x13ED24u;
label_13ed24:
    // 0x13ed24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed28: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed2c: 0x449023  subu        $s2, $v0, $a0
    ctx->pc = 0x13ed2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ed30: 0x8fa21688  lw          $v0, 0x1688($sp)
    ctx->pc = 0x13ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed34: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ed38: 0xafa51688  sw          $a1, 0x1688($sp)
    ctx->pc = 0x13ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 5));
    // 0x13ed3c: 0x0  nop
    ctx->pc = 0x13ed3cu;
    // NOP
label_13ed40:
    // 0x13ed40: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13ed44: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x13ed44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13ed48: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ed4c: 0x90850240  lbu         $a1, 0x240($a0)
    ctx->pc = 0x13ed4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x13ed50: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ed50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ed54: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x13ed58: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED58u;
    {
        const bool branch_taken_0x13ed58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed58) {
            ctx->pc = 0x13ED7Cu;
            goto label_13ed7c;
        }
    }
    ctx->pc = 0x13ED60u;
    // 0x13ed60: 0x8fa21684  lw          $v0, 0x1684($sp)
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed64: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x13ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ed68: 0xafa41684  sw          $a0, 0x1684($sp)
    ctx->pc = 0x13ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 4));
    // 0x13ed6c: 0x8fa51684  lw          $a1, 0x1684($sp)
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed70: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x13ed70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ed74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED74u;
    {
        const bool branch_taken_0x13ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed74) {
            ctx->pc = 0x13ED98u;
            goto label_13ed98;
        }
    }
    ctx->pc = 0x13ED7Cu;
label_13ed7c:
    // 0x13ed7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed80: 0x8fa61688  lw          $a2, 0x1688($sp)
    ctx->pc = 0x13ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed84: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x13ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ed88: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x13ed88u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13ed8c: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed90: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13ed94: 0xafa51688  sw          $a1, 0x1688($sp)
    ctx->pc = 0x13ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 5));
label_13ed98:
    // 0x13ed98: 0x8fa6166c  lw          $a2, 0x166C($sp)
    ctx->pc = 0x13ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13ed9c: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x13ed9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eda0: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x13eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x13eda4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eda8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13edac: 0xaca20210  sw          $v0, 0x210($a1)
    ctx->pc = 0x13edacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 528), GPR_U32(ctx, 2));
    // 0x13edb0: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13edb4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x13edb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x13edb8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13edb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13edbc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13edc4: 0xac450214  sw          $a1, 0x214($v0)
    ctx->pc = 0x13edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 5));
    // 0x13edc8: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x13edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13edcc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13edccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edd0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13edd4: 0xac440218  sw          $a0, 0x218($v0)
    ctx->pc = 0x13edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 4));
    // 0x13edd8: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eddc: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13eddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ede0: 0xacc0021c  sw          $zero, 0x21C($a2)
    ctx->pc = 0x13ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 0));
    // 0x13ede4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ede8: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13edec: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13edf0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13edf4: 0x24a501b0  addiu       $a1, $a1, 0x1B0
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13edf8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13edf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13edfc: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13ee00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13ee00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13ee04: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13EE04u;
    SET_GPR_U32(ctx, 31, 0x13EE0Cu);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13EE04u, 0x13EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE0Cu;
label_13ee0c:
    // 0x13ee0c: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x13ee0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ee10: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ee10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ee14: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee18: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13ee1c: 0xac4601e0  sw          $a2, 0x1E0($v0)
    ctx->pc = 0x13ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 6));
    // 0x13ee20: 0x92a40001  lbu         $a0, 0x1($s5)
    ctx->pc = 0x13ee20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x13ee24: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13ee24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13ee28: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee2c: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13ee2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee30: 0xad0501e4  sw          $a1, 0x1E4($t0)
    ctx->pc = 0x13ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 484), GPR_U32(ctx, 5));
    // 0x13ee34: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x13ee34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x13ee38: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13ee38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ee3c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee40: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee44: 0xac4401e8  sw          $a0, 0x1E8($v0)
    ctx->pc = 0x13ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 4));
    // 0x13ee48: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13ee4c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee50: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee54: 0xac4401ec  sw          $a0, 0x1EC($v0)
    ctx->pc = 0x13ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 4));
    // 0x13ee58: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x13ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee5c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee60: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee64: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x13ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x13ee68: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x13ee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee6c: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee70: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee74: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13ee74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13ee78: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x13ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee7c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ee84: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x13ee84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x13ee88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13ee8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ee8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ee90: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ee94: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ee98: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13ee98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13ee9c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x13ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eea0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x13eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eea4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13eea8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x13eea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x13eeac: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x13eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eeb0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eeb4: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13eeb8: 0xe4e00184  swc1        $f0, 0x184($a3)
    ctx->pc = 0x13eeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 388), bits); }
    // 0x13eebc: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x13eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eec0: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eec4: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x13eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13eec8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x13eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x13eecc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x13eeccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x13eed0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x13eed0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eed4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eed8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13eedc: 0xe4a0018c  swc1        $f0, 0x18C($a1)
    ctx->pc = 0x13eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 396), bits); }
    // 0x13eee0: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eee4: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13eee8: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eeec: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13eef0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13eef4: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13eef8: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x13eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13eefc: 0xd14021  addu        $t0, $a2, $s1
    ctx->pc = 0x13eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x13ef00: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x13ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13ef04: 0x9d4821  addu        $t1, $a0, $sp
    ctx->pc = 0x13ef04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13ef08: 0x8fa51678  lw          $a1, 0x1678($sp)
    ctx->pc = 0x13ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13ef0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13ef0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ef10: 0x24e50150  addiu       $a1, $a3, 0x150
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
    // 0x13ef14: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x13ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13ef18: 0x246701e0  addiu       $a3, $v1, 0x1E0
    ctx->pc = 0x13ef18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x13ef1c: 0x25281590  addiu       $t0, $t1, 0x1590
    ctx->pc = 0x13ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 5520));
    // 0x13ef20: 0xc05da54  jal         func_176950
    ctx->pc = 0x13EF20u;
    SET_GPR_U32(ctx, 31, 0x13EF28u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13EF20u, 0x13EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF28u;
label_13ef28:
    // 0x13ef28: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef2c: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x13ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13ef30: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13ef34: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef38: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef40: 0x246415b0  addiu       $a0, $v1, 0x15B0
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
    // 0x13ef44: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13ef48: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13ef4c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13EF4Cu;
    SET_GPR_U32(ctx, 31, 0x13EF54u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13EF4Cu, 0x13EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF54u;
label_13ef54:
    // 0x13ef54: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef58: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13ef5c: 0x25020150  addiu       $v0, $t0, 0x150
    ctx->pc = 0x13ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x13ef60: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13ef60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ef64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ef6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ef70: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13ef74: 0x24be1570  addiu       $fp, $a1, 0x1570
    ctx->pc = 0x13ef74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 5488));
    // 0x13ef78: 0x7fc40000  sq          $a0, 0x0($fp)
    ctx->pc = 0x13ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 4));
    // 0x13ef7c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x13ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13ef80: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13ef84: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x13ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13ef88: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13ef88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ef8c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ef90: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13ef94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ef98: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13ef9c: 0x24671580  addiu       $a3, $v1, 0x1580
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5504));
    // 0x13efa0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13efa4: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13efa8: 0xdd2821  addu        $a1, $a2, $sp
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13efac: 0x24a401b0  addiu       $a0, $a1, 0x1B0
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13efb0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x13efb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13efb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13efb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13efbc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13efc0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13efc4: 0x24a215a0  addiu       $v0, $a1, 0x15A0
    ctx->pc = 0x13efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    // 0x13efc8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x13efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x13efcc: 0x8fa3166c  lw          $v1, 0x166C($sp)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13efd0: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x13efd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x13efd4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13efd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13efd8: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13efdc: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13efe0: 0xacc40210  sw          $a0, 0x210($a2)
    ctx->pc = 0x13efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 528), GPR_U32(ctx, 4));
    // 0x13efe4: 0x8fa7166c  lw          $a3, 0x166C($sp)
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13efe8: 0x94e2fffe  lhu         $v0, -0x2($a3)
    ctx->pc = 0x13efe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x13efec: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13efecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13eff0: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13eff4: 0xbdf021  addu        $fp, $a1, $sp
    ctx->pc = 0x13eff4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13eff8: 0xafc40214  sw          $a0, 0x214($fp)
    ctx->pc = 0x13eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 532), GPR_U32(ctx, 4));
    // 0x13effc: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13f000: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f004: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f008: 0xac880218  sw          $t0, 0x218($a0)
    ctx->pc = 0x13f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 8));
    // 0x13f00c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f010: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f014: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x13f014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x13f018: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f01c: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f020: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f024: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f028: 0x24a401b0  addiu       $a0, $a1, 0x1B0
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f02c: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x13f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13f030: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13F030u;
    SET_GPR_U32(ctx, 31, 0x13F038u);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13F030u, 0x13F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F038u;
label_13f038:
    // 0x13f038: 0x92a4fffc  lbu         $a0, -0x4($s5)
    ctx->pc = 0x13f038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967292)));
    // 0x13f03c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13f03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f040: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x13f040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f044: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f048: 0xace501e0  sw          $a1, 0x1E0($a3)
    ctx->pc = 0x13f048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 5));
    // 0x13f04c: 0x92a4fffd  lbu         $a0, -0x3($s5)
    ctx->pc = 0x13f04cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967293)));
    // 0x13f050: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x13f050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f054: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f058: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f05c: 0xac4501e4  sw          $a1, 0x1E4($v0)
    ctx->pc = 0x13f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 5));
    // 0x13f060: 0x92a3fffe  lbu         $v1, -0x2($s5)
    ctx->pc = 0x13f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967294)));
    // 0x13f064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13f064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13f068: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f06c: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f070: 0xacc401e8  sw          $a0, 0x1E8($a2)
    ctx->pc = 0x13f070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 488), GPR_U32(ctx, 4));
    // 0x13f074: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x13f074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13f078: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f07c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f080: 0xac8701ec  sw          $a3, 0x1EC($a0)
    ctx->pc = 0x13f080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 7));
    // 0x13f084: 0xc680fff4  lwc1        $f0, -0xC($s4)
    ctx->pc = 0x13f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f088: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f08c: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f090: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x13f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x13f094: 0xc680fff8  lwc1        $f0, -0x8($s4)
    ctx->pc = 0x13f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f098: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f09c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13f0a0: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13f0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13f0a4: 0xc680fffc  lwc1        $f0, -0x4($s4)
    ctx->pc = 0x13f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0a8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0ac: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f0b0: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x13f0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
    // 0x13f0b4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x13f0b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x13f0b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f0bc: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0c0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f0c4: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13f0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13f0c8: 0xc6e0fff4  lwc1        $f0, -0xC($s7)
    ctx->pc = 0x13f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0cc: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0d0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f0d4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x13f0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x13f0d8: 0xc6e0fff8  lwc1        $f0, -0x8($s7)
    ctx->pc = 0x13f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0dc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0e0: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f0e4: 0xe5000184  swc1        $f0, 0x184($t0)
    ctx->pc = 0x13f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 388), bits); }
    // 0x13f0e8: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x13f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0ec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f0f0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f0f4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x13f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x13f0f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13f0fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13f0fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f100: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x13f100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f104: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f108: 0xe4e0018c  swc1        $f0, 0x18C($a3)
    ctx->pc = 0x13f108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 396), bits); }
    // 0x13f10c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f110: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f114: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f118: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f11c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f120: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f124: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x13f124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f128: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13f12c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f130: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f134: 0x8fa41678  lw          $a0, 0x1678($sp)
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13f138: 0x25050150  addiu       $a1, $t0, 0x150
    ctx->pc = 0x13f138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x13f13c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x13f140: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
    // 0x13f144: 0x24681590  addiu       $t0, $v1, 0x1590
    ctx->pc = 0x13f144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x13f148: 0xc05da54  jal         func_176950
    ctx->pc = 0x13F148u;
    SET_GPR_U32(ctx, 31, 0x13F150u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13F148u, 0x13F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F150u;
label_13f150:
    // 0x13f150: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x13f150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f154: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x13f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x13f158: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x13f158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13f15c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f160: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x13f160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f164: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f168: 0x246615b0  addiu       $a2, $v1, 0x15B0
    ctx->pc = 0x13f168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
    // 0x13f16c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f170: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13f174: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x13f174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13f178: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x13f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13f17c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f17cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f180: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13F180u;
    SET_GPR_U32(ctx, 31, 0x13F188u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13F180u, 0x13F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F188u;
label_13f188:
    // 0x13f188: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f18c: 0xbd8821  addu        $s1, $a1, $sp
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f190: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x13f194: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x13f194u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f198: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f19c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13f1a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13f1a4: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x13f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1a8: 0x24d11570  addiu       $s1, $a2, 0x1570
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 5488));
    // 0x13f1ac: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x13f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x13f1b0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f1b4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1b8: 0x24910180  addiu       $s1, $a0, 0x180
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x13f1bc: 0x7a300000  lq          $s0, 0x0($s1)
    ctx->pc = 0x13f1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f1c0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f1c4: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x13f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13f1c8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f1cc: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f1d0: 0x24a61580  addiu       $a2, $a1, 0x1580
    ctx->pc = 0x13f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    // 0x13f1d4: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x13f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x13f1d8: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13f1dc: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x13f1e0: 0x24a601b0  addiu       $a2, $a1, 0x1B0
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f1e4: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x13f1e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f1e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f1ec: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13f1f0: 0x49100  sll         $s2, $a0, 4
    ctx->pc = 0x13f1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13f1f4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x13f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x13f1f8: 0x244515a0  addiu       $a1, $v0, 0x15A0
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
    // 0x13f1fc: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x13f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x13f200: 0x8fa6166c  lw          $a2, 0x166C($sp)
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13f204: 0x94c4fff8  lhu         $a0, -0x8($a2)
    ctx->pc = 0x13f204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x13f208: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13f208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13f20c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f210: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f214: 0xace50210  sw          $a1, 0x210($a3)
    ctx->pc = 0x13f214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 528), GPR_U32(ctx, 5));
    // 0x13f218: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13f21c: 0x9444fffa  lhu         $a0, -0x6($v0)
    ctx->pc = 0x13f21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967290)));
    // 0x13f220: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13f220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13f224: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f228: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f22c: 0xacc50214  sw          $a1, 0x214($a2)
    ctx->pc = 0x13f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 5));
    // 0x13f230: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13f234: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f238: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f23c: 0xaca20218  sw          $v0, 0x218($a1)
    ctx->pc = 0x13f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 536), GPR_U32(ctx, 2));
    // 0x13f240: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f244: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f248: 0xace0021c  sw          $zero, 0x21C($a3)
    ctx->pc = 0x13f248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 540), GPR_U32(ctx, 0));
    // 0x13f24c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f250: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f254: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f258: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f25c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x13f260: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x13f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x13f264: 0xc0675e4  jal         func_19D790
    ctx->pc = 0x13F264u;
    SET_GPR_U32(ctx, 31, 0x13F26Cu);
    ctx->pc = 0x19D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D790u, 0x13F264u, 0x13F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F26Cu;
label_13f26c:
    // 0x13f26c: 0x92a4fff8  lbu         $a0, -0x8($s5)
    ctx->pc = 0x13f26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x13f270: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x13f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13f274: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f278: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f27c: 0xaca301e0  sw          $v1, 0x1E0($a1)
    ctx->pc = 0x13f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 480), GPR_U32(ctx, 3));
    // 0x13f280: 0x92a6fff9  lbu         $a2, -0x7($s5)
    ctx->pc = 0x13f280u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967289)));
    // 0x13f284: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x13f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x13f288: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f28c: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f290: 0xac6201e4  sw          $v0, 0x1E4($v1)
    ctx->pc = 0x13f290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 484), GPR_U32(ctx, 2));
    // 0x13f294: 0x92a2fffa  lbu         $v0, -0x6($s5)
    ctx->pc = 0x13f294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967290)));
    // 0x13f298: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13f29c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2a0: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f2a4: 0xac4501e8  sw          $a1, 0x1E8($v0)
    ctx->pc = 0x13f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 5));
    // 0x13f2a8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x13f2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13f2ac: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2b0: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f2b4: 0xac6501ec  sw          $a1, 0x1EC($v1)
    ctx->pc = 0x13f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 5));
    // 0x13f2b8: 0xc680ffe8  lwc1        $f0, -0x18($s4)
    ctx->pc = 0x13f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2bc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2c0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f2c4: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x13f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x13f2c8: 0xc680ffec  lwc1        $f0, -0x14($s4)
    ctx->pc = 0x13f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2cc: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2d0: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f2d4: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x13f2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x13f2d8: 0xc680fff0  lwc1        $f0, -0x10($s4)
    ctx->pc = 0x13f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f2dc: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x13f2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2e0: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13f2e4: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x13f2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x13f2e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13f2ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f2ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2f0: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f2f4: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f2f8: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x13f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
    // 0x13f2fc: 0xc6e0ffe8  lwc1        $f0, -0x18($s7)
    ctx->pc = 0x13f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f300: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f304: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f308: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x13f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x13f30c: 0xc6e0ffec  lwc1        $f0, -0x14($s7)
    ctx->pc = 0x13f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f310: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f314: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f318: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x13f318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x13f31c: 0xc6e0fff0  lwc1        $f0, -0x10($s7)
    ctx->pc = 0x13f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f320: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f324: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x13f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f328: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x13f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x13f32c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13f330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f334: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f338: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f33c: 0xe440018c  swc1        $f0, 0x18C($v0)
    ctx->pc = 0x13f33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
    // 0x13f340: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f344: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f348: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f34c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f350: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f354: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f358: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x13f358u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f35c: 0xf33021  addu        $a2, $a3, $s3
    ctx->pc = 0x13f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x13f360: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13f364: 0x9d4021  addu        $t0, $a0, $sp
    ctx->pc = 0x13f364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f368: 0x8fa41678  lw          $a0, 0x1678($sp)
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5752)));
    // 0x13f36c: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x13f370: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x13f374: 0x244701e0  addiu       $a3, $v0, 0x1E0
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x13f378: 0x25081590  addiu       $t0, $t0, 0x1590
    ctx->pc = 0x13f378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5520));
    // 0x13f37c: 0xc05da54  jal         func_176950
    ctx->pc = 0x13F37Cu;
    SET_GPR_U32(ctx, 31, 0x13F384u);
    ctx->pc = 0x176950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176950u, 0x13F37Cu, 0x13F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F384u;
label_13f384:
    // 0x13f384: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x13f384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f388: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13f38c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13f390: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13f394: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f398: 0x9d4821  addu        $t1, $a0, $sp
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f39c: 0x250515b0  addiu       $a1, $t0, 0x15B0
    ctx->pc = 0x13f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 5552));
    // 0x13f3a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13f3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13f3a4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13f3a8: 0x25260150  addiu       $a2, $t1, 0x150
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x13f3ac: 0xc04f958  jal         func_13E560
    ctx->pc = 0x13F3ACu;
    SET_GPR_U32(ctx, 31, 0x13F3B4u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x13F3ACu, 0x13F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3B4u;
label_13f3b4:
    // 0x13f3b4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13f3b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f3b8: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f3bc: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x13f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x13f3c0: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x13f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x13f3c4: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x13f3c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f3c8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f3cc: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13f3d0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x13f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13f3d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f3d8: 0x24441570  addiu       $a0, $v0, 0x1570
    ctx->pc = 0x13f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5488));
    // 0x13f3dc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13f3e0: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f3e4: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13f3e8: 0x24c20180  addiu       $v0, $a2, 0x180
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x13f3ec: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x13f3ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f3f0: 0x134080  sll         $t0, $s3, 2
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f3f4: 0x1131021  addu        $v0, $t0, $s3
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x13f3f8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13f3fc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x13f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x13f400: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x13f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x13f404: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x13f404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x13f408: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x13f408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x13f40c: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f410: 0x24be01b0  addiu       $fp, $a1, 0x1B0
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x13f414: 0x7bc40000  lq          $a0, 0x0($fp)
    ctx->pc = 0x13f414u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13f418: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13f418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13f41c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x13f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13f420: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13f424: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x13f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13f428: 0x24a315a0  addiu       $v1, $a1, 0x15A0
    ctx->pc = 0x13f428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    // 0x13f42c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13f430: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f434: 0xafa31674  sw          $v1, 0x1674($sp)
    ctx->pc = 0x13f434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5748), GPR_U32(ctx, 3));
    // 0x13f438: 0x8fa31694  lw          $v1, 0x1694($sp)
    ctx->pc = 0x13f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13f43c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x13f43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13f440: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x13f440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x13f444: 0x733fc  dsll32      $a2, $a3, 15
    ctx->pc = 0x13f444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 15));
    // 0x13f448: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13f44c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x13f44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13f450: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x13f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x13f454: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13f458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13f45c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x13f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13f460: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f464: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x13f464u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x13f468: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x13f46c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f470: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x13f470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x13f474: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f478: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13f478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x13f47c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f480: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13f484: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13f488: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
    // 0x13f48c: 0x8fa61684  lw          $a2, 0x1684($sp)
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13f490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f494: 0x10c70123  beq         $a2, $a3, . + 4 + (0x123 << 2)
    ctx->pc = 0x13F494u;
    {
        const bool branch_taken_0x13f494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x13f494) {
            ctx->pc = 0x13F924u;
            goto label_13f924;
        }
    }
    ctx->pc = 0x13F49Cu;
    // 0x13f49c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F49Cu;
    {
        const bool branch_taken_0x13f49c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f49c) {
            ctx->pc = 0x13F4ACu;
            goto label_13f4ac;
        }
    }
    ctx->pc = 0x13F4A4u;
    // 0x13f4a4: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x13F4A4u;
    {
        const bool branch_taken_0x13f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4a4) {
            ctx->pc = 0x13FF28u;
            goto label_13ff28;
        }
    }
    ctx->pc = 0x13F4ACu;
label_13f4ac:
    // 0x13f4ac: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4b0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f4b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f4b8: 0x27be0150  addiu       $fp, $sp, 0x150
    ctx->pc = 0x13f4b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13f4bc: 0x73c03628  paddub      $a2, $fp, $zero
    ctx->pc = 0x13f4bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x13f4c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f4c4: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f4c8: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F4C8u;
    SET_GPR_U32(ctx, 31, 0x13F4D0u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F4C8u, 0x13F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4D0u;
label_13f4d0:
    // 0x13f4d0: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x13f4d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F4D8u;
    SET_GPR_U32(ctx, 31, 0x13F4E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F4E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F4E0u) { return; }
    ctx->pc = 0x13F4E0u;
label_13f4e0:
    // 0x13f4e0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13f4e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f4e8: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4ec: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f4f0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F4F0u;
    SET_GPR_U32(ctx, 31, 0x13F4F8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F4F8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F4F8u) { return; }
    ctx->pc = 0x13F4F8u;
label_13f4f8:
    // 0x13f4f8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4fc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f500: 0x27a51590  addiu       $a1, $sp, 0x1590
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5520));
    // 0x13f504: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F504u;
    SET_GPR_U32(ctx, 31, 0x13F50Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F50Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F50Cu) { return; }
    ctx->pc = 0x13F50Cu;
label_13f50c:
    // 0x13f50c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x13f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f510: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f514: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x13f514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x13f518: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f51c: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x13f520: 0xafa716a8  sw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 7));
    // 0x13f524: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f528: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f52c: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F52Cu;
    SET_GPR_U32(ctx, 31, 0x13F534u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F52Cu, 0x13F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F534u;
label_13f534:
    // 0x13f534: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f534u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f538: 0x32020820  andi        $v0, $s0, 0x820
    ctx->pc = 0x13f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13f53c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F53Cu;
    {
        const bool branch_taken_0x13f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f53c) {
            ctx->pc = 0x13F568u;
            goto label_13f568;
        }
    }
    ctx->pc = 0x13F544u;
    // 0x13f544: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x13f548: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13f548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f54c: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f550: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f554: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f558: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f55c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F55Cu;
    SET_GPR_U32(ctx, 31, 0x13F564u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F55Cu, 0x13F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F564u;
label_13f564:
    // 0x13f564: 0x0  nop
    ctx->pc = 0x13f564u;
    // NOP
label_13f568:
    // 0x13f568: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f56c: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f570: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F570u;
    SET_GPR_U32(ctx, 31, 0x13F578u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F570u, 0x13F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F578u;
label_13f578:
    // 0x13f578: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f578u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f57c: 0x32030104  andi        $v1, $s0, 0x104
    ctx->pc = 0x13f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13f580: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F580u;
    {
        const bool branch_taken_0x13f580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f580) {
            ctx->pc = 0x13F5A8u;
            goto label_13f5a8;
        }
    }
    ctx->pc = 0x13F588u;
    // 0x13f588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13f58c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f590: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f594: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f598: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f5a0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F5A0u;
    SET_GPR_U32(ctx, 31, 0x13F5A8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F5A0u, 0x13F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5A8u;
label_13f5a8:
    // 0x13f5a8: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5ac: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5b0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F5B0u;
    SET_GPR_U32(ctx, 31, 0x13F5B8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F5B0u, 0x13F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B8u;
label_13f5b8:
    // 0x13f5b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f5b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f5bc: 0x32080208  andi        $t0, $s0, 0x208
    ctx->pc = 0x13f5bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13f5c0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F5C0u;
    {
        const bool branch_taken_0x13f5c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5c0) {
            ctx->pc = 0x13F5E8u;
            goto label_13f5e8;
        }
    }
    ctx->pc = 0x13F5C8u;
    // 0x13f5c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13f5cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f5d0: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5d4: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5d8: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f5e0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F5E0u;
    SET_GPR_U32(ctx, 31, 0x13F5E8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F5E0u, 0x13F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5E8u;
label_13f5e8:
    // 0x13f5e8: 0x27a81570  addiu       $t0, $sp, 0x1570
    ctx->pc = 0x13f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5ec: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x13f5ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13f5f0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5f4: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F5F4u;
    SET_GPR_U32(ctx, 31, 0x13F5FCu);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F5F4u, 0x13F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5FCu;
label_13f5fc:
    // 0x13f5fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f5fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f600: 0x32050041  andi        $a1, $s0, 0x41
    ctx->pc = 0x13f600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13f604: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F604u;
    {
        const bool branch_taken_0x13f604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f604) {
            ctx->pc = 0x13F630u;
            goto label_13f630;
        }
    }
    ctx->pc = 0x13F60Cu;
    // 0x13f60c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x13f60cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x13f610: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x13f610u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f614: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f618: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f61c: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f624: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F624u;
    SET_GPR_U32(ctx, 31, 0x13F62Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F624u, 0x13F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F62Cu;
label_13f62c:
    // 0x13f62c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13f62cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13f630:
    // 0x13f630: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f634: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f638: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F638u;
    SET_GPR_U32(ctx, 31, 0x13F640u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F638u, 0x13F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F640u;
label_13f640:
    // 0x13f640: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f640u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f644: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x13f644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f648: 0x32070082  andi        $a3, $s0, 0x82
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13f64c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x13F64Cu;
    {
        const bool branch_taken_0x13f64c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f64c) {
            ctx->pc = 0x13F678u;
            goto label_13f678;
        }
    }
    ctx->pc = 0x13F654u;
    // 0x13f654: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x13f654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
    // 0x13f658: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x13f658u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f65c: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f660: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f664: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f668: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f66c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f66cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f670: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F670u;
    SET_GPR_U32(ctx, 31, 0x13F678u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F670u, 0x13F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F678u;
label_13f678:
    // 0x13f678: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f67c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13f680: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f684: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f688: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f68c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f68cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f690: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f694: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F694u;
    SET_GPR_U32(ctx, 31, 0x13F69Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F694u, 0x13F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F69Cu;
label_13f69c:
    // 0x13f69c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6a4: 0x27a515f0  addiu       $a1, $sp, 0x15F0
    ctx->pc = 0x13f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5616));
    // 0x13f6a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F6A8u;
    SET_GPR_U32(ctx, 31, 0x13F6B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F6B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6B0u) { return; }
    ctx->pc = 0x13F6B0u;
label_13f6b0:
    // 0x13f6b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13f6b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6b4: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6b8: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6bc: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f6c0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F6C0u;
    SET_GPR_U32(ctx, 31, 0x13F6C8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F6C8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6C8u) { return; }
    ctx->pc = 0x13F6C8u;
label_13f6c8:
    // 0x13f6c8: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6cc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13f6d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6d4: 0x27a615e0  addiu       $a2, $sp, 0x15E0
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5600));
    // 0x13f6d8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13f6d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f6dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F6DCu;
    SET_GPR_U32(ctx, 31, 0x13F6E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F6E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6E4u) { return; }
    ctx->pc = 0x13F6E4u;
label_13f6e4:
    // 0x13f6e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13f6e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f6ec: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6f0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13f6f4: 0x8fb116a8  lw          $s1, 0x16A8($sp)
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6f8: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f6fc: 0xafb016a8  sw          $s0, 0x16A8($sp)
    ctx->pc = 0x13f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 16));
    // 0x13f700: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f704: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f708: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F708u;
    SET_GPR_U32(ctx, 31, 0x13F710u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F708u, 0x13F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F710u;
label_13f710:
    // 0x13f710: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f710u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f714: 0x32050820  andi        $a1, $s0, 0x820
    ctx->pc = 0x13f714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13f718: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13F718u;
    {
        const bool branch_taken_0x13f718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f718) {
            ctx->pc = 0x13F748u;
            goto label_13f748;
        }
    }
    ctx->pc = 0x13F720u;
    // 0x13f720: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x13f724: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f724u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f728: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f72c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13f72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f730: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f734: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f738: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f73c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F73Cu;
    SET_GPR_U32(ctx, 31, 0x13F744u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F73Cu, 0x13F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F744u;
label_13f744:
    // 0x13f744: 0x0  nop
    ctx->pc = 0x13f744u;
    // NOP
label_13f748:
    // 0x13f748: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f74c: 0x27b21610  addiu       $s2, $sp, 0x1610
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f750: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13f750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13f754: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F754u, 0x13F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f75cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f760: 0x32050104  andi        $a1, $s0, 0x104
    ctx->pc = 0x13f760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13f764: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F790u;
            goto label_13f790;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x13f770: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f774: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f778: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f77c: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f784: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F784u;
    SET_GPR_U32(ctx, 31, 0x13F78Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F784u, 0x13F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F78Cu;
label_13f78c:
    // 0x13f78c: 0x0  nop
    ctx->pc = 0x13f78cu;
    // NOP
label_13f790:
    // 0x13f790: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f794: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f798: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F798u;
    SET_GPR_U32(ctx, 31, 0x13F7A0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F798u, 0x13F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7A0u;
label_13f7a0:
    // 0x13f7a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f7a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f7a4: 0x32060208  andi        $a2, $s0, 0x208
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13f7a8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F7A8u;
    {
        const bool branch_taken_0x13f7a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7a8) {
            ctx->pc = 0x13F7D0u;
            goto label_13f7d0;
        }
    }
    ctx->pc = 0x13F7B0u;
    // 0x13f7b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13f7b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7b8: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7bc: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f7c0: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f7c8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F7C8u;
    SET_GPR_U32(ctx, 31, 0x13F7D0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F7C8u, 0x13F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7D0u;
label_13f7d0:
    // 0x13f7d0: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f7d4: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7d8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F7D8u;
    SET_GPR_U32(ctx, 31, 0x13F7E0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F7D8u, 0x13F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7E0u;
label_13f7e0:
    // 0x13f7e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f7e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f7e4: 0x32040041  andi        $a0, $s0, 0x41
    ctx->pc = 0x13f7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13f7e8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13F7E8u;
    {
        const bool branch_taken_0x13f7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7e8) {
            ctx->pc = 0x13F818u;
            goto label_13f818;
        }
    }
    ctx->pc = 0x13F7F0u;
    // 0x13f7f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13f7f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13f7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7f8: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f7fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f800: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f804: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f808: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f808u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f80c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F80Cu;
    SET_GPR_U32(ctx, 31, 0x13F814u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F80Cu, 0x13F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F814u;
label_13f814:
    // 0x13f814: 0x0  nop
    ctx->pc = 0x13f814u;
    // NOP
label_13f818:
    // 0x13f818: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f81c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13f81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13f820: 0x27a31610  addiu       $v1, $sp, 0x1610
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f824: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13f824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13f828: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F828u;
    SET_GPR_U32(ctx, 31, 0x13F830u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F828u, 0x13F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F830u;
label_13f830:
    // 0x13f830: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f830u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f834: 0x32050082  andi        $a1, $s0, 0x82
    ctx->pc = 0x13f834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13f838: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13F838u;
    {
        const bool branch_taken_0x13f838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f838) {
            ctx->pc = 0x13F868u;
            goto label_13f868;
        }
    }
    ctx->pc = 0x13F840u;
    // 0x13f840: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x13f844: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f844u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f848: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f84c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f84cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f850: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f854: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f858: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f858u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f85c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F85Cu;
    SET_GPR_U32(ctx, 31, 0x13F864u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F85Cu, 0x13F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F864u;
label_13f864:
    // 0x13f864: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13f864u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13f868:
    // 0x13f868: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f86c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f870: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f874: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f878: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f878u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f87c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f87cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f880: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f884: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F884u;
    SET_GPR_U32(ctx, 31, 0x13F88Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F884u, 0x13F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F88Cu;
label_13f88c:
    // 0x13f88c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f890: 0x27a51640  addiu       $a1, $sp, 0x1640
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13f894: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F894u;
    SET_GPR_U32(ctx, 31, 0x13F89Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F89Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F89Cu) { return; }
    ctx->pc = 0x13F89Cu;
label_13f89c:
    // 0x13f89c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8a0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8a4: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f8a8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F8B0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F8B0u) { return; }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8b4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f8b8: 0x27a51630  addiu       $a1, $sp, 0x1630
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13f8bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F8BCu;
    SET_GPR_U32(ctx, 31, 0x13F8C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F8C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F8C4u) { return; }
    ctx->pc = 0x13F8C4u;
label_13f8c4:
    // 0x13f8c4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8c8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x13f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x13f8cc: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13f8d4: 0xafa216a8  sw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 2));
    // 0x13f8d8: 0x8fa51680  lw          $a1, 0x1680($sp)
    ctx->pc = 0x13f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13f8dc: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x13f8e0: 0xafa21680  sw          $v0, 0x1680($sp)
    ctx->pc = 0x13f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 2));
    // 0x13f8e4: 0x8fa31694  lw          $v1, 0x1694($sp)
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13f8e8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x13f8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13f8ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13f8f0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x13f8f4: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13f8f8: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x13f8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13f8fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f900: 0x864025  or          $t0, $a0, $a2
    ctx->pc = 0x13f900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13f904: 0x482025  or          $a0, $v0, $t0
    ctx->pc = 0x13f904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13f908: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x13f908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x13f90c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13f90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13f910: 0x863825  or          $a3, $a0, $a2
    ctx->pc = 0x13f910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13f914: 0x8fa81674  lw          $t0, 0x1674($sp)
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13f918: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x13f918u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x13f91c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x13F91Cu;
    {
        const bool branch_taken_0x13f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f91c) {
            ctx->pc = 0x13FF28u;
            goto label_13ff28;
        }
    }
    ctx->pc = 0x13F924u;
label_13f924:
    // 0x13f924: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f928: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f92c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f930: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13f930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13f934: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x13f938: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f93c: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f940: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F940u;
    SET_GPR_U32(ctx, 31, 0x13F948u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F940u, 0x13F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F948u;
label_13f948:
    // 0x13f948: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f94c: 0x8fa916a8  lw          $t1, 0x16A8($sp)
    ctx->pc = 0x13f94cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f950: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x13f950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x13f954: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x13f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x13f958: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F958u;
    SET_GPR_U32(ctx, 31, 0x13F960u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F960u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F960u) { return; }
    ctx->pc = 0x13F960u;
label_13f960:
    // 0x13f960: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f964: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f968: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f96c: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f970: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x13f970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f974: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f978: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F978u;
    SET_GPR_U32(ctx, 31, 0x13F980u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F980u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F980u) { return; }
    ctx->pc = 0x13F980u;
label_13f980:
    // 0x13f980: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13f980u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f984: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f988: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f98c: 0x27a515e0  addiu       $a1, $sp, 0x15E0
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5600));
    // 0x13f990: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F990u;
    SET_GPR_U32(ctx, 31, 0x13F998u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F998u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F998u) { return; }
    ctx->pc = 0x13F998u;
label_13f998:
    // 0x13f998: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x13f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f99c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9a0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x13f9a4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9a8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13f9ac: 0xafa416a8  sw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 4));
    // 0x13f9b0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9b4: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x13f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13f9b8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f9b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f9bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f9c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f9c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9c4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x13f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13f9c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f9c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f9cc: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f9d0: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F9D0u;
    SET_GPR_U32(ctx, 31, 0x13F9D8u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F9D0u, 0x13F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9dc: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x13f9e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F9E4u;
    SET_GPR_U32(ctx, 31, 0x13F9ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F9ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F9ECu) { return; }
    ctx->pc = 0x13F9ECu;
label_13f9ec:
    // 0x13f9ec: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9f4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9f8: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f9fc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F9FCu;
    SET_GPR_U32(ctx, 31, 0x13FA04u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FA04u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FA04u) { return; }
    ctx->pc = 0x13FA04u;
label_13fa04:
    // 0x13fa04: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x13fa04u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa08: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa0c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x13fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13fa10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fa10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa14: 0x27a51590  addiu       $a1, $sp, 0x1590
    ctx->pc = 0x13fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5520));
    // 0x13fa18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FA18u;
    SET_GPR_U32(ctx, 31, 0x13FA20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FA20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FA20u) { return; }
    ctx->pc = 0x13FA20u;
label_13fa20:
    // 0x13fa20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13fa20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13fa24: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa28: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x13fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x13fa2c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa30: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13fa34: 0xafa316a8  sw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 3));
    // 0x13fa38: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa3c: 0x27a61250  addiu       $a2, $sp, 0x1250
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x13fa40: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x13fa40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fa44: 0x78e40010  lq          $a0, 0x10($a3)
    ctx->pc = 0x13fa44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13fa48: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x13fa48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13fa4c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x13fa4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13fa50: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x13fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x13fa54: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x13fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x13fa58: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x13fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x13fa5c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x13fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x13fa60: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x13fa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x13fa64: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x13fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x13fa68: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fa6c: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa70: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FA70u;
    SET_GPR_U32(ctx, 31, 0x13FA78u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FA70u, 0x13FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA78u;
label_13fa78:
    // 0x13fa78: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fa78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa7c: 0x32030820  andi        $v1, $s0, 0x820
    ctx->pc = 0x13fa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13fa80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA80u;
    {
        const bool branch_taken_0x13fa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa80) {
            ctx->pc = 0x13FAA8u;
            goto label_13faa8;
        }
    }
    ctx->pc = 0x13FA88u;
    // 0x13fa88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fa8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fa90: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa94: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fa98: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13fa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13faa0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FAA0u;
    SET_GPR_U32(ctx, 31, 0x13FAA8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FAA0u, 0x13FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAA8u;
label_13faa8:
    // 0x13faa8: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13faac: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fab0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FAB0u;
    SET_GPR_U32(ctx, 31, 0x13FAB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FAB0u, 0x13FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAB8u;
label_13fab8:
    // 0x13fab8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x13fab8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fabc: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x13fabcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x13fac0: 0x32080104  andi        $t0, $s0, 0x104
    ctx->pc = 0x13fac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13fac4: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FAC4u;
    {
        const bool branch_taken_0x13fac4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fac4) {
            ctx->pc = 0x13FAF8u;
            goto label_13faf8;
        }
    }
    ctx->pc = 0x13FACCu;
    // 0x13facc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13fad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fad4: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fad8: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fadc: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fae0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fae8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FAE8u;
    SET_GPR_U32(ctx, 31, 0x13FAF0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FAE8u, 0x13FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAF0u;
label_13faf0:
    // 0x13faf0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13faf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13faf4: 0x0  nop
    ctx->pc = 0x13faf4u;
    // NOP
label_13faf8:
    // 0x13faf8: 0x27a21570  addiu       $v0, $sp, 0x1570
    ctx->pc = 0x13faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fafc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb00: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb04: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fb04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb08: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FB08u;
    SET_GPR_U32(ctx, 31, 0x13FB10u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FB08u, 0x13FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB10u;
label_13fb10:
    // 0x13fb10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fb10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x13fb14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13fb18: 0x32050208  andi        $a1, $s0, 0x208
    ctx->pc = 0x13fb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13fb1c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13FB1Cu;
    {
        const bool branch_taken_0x13fb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb1c) {
            ctx->pc = 0x13FB48u;
            goto label_13fb48;
        }
    }
    ctx->pc = 0x13FB24u;
    // 0x13fb24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fb28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fb2c: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb30: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb34: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fb3c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FB3Cu;
    SET_GPR_U32(ctx, 31, 0x13FB44u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FB3Cu, 0x13FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB44u;
label_13fb44:
    // 0x13fb44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fb44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13fb48:
    // 0x13fb48: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fb4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fb50: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fb54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb58: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FB58u;
    SET_GPR_U32(ctx, 31, 0x13FB60u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FB58u, 0x13FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB60u;
label_13fb60:
    // 0x13fb60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fb60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb64: 0x32030041  andi        $v1, $s0, 0x41
    ctx->pc = 0x13fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13fb68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13FB68u;
    {
        const bool branch_taken_0x13fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb68) {
            ctx->pc = 0x13FBA0u;
            goto label_13fba0;
        }
    }
    ctx->pc = 0x13FB70u;
    // 0x13fb70: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13fb74: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fb74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fb78: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb7c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fb7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fb80: 0x27a61570  addiu       $a2, $sp, 0x1570
    ctx->pc = 0x13fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb84: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fb84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fb88: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb8c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x13fb8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fb90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fb90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fb94: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FB94u;
    SET_GPR_U32(ctx, 31, 0x13FB9Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FB94u, 0x13FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB9Cu;
label_13fb9c:
    // 0x13fb9c: 0x0  nop
    ctx->pc = 0x13fb9cu;
    // NOP
label_13fba0:
    // 0x13fba0: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fba4: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fba8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FBA8u;
    SET_GPR_U32(ctx, 31, 0x13FBB0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FBA8u, 0x13FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB0u;
label_13fbb0:
    // 0x13fbb0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fbb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbb4: 0x32030082  andi        $v1, $s0, 0x82
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13fbb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13FBB8u;
    {
        const bool branch_taken_0x13fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbb8) {
            ctx->pc = 0x13FBE8u;
            goto label_13fbe8;
        }
    }
    ctx->pc = 0x13FBC0u;
    // 0x13fbc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fbc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fbc8: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbcc: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fbd0: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fbd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fbd8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FBD8u;
    SET_GPR_U32(ctx, 31, 0x13FBE0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FBD8u, 0x13FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBE0u;
label_13fbe0:
    // 0x13fbe0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fbe0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbe4: 0x0  nop
    ctx->pc = 0x13fbe4u;
    // NOP
label_13fbe8:
    // 0x13fbe8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fbec: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13fbf0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13fbf4: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbfc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fbfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fc00: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13fc04: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13FC04u;
    SET_GPR_U32(ctx, 31, 0x13FC0Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13FC04u, 0x13FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC0Cu;
label_13fc0c:
    // 0x13fc0c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc10: 0x27a51640  addiu       $a1, $sp, 0x1640
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13fc14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FC14u;
    SET_GPR_U32(ctx, 31, 0x13FC1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FC1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC1Cu) { return; }
    ctx->pc = 0x13FC1Cu;
label_13fc1c:
    // 0x13fc1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fc1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc20: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc24: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13fc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fc28: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc30: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fc34: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13FC34u;
    SET_GPR_U32(ctx, 31, 0x13FC3Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FC3Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC3Cu) { return; }
    ctx->pc = 0x13FC3Cu;
label_13fc3c:
    // 0x13fc3c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13fc3cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc40: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc44: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fc48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc4c: 0x27a51630  addiu       $a1, $sp, 0x1630
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13fc50: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FC50u;
    SET_GPR_U32(ctx, 31, 0x13FC58u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FC58u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC58u) { return; }
    ctx->pc = 0x13FC58u;
label_13fc58:
    // 0x13fc58: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fc58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc5c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc60: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x13fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13fc64: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc68: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13fc6c: 0xafa616a8  sw          $a2, 0x16A8($sp)
    ctx->pc = 0x13fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 6));
    // 0x13fc70: 0x27a31250  addiu       $v1, $sp, 0x1250
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x13fc74: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fc78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x13fc78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fc7c: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x13fc7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13fc80: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x13fc80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13fc84: 0x78680030  lq          $t0, 0x30($v1)
    ctx->pc = 0x13fc84u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13fc88: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13fc8c: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x13fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x13fc90: 0x7c870020  sq          $a3, 0x20($a0)
    ctx->pc = 0x13fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 7));
    // 0x13fc94: 0x7c880030  sq          $t0, 0x30($a0)
    ctx->pc = 0x13fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 8));
    // 0x13fc98: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x13fc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x13fc9c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x13fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x13fca0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fca4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fca8: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fcac: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fcacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fcb0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FCB0u;
    SET_GPR_U32(ctx, 31, 0x13FCB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FCB0u, 0x13FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCB8u;
label_13fcb8:
    // 0x13fcb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fcb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcbc: 0x32030820  andi        $v1, $s0, 0x820
    ctx->pc = 0x13fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13fcc0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13FCC0u;
    {
        const bool branch_taken_0x13fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcc0) {
            ctx->pc = 0x13FCF8u;
            goto label_13fcf8;
        }
    }
    ctx->pc = 0x13FCC8u;
    // 0x13fcc8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x13fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x13fccc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fcccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fcd0: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fcd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcd8: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fcdc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fcdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fce0: 0x27a81610  addiu       $t0, $sp, 0x1610
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fce4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x13fce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13fce8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fcec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fcecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcf0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FCF0u;
    SET_GPR_U32(ctx, 31, 0x13FCF8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FCF0u, 0x13FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCF8u;
label_13fcf8:
    // 0x13fcf8: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fcfc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fcfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fd00: 0x27b11610  addiu       $s1, $sp, 0x1610
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13fd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd08: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FD08u;
    SET_GPR_U32(ctx, 31, 0x13FD10u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FD08u, 0x13FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD10u;
label_13fd10:
    // 0x13fd10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fd10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x13fd14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13fd18: 0x32050104  andi        $a1, $s0, 0x104
    ctx->pc = 0x13fd18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13fd1c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD1Cu;
    {
        const bool branch_taken_0x13fd1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd1c) {
            ctx->pc = 0x13FD50u;
            goto label_13fd50;
        }
    }
    ctx->pc = 0x13FD24u;
    // 0x13fd24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13fd28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd2c: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd30: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fd34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd38: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13fd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd40: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13fd40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd44: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FD44u;
    SET_GPR_U32(ctx, 31, 0x13FD4Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FD44u, 0x13FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD4Cu;
label_13fd4c:
    // 0x13fd4c: 0x0  nop
    ctx->pc = 0x13fd4cu;
    // NOP
label_13fd50:
    // 0x13fd50: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd54: 0x27b11610  addiu       $s1, $sp, 0x1610
    ctx->pc = 0x13fd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13fd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd5c: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FD5Cu;
    SET_GPR_U32(ctx, 31, 0x13FD64u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FD5Cu, 0x13FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD64u;
label_13fd64:
    // 0x13fd64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fd64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd68: 0x32040208  andi        $a0, $s0, 0x208
    ctx->pc = 0x13fd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13fd6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD6Cu;
    {
        const bool branch_taken_0x13fd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd6c) {
            ctx->pc = 0x13FDA0u;
            goto label_13fda0;
        }
    }
    ctx->pc = 0x13FD74u;
    // 0x13fd74: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x13fd78: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x13fd78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd7c: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fd80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd84: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd88: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd90: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FD90u;
    SET_GPR_U32(ctx, 31, 0x13FD98u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FD90u, 0x13FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD98u;
label_13fd98:
    // 0x13fd98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fd98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd9c: 0x0  nop
    ctx->pc = 0x13fd9cu;
    // NOP
label_13fda0:
    // 0x13fda0: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fda4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13fda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fda8: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdac: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x13fdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fdb0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FDB0u;
    SET_GPR_U32(ctx, 31, 0x13FDB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FDB0u, 0x13FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDB8u;
label_13fdb8:
    // 0x13fdb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fdb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fdbc: 0x32040041  andi        $a0, $s0, 0x41
    ctx->pc = 0x13fdbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13fdc0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13FDC0u;
    {
        const bool branch_taken_0x13fdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fdc0) {
            ctx->pc = 0x13FDF0u;
            goto label_13fdf0;
        }
    }
    ctx->pc = 0x13FDC8u;
    // 0x13fdc8: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x13fdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x13fdcc: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x13fdccu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fdd0: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fdd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fdd8: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fddc: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fde0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fde0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fde4: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FDE4u;
    SET_GPR_U32(ctx, 31, 0x13FDECu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FDE4u, 0x13FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDECu;
label_13fdec:
    // 0x13fdec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fdecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13fdf0:
    // 0x13fdf0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fdf4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fdf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fdf8: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdfc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fdfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fe00: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FE00u;
    SET_GPR_U32(ctx, 31, 0x13FE08u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FE00u, 0x13FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE08u;
label_13fe08:
    // 0x13fe08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fe08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe0c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x13fe0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fe10: 0x32020082  andi        $v0, $s0, 0x82
    ctx->pc = 0x13fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13fe14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FE14u;
    {
        const bool branch_taken_0x13fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe14) {
            ctx->pc = 0x13FE48u;
            goto label_13fe48;
        }
    }
    ctx->pc = 0x13FE1Cu;
    // 0x13fe1c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x13fe20: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fe20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fe24: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe28: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe2c: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fe30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fe30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe34: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fe38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fe3c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FE3Cu;
    SET_GPR_U32(ctx, 31, 0x13FE44u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FE3Cu, 0x13FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE44u;
label_13fe44:
    // 0x13fe44: 0x0  nop
    ctx->pc = 0x13fe44u;
    // NOP
label_13fe48:
    // 0x13fe48: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe4c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13fe50: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe54: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13fe58: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fe58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fe5c: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe60: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x13fe60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fe64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fe64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fe68: 0x27a21690  addiu       $v0, $sp, 0x1690
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13fe6c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13fe6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe70: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13FE70u;
    SET_GPR_U32(ctx, 31, 0x13FE78u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13FE70u, 0x13FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE78u;
label_13fe78:
    // 0x13fe78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fe78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe7c: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe80: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe84: 0x27a21640  addiu       $v0, $sp, 0x1640
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13fe88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fe88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FE8Cu;
    SET_GPR_U32(ctx, 31, 0x13FE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FE94u) { return; }
    ctx->pc = 0x13FE94u;
label_13fe94:
    // 0x13fe94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fe94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe98: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe9c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fea0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13fea0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13fea4: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fea8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13FEA8u;
    SET_GPR_U32(ctx, 31, 0x13FEB0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FEB0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FEB0u) { return; }
    ctx->pc = 0x13FEB0u;
label_13feb0:
    // 0x13feb0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13feb4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13feb8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13feb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13febc: 0x27a21630  addiu       $v0, $sp, 0x1630
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13fec0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fec4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FEC4u;
    SET_GPR_U32(ctx, 31, 0x13FECCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FECCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FECCu) { return; }
    ctx->pc = 0x13FECCu;
label_13fecc:
    // 0x13fecc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13feccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fed0: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fed4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x13fed8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fedc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13fee0: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13fee4: 0x8fa61680  lw          $a2, 0x1680($sp)
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13fee8: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x13fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13feec: 0xafa21680  sw          $v0, 0x1680($sp)
    ctx->pc = 0x13feecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 2));
    // 0x13fef0: 0x8fa51694  lw          $a1, 0x1694($sp)
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13fef4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13fef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13fef8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13fefc: 0x61bfc  dsll32      $v1, $a2, 15
    ctx->pc = 0x13fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 15));
    // 0x13ff00: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13ff04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ff08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ff0c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x13ff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13ff10: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x13ff10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ff14: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13ff18: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13ff18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ff1c: 0x1042825  or          $a1, $t0, $a0
    ctx->pc = 0x13ff1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x13ff20: 0x8fa21674  lw          $v0, 0x1674($sp)
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13ff24: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x13ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_13ff28:
    // 0x13ff28: 0x26e4000c  addiu       $a0, $s7, 0xC
    ctx->pc = 0x13ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x13ff2c: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x13ff2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ff30: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x13ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13ff34: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x13ff34u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ff38: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13ff3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13ff40: 0xafa2166c  sw          $v0, 0x166C($sp)
    ctx->pc = 0x13ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5740), GPR_U32(ctx, 2));
    // 0x13ff44: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x13ff48: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x13ff48u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ff4c: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x13ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13ff50: 0x70a0b628  paddub      $s6, $a1, $zero
    ctx->pc = 0x13ff50u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ff54: 0x8fa2167c  lw          $v0, 0x167C($sp)
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13ff58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ff5c: 0xafa2167c  sw          $v0, 0x167C($sp)
    ctx->pc = 0x13ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 2));
    // 0x13ff60: 0x1440fb47  bnez        $v0, . + 4 + (-0x4B9 << 2)
    ctx->pc = 0x13FF60u;
    {
        const bool branch_taken_0x13ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff60) {
            ctx->pc = 0x13EC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ec80;
        }
    }
    ctx->pc = 0x13FF68u;
    // 0x13ff68: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ff6c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x13ff70: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13ff74: 0x8fa5169c  lw          $a1, 0x169C($sp)
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ff78: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x13ff7c: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
label_13ff80:
    // 0x13ff80: 0x8fa31664  lw          $v1, 0x1664($sp)
    ctx->pc = 0x13ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5732)));
    // 0x13ff84: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13ff88: 0xafa21664  sw          $v0, 0x1664($sp)
    ctx->pc = 0x13ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5732), GPR_U32(ctx, 2));
    // 0x13ff8c: 0x1440fa64  bnez        $v0, . + 4 + (-0x59C << 2)
    ctx->pc = 0x13FF8Cu;
    {
        const bool branch_taken_0x13ff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff8c) {
            ctx->pc = 0x13E920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e920;
        }
    }
    ctx->pc = 0x13FF94u;
    // 0x13ff94: 0x8fa21674  lw          $v0, 0x1674($sp)
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13ff98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13FF98u;
    {
        const bool branch_taken_0x13ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff98) {
            ctx->pc = 0x140008u;
            goto label_140008;
        }
    }
    ctx->pc = 0x13FFA0u;
    // 0x13ffa0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ffa4: 0x8fa61670  lw          $a2, 0x1670($sp)
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x13ffa8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13ffac: 0xe44023  subu        $t0, $a3, $a0
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13ffb0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13ffb4: 0x82902  srl         $a1, $t0, 4
    ctx->pc = 0x13ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x13ffb8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13ffb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13ffbc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x13ffbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13ffc0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x13ffc4: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x13ffc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13ffc8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13ffcc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13ffd0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13ffd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13ffd4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x13ffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13ffd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13ffdc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13ffdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13ffe0: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x13ffe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13ffe4: 0x8fa41670  lw          $a0, 0x1670($sp)
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x13ffe8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x13ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x13ffec: 0x8fa91674  lw          $t1, 0x1674($sp)
    ctx->pc = 0x13ffecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13fff0: 0xdd250000  ld          $a1, 0x0($t1)
    ctx->pc = 0x13fff0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fff4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13fff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13fff8: 0x8fa61674  lw          $a2, 0x1674($sp)
    ctx->pc = 0x13fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13fffc: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x13fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x140000: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140000u;
    {
        const bool branch_taken_0x140000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140000) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x140008u;
label_140008:
    // 0x140008: 0x8fa71670  lw          $a3, 0x1670($sp)
    ctx->pc = 0x140008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x14000c: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x14000cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x140010: 0x8fa81670  lw          $t0, 0x1670($sp)
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5744)));
    // 0x140014: 0xafa816a8  sw          $t0, 0x16A8($sp)
    ctx->pc = 0x140014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 8));
label_140018:
    // 0x140018: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x14001c: 0x0  nop
    ctx->pc = 0x14001cu;
    // NOP
label_140020:
    // 0x140020: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x140020u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140024: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x140024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140028: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x140028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14002c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14002cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140030: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140034: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140038: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14003c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14003cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140048: 0x27bd16c0  addiu       $sp, $sp, 0x16C0
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5824));
    // 0x14004c: 0x3e00008  jr          $ra
    ctx->pc = 0x14004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14004Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140054u;
}
