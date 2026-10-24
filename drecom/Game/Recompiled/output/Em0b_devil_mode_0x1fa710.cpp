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

// Function: Em0b_devil_mode
// Address: 0x1fa710 - 0x1fab20
void Em0b_devil_mode_0x1fa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_devil_mode_0x1fa710");
#endif

    switch (ctx->pc) {
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1fab0cu: goto label_1fab0c;
        default: break;
    }

    ctx->pc = 0x1fa710u;

    // 0x1fa710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa714: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1fa714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fa718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa71c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1fa71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1fa720: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1fa720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1fa724: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa728: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa72c: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1fa72cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1fa730: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa734: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fa734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fa738: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1FA738u;
    {
        const bool branch_taken_0x1fa738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa738) {
            ctx->pc = 0x1FAB0Cu;
            goto label_1fab0c;
        }
    }
    ctx->pc = 0x1FA740u;
    // 0x1fa740: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1fa744: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1fa748: 0x2c6301f4  sltiu       $v1, $v1, 0x1F4
    ctx->pc = 0x1fa748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1fa74c: 0x146000ef  bnez        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1FA74Cu;
    {
        const bool branch_taken_0x1fa74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa74c) {
            ctx->pc = 0x1FAB0Cu;
            goto label_1fab0c;
        }
    }
    ctx->pc = 0x1FA754u;
    // 0x1fa754: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa758: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa75c: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1fa75cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1fa760: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa764: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fa764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fa768: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA768u;
    {
        const bool branch_taken_0x1fa768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa768) {
            ctx->pc = 0x1FA7F4u;
            goto label_1fa7f4;
        }
    }
    ctx->pc = 0x1FA770u;
    // 0x1fa770: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa774: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1fa774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1fa778: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1fa778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa77c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fa77cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa780: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FA780u;
    {
        const bool branch_taken_0x1fa780 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fa780) {
            ctx->pc = 0x1FA7F4u;
            goto label_1fa7f4;
        }
    }
    ctx->pc = 0x1FA788u;
    // 0x1fa788: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa78c: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x1fa78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x1fa790: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FA790u;
    {
        const bool branch_taken_0x1fa790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa790) {
            ctx->pc = 0x1FA7F4u;
            goto label_1fa7f4;
        }
    }
    ctx->pc = 0x1FA798u;
    // 0x1fa798: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa79c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1fa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa7a0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x1fa7a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1fa7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1fa7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa7ac: 0x0  nop
    ctx->pc = 0x1fa7acu;
    // NOP
    // 0x1fa7b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa7b4: 0x0  nop
    ctx->pc = 0x1fa7b4u;
    // NOP
    // 0x1fa7b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1FA7B8u;
    {
        const bool branch_taken_0x1fa7b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa7b8) {
            ctx->pc = 0x1FA7F4u;
            goto label_1fa7f4;
        }
    }
    ctx->pc = 0x1FA7C0u;
    // 0x1fa7c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7c4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa7c8: 0x948300aa  lhu         $v1, 0xAA($a0)
    ctx->pc = 0x1fa7c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x1fa7cc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1fa7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1fa7d0: 0xa48300aa  sh          $v1, 0xAA($a0)
    ctx->pc = 0x1fa7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa7d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa7dc: 0x948300aa  lhu         $v1, 0xAA($a0)
    ctx->pc = 0x1fa7dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x1fa7e0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1fa7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1fa7e4: 0xa48300aa  sh          $v1, 0xAA($a0)
    ctx->pc = 0x1fa7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa7e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa7ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7f0: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x1fa7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
label_1fa7f4:
    // 0x1fa7f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa7fc: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1fa7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1fa800: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa804: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fa804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fa808: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1FA808u;
    {
        const bool branch_taken_0x1fa808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa808) {
            ctx->pc = 0x1FAB0Cu;
            goto label_1fab0c;
        }
    }
    ctx->pc = 0x1FA810u;
    // 0x1fa810: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa814: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa818: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x1fa818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1fa81c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fa81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa824: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1FA824u;
    {
        const bool branch_taken_0x1fa824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa824) {
            ctx->pc = 0x1FAA34u;
            goto label_1faa34;
        }
    }
    ctx->pc = 0x1FA82Cu;
    // 0x1fa82c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA82Cu;
    {
        const bool branch_taken_0x1fa82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa82c) {
            ctx->pc = 0x1FA83Cu;
            goto label_1fa83c;
        }
    }
    ctx->pc = 0x1FA834u;
    // 0x1fa834: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1FA834u;
    {
        const bool branch_taken_0x1fa834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa834) {
            ctx->pc = 0x1FAB0Cu;
            goto label_1fab0c;
        }
    }
    ctx->pc = 0x1FA83Cu;
label_1fa83c:
    // 0x1fa83c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa840: 0x0  nop
    ctx->pc = 0x1fa840u;
    // NOP
    // 0x1fa844: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fa844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1fa848: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1fa848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1fa84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa850: 0x0  nop
    ctx->pc = 0x1fa850u;
    // NOP
    // 0x1fa854: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fa854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1fa858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa85c: 0x0  nop
    ctx->pc = 0x1fa85cu;
    // NOP
    // 0x1fa860: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fa864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa86c: 0x0  nop
    ctx->pc = 0x1fa86cu;
    // NOP
    // 0x1fa870: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fa874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fa878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fa87c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fa87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fa880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fa880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fa884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fa888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa88c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fa88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fa890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fa890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fa894: 0x34440412  ori         $a0, $v0, 0x412
    ctx->pc = 0x1fa894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1042);
    // 0x1fa898: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa89c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fa89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fa8a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1fa8a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8a4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa8a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1fa8a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1FA8ACu;
    SET_GPR_U32(ctx, 31, 0x1FA8B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1FA8ACu, 0x1FA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B4u;
label_1fa8b4:
    // 0x1fa8b4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1fa8b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1fa8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1fa8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa8c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa8c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa8c8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x1fa8cc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1fa8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fa8d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1fa8d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1FA8D4u;
    SET_GPR_U32(ctx, 31, 0x1FA8DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1FA8D4u, 0x1FA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8DCu;
label_1fa8dc:
    // 0x1fa8dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa8e0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa8e4: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1fa8e8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1fa8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fa8ec: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa8f0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa8f4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa8f8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa8fc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa900: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa904: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa908: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1fa90c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1fa90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa910: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa914: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa918: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa91c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa920: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa924: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa928: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa92c: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1fa930: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1fa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa934: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa938: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa93c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa940: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa944: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa948: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa94c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa950: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x1fa950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x1fa954: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa958: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa95c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa960: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa964: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa968: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x1fa968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1fa96c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa970: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa974: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa978: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa97c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa980: 0x24500360  addiu       $s0, $v0, 0x360
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1fa984: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa988: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa98c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa990: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa994: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa998: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x1fa998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x1fa99c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa9a0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa9a4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa9ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa9b4: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1fa9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa9b8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fa9bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9c0: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1fa9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9c4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1fa9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1fa9c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9cc: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x1fa9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9d0: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1fa9d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9d8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1fa9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9dc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1fa9e0: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1fa9e4: 0x2c4202bc  sltiu       $v0, $v0, 0x2BC
    ctx->pc = 0x1fa9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)700) ? 1 : 0);
    // 0x1fa9e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA9E8u;
    {
        const bool branch_taken_0x1fa9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9e8) {
            ctx->pc = 0x1FAA08u;
            goto label_1faa08;
        }
    }
    ctx->pc = 0x1FA9F0u;
    // 0x1fa9f0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fa9f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9f8: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1fa9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9fc: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x1fa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x1faa00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa04: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1faa04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1faa08:
    // 0x1faa08: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1faa0c: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1faa10: 0x2c420384  sltiu       $v0, $v0, 0x384
    ctx->pc = 0x1faa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
    // 0x1faa14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAA14u;
    {
        const bool branch_taken_0x1faa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faa14) {
            ctx->pc = 0x1FAA34u;
            goto label_1faa34;
        }
    }
    ctx->pc = 0x1FAA1Cu;
    // 0x1faa1c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1faa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1faa20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa24: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1faa24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faa28: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x1faa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x1faa2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa30: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1faa30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1faa34:
    // 0x1faa34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa38: 0x0  nop
    ctx->pc = 0x1faa38u;
    // NOP
    // 0x1faa3c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1faa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1faa40: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1faa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa48: 0x0  nop
    ctx->pc = 0x1faa48u;
    // NOP
    // 0x1faa4c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1faa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1faa50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa54: 0x0  nop
    ctx->pc = 0x1faa54u;
    // NOP
    // 0x1faa58: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1faa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1faa5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1faa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1faa60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa64: 0x0  nop
    ctx->pc = 0x1faa64u;
    // NOP
    // 0x1faa68: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1faa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1faa6c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1faa70: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1faa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1faa74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1faa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1faa78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1faa80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faa84: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1faa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1faa88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1faa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1faa8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1faa8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faa90: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1faa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1faa94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1faa98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faa9c: 0xc086488  jal         func_219220
    ctx->pc = 0x1FAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FAAA4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1FAA9Cu, 0x1FAAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAA4u;
label_1faaa4:
    // 0x1faaa4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1faaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faaa8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1faaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1faaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faab0: 0x0  nop
    ctx->pc = 0x1faab0u;
    // NOP
    // 0x1faab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1faab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faab8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1faab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1faabc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1faabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faac0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1faac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faac8: 0x0  nop
    ctx->pc = 0x1faac8u;
    // NOP
    // 0x1faacc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1faaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faad0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1faad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1faad4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1faad8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1faad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1faadc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1faadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1faae0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1faae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faae4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1faae8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faaec: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1faaf0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1faaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1faaf4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1faaf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faaf8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1faaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1faafc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1faafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fab00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab04: 0xc086488  jal         func_219220
    ctx->pc = 0x1FAB04u;
    SET_GPR_U32(ctx, 31, 0x1FAB0Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1FAB04u, 0x1FAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB0Cu;
label_1fab0c:
    // 0x1fab0c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1fab0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fab10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fab10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fab14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fab18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB20u;
}
