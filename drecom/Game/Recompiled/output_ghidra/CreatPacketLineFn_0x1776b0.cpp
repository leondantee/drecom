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

// Function: CreatPacketLineFn
// Address: 0x1776b0 - 0x17786c
void CreatPacketLineFn_0x1776b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketLineFn_0x1776b0");
#endif

    switch (ctx->pc) {
        case 0x1777ccu: goto label_1777cc;
        default: break;
    }

    ctx->pc = 0x1776b0u;

    // 0x1776b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1776b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1776b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1776b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1776b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1776bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1776bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1776c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1776c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1776c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1776c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1776c8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1776c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1776cc: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x1776ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x1776d0: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x1776d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1776d4: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x1776d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1776d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1776d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1776dc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1776dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1776e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1776e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1776e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1776e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1776e8: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x1776e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1776ec: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1776ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1776f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1776f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1776f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1776f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1776f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1776fc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1776fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x177700: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177708: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17770c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177710: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177710u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177718: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17771c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x17771cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177720: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177724: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177728: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x177728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x17772c: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x17772cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x177730: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x177730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177734: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17773c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17773cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x177740: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177744: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177748: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17774c: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x17774cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x177750: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x177750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177754: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177758: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17775c: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x17775cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x177760: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x177760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177764: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177768: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17776c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177770: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177774: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x177774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x177778: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x177778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17777c: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x17777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x177780: 0x2147e  dsrl32      $v0, $v0, 17
    ctx->pc = 0x177780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x177784: 0x2453fffd  addiu       $s3, $v0, -0x3
    ctx->pc = 0x177784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x177788: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x177788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x17778c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177790: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x177790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x177794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17779c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1777a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1777a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1777a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1777ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777b0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1777b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1777b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1777b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1777bc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1777bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1777c0: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1777c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1777c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x177838u;
            goto label_177838;
        }
    }
    ctx->pc = 0x1777CCu;
label_1777cc:
    // 0x1777cc: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1777ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1777d0: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1777d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1777d8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1777d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1777dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1777e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1777e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1777e8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1777e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1777ec: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1777f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1777f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1777f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1777f8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1777f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1777fc: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x1777fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x177800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177804: 0x101a3c  dsll32      $v1, $s0, 8
    ctx->pc = 0x177804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 8));
    // 0x177808: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x17780c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177810: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177814: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x177814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x177818: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x177818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x17781c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x177820: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x177824: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17782c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177830: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x177830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x177834: 0x0  nop
    ctx->pc = 0x177834u;
    // NOP
label_177838:
    // 0x177838: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x177838u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x17783c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177840: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x177840u;
    {
        const bool branch_taken_0x177840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177840) {
            ctx->pc = 0x1777CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1777cc;
        }
    }
    ctx->pc = 0x177848u;
    // 0x177848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17784c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17784cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17785c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17785cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177860: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177864: 0x3e00008  jr          $ra
    ctx->pc = 0x177864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17786Cu;
}
