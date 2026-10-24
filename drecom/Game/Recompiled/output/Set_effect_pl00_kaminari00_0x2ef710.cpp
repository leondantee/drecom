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

// Function: Set_effect_pl00_kaminari00
// Address: 0x2ef710 - 0x2ef9d0
void Set_effect_pl00_kaminari00_0x2ef710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_kaminari00_0x2ef710");
#endif

    switch (ctx->pc) {
        case 0x2ef8dcu: goto label_2ef8dc;
        default: break;
    }

    ctx->pc = 0x2ef710u;

    // 0x2ef710: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ef710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ef714: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2ef714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2ef718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ef71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ef720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef72c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2ef72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2ef730: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2ef730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2ef734: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2ef734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x2ef738: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2ef738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2ef73c: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2ef73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x2ef740: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2ef740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x2ef744: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2ef744u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ef748: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2ef748u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ef74c: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2ef74cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ef750: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2ef750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x2ef754: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2ef754u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
    // 0x2ef758: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ef758u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef75c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ef75cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef760: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ef764: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF764u;
    {
        const bool branch_taken_0x2ef764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef764) {
            ctx->pc = 0x2EF794u;
            goto label_2ef794;
        }
    }
    ctx->pc = 0x2EF76Cu;
    // 0x2ef76c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF770u;
    {
        const bool branch_taken_0x2ef770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef770) {
            ctx->pc = 0x2EF784u;
            goto label_2ef784;
        }
    }
    ctx->pc = 0x2EF778u;
    // 0x2ef778: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ef778u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef77c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EF77Cu;
    {
        const bool branch_taken_0x2ef77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef77c) {
            ctx->pc = 0x2EF7B8u;
            goto label_2ef7b8;
        }
    }
    ctx->pc = 0x2EF784u;
label_2ef784:
    // 0x2ef784: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ef784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef788: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ef788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef78c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF78Cu;
    {
        const bool branch_taken_0x2ef78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef78c) {
            ctx->pc = 0x2EF7B8u;
            goto label_2ef7b8;
        }
    }
    ctx->pc = 0x2EF794u;
label_2ef794:
    // 0x2ef794: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ef794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef798: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF79Cu;
    {
        const bool branch_taken_0x2ef79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef79c) {
            ctx->pc = 0x2EF7B0u;
            goto label_2ef7b0;
        }
    }
    ctx->pc = 0x2EF7A4u;
    // 0x2ef7a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ef7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF7A8u;
    {
        const bool branch_taken_0x2ef7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7a8) {
            ctx->pc = 0x2EF7B8u;
            goto label_2ef7b8;
        }
    }
    ctx->pc = 0x2EF7B0u;
label_2ef7b0:
    // 0x2ef7b0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2ef7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef7b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ef7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef7b8:
    // 0x2ef7b8: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2ef7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ef7bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ef7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ef7c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7C0u;
    {
        const bool branch_taken_0x2ef7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7c0) {
            ctx->pc = 0x2EF7D4u;
            goto label_2ef7d4;
        }
    }
    ctx->pc = 0x2EF7C8u;
    // 0x2ef7c8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ef7c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef7cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF7CCu;
    {
        const bool branch_taken_0x2ef7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7cc) {
            ctx->pc = 0x2EF7D8u;
            goto label_2ef7d8;
        }
    }
    ctx->pc = 0x2EF7D4u;
label_2ef7d4:
    // 0x2ef7d4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ef7d4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ef7d8:
    // 0x2ef7d8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2ef7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2ef7dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef7e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ef7e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ef7e4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2ef7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2ef7e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef7ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ef7ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ef7f0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ef7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ef7f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ef7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef7f8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x2ef7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x2ef7fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ef7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef800: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ef800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2ef804: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2ef804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2ef808: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ef80c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef810: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ef810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ef814: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef818: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ef818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef81c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ef81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ef820: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef824: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef828: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef82c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef830: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef834: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ef834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef838: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ef838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef83c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ef83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef840: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef844: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef848: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef84c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef850: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef854: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ef854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef858: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ef858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ef85c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ef85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ef860: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef864: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef868: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef86c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef870: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef874: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ef874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef878: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ef878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef87c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef880: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef884: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef888: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef88c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef894: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ef894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef898: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ef898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ef89c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ef89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef8a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ef8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ef8a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef8a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ef8a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ef8ac: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2ef8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2ef8b0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2ef8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x2ef8b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ef8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef8b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ef8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ef8bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ef8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ef8c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ef8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef8c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ef8c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ef8c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ef8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ef8cc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ef8ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef8d0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ef8d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ef8d4: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2EF8D4u;
    SET_GPR_U32(ctx, 31, 0x2EF8DCu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EF8D4u, 0x2EF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8DCu;
label_2ef8dc:
    // 0x2ef8dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ef8dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ef8e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef8e4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef8e8: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2EF8E8u;
    {
        const bool branch_taken_0x2ef8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef8e8) {
            ctx->pc = 0x2EF9A4u;
            goto label_2ef9a4;
        }
    }
    ctx->pc = 0x2EF8F0u;
    // 0x2ef8f0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ef8f4: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x2ef8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef8fc: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x2ef8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef900: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef908: 0x0  nop
    ctx->pc = 0x2ef908u;
    // NOP
    // 0x2ef90c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ef90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2ef910: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef918: 0x0  nop
    ctx->pc = 0x2ef918u;
    // NOP
    // 0x2ef91c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ef91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2ef920: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef928: 0x0  nop
    ctx->pc = 0x2ef928u;
    // NOP
    // 0x2ef92c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ef92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2ef930: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ef930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef938: 0x0  nop
    ctx->pc = 0x2ef938u;
    // NOP
    // 0x2ef93c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ef93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2ef940: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef944: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ef944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2ef948: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ef948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef94c: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ef94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2ef950: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ef950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef954: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ef954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2ef958: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ef958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef95c: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ef95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2ef960: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef964: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ef964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef968: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ef968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2ef96c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef970: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ef970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef974: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ef974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2ef978: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef97c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ef97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef980: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ef980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2ef984: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ef984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef988: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ef988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2ef98c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ef98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ef990: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2ef990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef994: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ef994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef998: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2ef998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x2ef99c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF99Cu;
    {
        const bool branch_taken_0x2ef99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef99c) {
            ctx->pc = 0x2EF9ACu;
            goto label_2ef9ac;
        }
    }
    ctx->pc = 0x2EF9A4u;
label_2ef9a4:
    // 0x2ef9a4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF9A4u;
    {
        const bool branch_taken_0x2ef9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9a4) {
            ctx->pc = 0x2EF9ACu;
            goto label_2ef9ac;
        }
    }
    ctx->pc = 0x2EF9ACu;
label_2ef9ac:
    // 0x2ef9ac: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2ef9acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef9b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef9b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef9b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef9b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef9b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef9bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef9c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ef9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF9D0u;
}
