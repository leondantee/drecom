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

// Function: Set_effect_em18_kaminari01
// Address: 0x323300 - 0x323688
void Set_effect_em18_kaminari01_0x323300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em18_kaminari01_0x323300");
#endif

    switch (ctx->pc) {
        case 0x323548u: goto label_323548;
        case 0x323590u: goto label_323590;
        default: break;
    }

    ctx->pc = 0x323300u;

    // 0x323300: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x323300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x323304: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x323304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x323308: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x323308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32330c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x323310: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x323310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x323314: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x323314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x323318: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x323318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32331c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323328: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x323328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x32332c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x32332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x323330: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x323330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x323334: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x323334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x323338: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x323338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x32333c: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x32333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x323340: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x323340u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x323344: 0xe7ad00d0  swc1        $f13, 0xD0($sp)
    ctx->pc = 0x323344u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x323348: 0xe7ae00d8  swc1        $f14, 0xD8($sp)
    ctx->pc = 0x323348u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32334c: 0xafaa00e0  sw          $t2, 0xE0($sp)
    ctx->pc = 0x32334cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 10));
    // 0x323350: 0xa3ab00e8  sb          $t3, 0xE8($sp)
    ctx->pc = 0x323350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 232), (uint8_t)GPR_U32(ctx, 11));
    // 0x323354: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x323354u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323358: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x323358u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32335c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x32335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323360: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x323360u;
    {
        const bool branch_taken_0x323360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323360) {
            ctx->pc = 0x323390u;
            goto label_323390;
        }
    }
    ctx->pc = 0x323368u;
    // 0x323368: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x323368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32336c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32336Cu;
    {
        const bool branch_taken_0x32336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32336c) {
            ctx->pc = 0x323380u;
            goto label_323380;
        }
    }
    ctx->pc = 0x323374u;
    // 0x323374: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x323374u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323378: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x323378u;
    {
        const bool branch_taken_0x323378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323378) {
            ctx->pc = 0x3233B4u;
            goto label_3233b4;
        }
    }
    ctx->pc = 0x323380u;
label_323380:
    // 0x323380: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x323380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323384: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x323384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323388: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x323388u;
    {
        const bool branch_taken_0x323388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323388) {
            ctx->pc = 0x3233B4u;
            goto label_3233b4;
        }
    }
    ctx->pc = 0x323390u;
label_323390:
    // 0x323390: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323394: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x323394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323398: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323398u;
    {
        const bool branch_taken_0x323398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323398) {
            ctx->pc = 0x3233ACu;
            goto label_3233ac;
        }
    }
    ctx->pc = 0x3233A0u;
    // 0x3233a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3233a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3233a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3233A4u;
    {
        const bool branch_taken_0x3233a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233a4) {
            ctx->pc = 0x3233B4u;
            goto label_3233b4;
        }
    }
    ctx->pc = 0x3233ACu;
label_3233ac:
    // 0x3233ac: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3233acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3233b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3233b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3233b4:
    // 0x3233b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3233b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3233b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3233B8u;
    {
        const bool branch_taken_0x3233b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233b8) {
            ctx->pc = 0x3233CCu;
            goto label_3233cc;
        }
    }
    ctx->pc = 0x3233C0u;
    // 0x3233c0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x3233c0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3233c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3233C4u;
    {
        const bool branch_taken_0x3233c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233c4) {
            ctx->pc = 0x3233E0u;
            goto label_3233e0;
        }
    }
    ctx->pc = 0x3233CCu;
label_3233cc:
    // 0x3233cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3233d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3233d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3233d4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3233d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3233d8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3233d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3233dc: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x3233dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3233e0:
    // 0x3233e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3233e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3233E4u;
    {
        const bool branch_taken_0x3233e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233e4) {
            ctx->pc = 0x3233F8u;
            goto label_3233f8;
        }
    }
    ctx->pc = 0x3233ECu;
    // 0x3233ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x3233ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3233f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3233F0u;
    {
        const bool branch_taken_0x3233f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233f0) {
            ctx->pc = 0x32340Cu;
            goto label_32340c;
        }
    }
    ctx->pc = 0x3233F8u;
label_3233f8:
    // 0x3233f8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3233f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3233fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3233fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x323400: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x323404: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x323404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x323408: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32340c:
    // 0x32340c: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x32340cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x323410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323414: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323414u;
    {
        const bool branch_taken_0x323414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323414) {
            ctx->pc = 0x323428u;
            goto label_323428;
        }
    }
    ctx->pc = 0x32341Cu;
    // 0x32341c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32341cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x323420u;
    {
        const bool branch_taken_0x323420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323420) {
            ctx->pc = 0x32342Cu;
            goto label_32342c;
        }
    }
    ctx->pc = 0x323428u;
label_323428:
    // 0x323428: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x323428u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32342c:
    // 0x32342c: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x32342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x323430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x323430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x323434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323438: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x323438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x32343c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323440: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323444: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323448: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32344c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323454: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x323458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32345c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32345cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x323460: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x323460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x323464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323468: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32346c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323470: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323478: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32347c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x32347cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323480: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x323480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x323484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323488: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32348c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323490: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32349c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x32349cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3234a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3234a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3234a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3234b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3234b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3234b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3234b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3234b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3234b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3234bc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3234bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3234c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3234c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3234d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3234d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3234d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3234d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3234d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3234d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3234dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3234dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3234e0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x3234e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3234e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3234e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3234e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3234ec: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x3234f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3234f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3234f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323500: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32350c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x32350cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323510: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x323510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323514: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x323514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x323518: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32351c: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x32351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x323520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323524: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323528: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32352c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323530: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323538: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32353c: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x32353cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x323540: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x323540u;
    SET_GPR_U32(ctx, 31, 0x323548u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x323540u, 0x323548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323548u;
label_323548:
    // 0x323548: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x323548u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32354c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x32354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x323550: 0xa2220347  sb          $v0, 0x347($s1)
    ctx->pc = 0x323550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x323554: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x323554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x323558: 0xa222036b  sb          $v0, 0x36B($s1)
    ctx->pc = 0x323558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 875), (uint8_t)GPR_U32(ctx, 2));
    // 0x32355c: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x32355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x323560: 0xa222036c  sb          $v0, 0x36C($s1)
    ctx->pc = 0x323560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 876), (uint8_t)GPR_U32(ctx, 2));
    // 0x323564: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x323564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x323568: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x323568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x32356c: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x32356cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x323570: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x323570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x323574: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x323574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x323578: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x323578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x32357c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x323580: 0xa2220344  sb          $v0, 0x344($s1)
    ctx->pc = 0x323580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x323584: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x323584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x323588: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x323588u;
    SET_GPR_U32(ctx, 31, 0x323590u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x323588u, 0x323590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323590u;
label_323590:
    // 0x323590: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x323590u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x323594: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x323594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x323598: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x323598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x32359c: 0x1203002c  beq         $s0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x32359Cu;
    {
        const bool branch_taken_0x32359c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32359c) {
            ctx->pc = 0x323650u;
            goto label_323650;
        }
    }
    ctx->pc = 0x3235A4u;
    // 0x3235a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3235a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3235a8: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x3235a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x3235ac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235b4: 0x0  nop
    ctx->pc = 0x3235b4u;
    // NOP
    // 0x3235b8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x3235b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x3235bc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235c4: 0x0  nop
    ctx->pc = 0x3235c4u;
    // NOP
    // 0x3235c8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x3235c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x3235cc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235d4: 0x0  nop
    ctx->pc = 0x3235d4u;
    // NOP
    // 0x3235d8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x3235d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x3235dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235e4: 0x0  nop
    ctx->pc = 0x3235e4u;
    // NOP
    // 0x3235e8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x3235e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x3235ec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x3235ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3235f0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x3235f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x3235f4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3235f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3235f8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x3235f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x3235fc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3235fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323600: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x323600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x323604: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x323604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323608: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x323608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x32360c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323610: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x323610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323614: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x323614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x323618: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32361c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x32361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323620: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x323620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x323624: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323628: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x323628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32362c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x32362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x323630: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x323630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323634: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x323634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x323638: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x323638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32363c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x32363cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x323640: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x323640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x323644: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x323644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x323648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323648u;
    {
        const bool branch_taken_0x323648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323648) {
            ctx->pc = 0x323658u;
            goto label_323658;
        }
    }
    ctx->pc = 0x323650u;
label_323650:
    // 0x323650: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x323650u;
    {
        const bool branch_taken_0x323650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323650) {
            ctx->pc = 0x323658u;
            goto label_323658;
        }
    }
    ctx->pc = 0x323658u;
label_323658:
    // 0x323658: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x323658u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32365c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32365cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x323660: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x323660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x323664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323668: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x323668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32366c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32366cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32367c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x32367cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x323680: 0x3e00008  jr          $ra
    ctx->pc = 0x323680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323688u;
}
