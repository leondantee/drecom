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

// Function: Set_effect_r203_stome
// Address: 0x267620 - 0x2678c8
void Set_effect_r203_stome_0x267620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_r203_stome_0x267620");
#endif

    switch (ctx->pc) {
        case 0x267658u: goto label_267658;
        case 0x2676f0u: goto label_2676f0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677dcu: goto label_2677dc;
        case 0x267870u: goto label_267870;
        case 0x267890u: goto label_267890;
        default: break;
    }

    ctx->pc = 0x267620u;

    // 0x267620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x267620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x267624: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x267624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x267628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26762c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267638: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x267638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26763c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x26763cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x267640: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x267644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267648: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x267648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26764c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26764cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267650: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x267650u;
    SET_GPR_U32(ctx, 31, 0x267658u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x267650u, 0x267658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267658u;
label_267658:
    // 0x267658: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26765c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x26765cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x267660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267664: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267668: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x267668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26766c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x26766cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x267670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267674: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267678: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x267678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26767c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x26767cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x267680: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267684: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x267688: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x267688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x26768c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26768cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267690: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x267690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x267694: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x267694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x267698: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26769c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26769cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676a0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2676a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2676a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676ac: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2676acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2676b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676b8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2676b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2676c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676c4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2676c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2676ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676d0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2676d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2676d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676dc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2676dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2676e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676e4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2676e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2676e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2676E8u;
    SET_GPR_U32(ctx, 31, 0x2676F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2676E8u, 0x2676F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676F0u;
label_2676f0:
    // 0x2676f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676f4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2676f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2676f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2676f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2676fc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2676fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x267700: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x267700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x267704: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x267704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x267708: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267708u;
    {
        const bool branch_taken_0x267708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x267708) {
            ctx->pc = 0x26771Cu;
            goto label_26771c;
        }
    }
    ctx->pc = 0x267710u;
    // 0x267710: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x267710u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267714u;
    {
        const bool branch_taken_0x267714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267714) {
            ctx->pc = 0x267738u;
            goto label_267738;
        }
    }
    ctx->pc = 0x26771Cu;
label_26771c:
    // 0x26771c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26771cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267720: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x267720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x267724: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267728: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x267728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x26772c: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x26772cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x267730: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x267730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267734: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x267734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_267738:
    // 0x267738: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x267738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x26773c: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x26773cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x267740: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x267740u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x267744: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x267748: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x267748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x26774c: 0x12030056  beq         $s0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x26774Cu;
    {
        const bool branch_taken_0x26774c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x26774c) {
            ctx->pc = 0x2678A8u;
            goto label_2678a8;
        }
    }
    ctx->pc = 0x267754u;
    // 0x267754: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x267758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26775c: 0x0  nop
    ctx->pc = 0x26775cu;
    // NOP
    // 0x267760: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x267760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x267764: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x267768: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x267768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26776c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26776cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267770: 0x0  nop
    ctx->pc = 0x267770u;
    // NOP
    // 0x267774: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x267774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x267778: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x26777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267780: 0x0  nop
    ctx->pc = 0x267780u;
    // NOP
    // 0x267784: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x267784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x267788: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x267788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x26778c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26778cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267790: 0x0  nop
    ctx->pc = 0x267790u;
    // NOP
    // 0x267794: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x267794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x267798: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x267798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x26779c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x26779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2677a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2677a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2677a4: 0x0  nop
    ctx->pc = 0x2677a4u;
    // NOP
    // 0x2677a8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2677a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2677ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677ACu;
    SET_GPR_U32(ctx, 31, 0x2677B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677ACu, 0x2677B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677B4u;
label_2677b4:
    // 0x2677b4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2677b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2677bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2677c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677C0u;
    SET_GPR_U32(ctx, 31, 0x2677C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677C0u, 0x2677C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677C8u;
label_2677c8:
    // 0x2677c8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2677c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677d0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2677d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2677d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677D4u;
    SET_GPR_U32(ctx, 31, 0x2677DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677D4u, 0x2677DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677DCu;
label_2677dc:
    // 0x2677dc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2677dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677e4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2677e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2677e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2677ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2677ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677f0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2677f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2677f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2677f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2677f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2677f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677fc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2677fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x267800: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x267800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x267804: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x267804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267808: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x267808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26780c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x267810: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x267810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x267814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267818: 0x0  nop
    ctx->pc = 0x267818u;
    // NOP
    // 0x26781c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x26781cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x267820: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x267820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x267824: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x267824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x267828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26782c: 0x0  nop
    ctx->pc = 0x26782cu;
    // NOP
    // 0x267830: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x267830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x267834: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x267834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x267838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26783c: 0x0  nop
    ctx->pc = 0x26783cu;
    // NOP
    // 0x267840: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x267840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x267844: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x267844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x267848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26784c: 0x0  nop
    ctx->pc = 0x26784cu;
    // NOP
    // 0x267850: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x267850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x267854: 0x3c023e38  lui         $v0, 0x3E38
    ctx->pc = 0x267854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
    // 0x267858: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x267858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x26785c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26785cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267860: 0x0  nop
    ctx->pc = 0x267860u;
    // NOP
    // 0x267864: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x267864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x267868: 0xc067648  jal         func_19D920
    ctx->pc = 0x267868u;
    SET_GPR_U32(ctx, 31, 0x267870u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267868u, 0x267870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267870u;
label_267870:
    // 0x267870: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x267870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x267874: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x267874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x267878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26787c: 0x0  nop
    ctx->pc = 0x26787cu;
    // NOP
    // 0x267880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x267880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267884: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x267884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x267888: 0xc067648  jal         func_19D920
    ctx->pc = 0x267888u;
    SET_GPR_U32(ctx, 31, 0x267890u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267888u, 0x267890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267890u;
label_267890:
    // 0x267890: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x267894: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x267894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x267898: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26789c: 0x0  nop
    ctx->pc = 0x26789cu;
    // NOP
    // 0x2678a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2678a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2678a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2678a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2678a8:
    // 0x2678a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2678a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2678ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2678acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2678b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2678b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2678b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2678b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2678b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2678b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2678bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2678bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2678c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2678C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2678C8u;
}
