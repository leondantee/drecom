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

// Function: entry_002fb30c
// Address: 0x2fb30c - 0x2fb468
void entry_002fb30c_0x2fb30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb30c_0x2fb30c");
#endif

    switch (ctx->pc) {
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb37cu: goto label_2fb37c;
        default: break;
    }

    ctx->pc = 0x2fb30cu;

    // 0x2fb30c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb310: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fb314: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2FB314u;
    {
        const bool branch_taken_0x2fb314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb314) {
            ctx->pc = 0x2FB4DCu;
            return;
        }
    }
    ctx->pc = 0x2FB31Cu;
    // 0x2fb31c: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2fb31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb320: 0x16303c  dsll32      $a2, $s6, 0
    ctx->pc = 0x2fb320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2fb324: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb328: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb32c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fb32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fb330: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x2fb330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb334: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fb334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fb338: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb33c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb340: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb344: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fb344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fb348: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb34c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fb34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fb350: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2fb350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb354: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fb354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fb358: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x2fb358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fb35c: 0x24041903  addiu       $a0, $zero, 0x1903
    ctx->pc = 0x2fb35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6403));
    // 0x2fb360: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb360u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb364: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb364u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb368: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB368u;
    SET_GPR_U32(ctx, 31, 0x2FB370u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB368u, 0x2FB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB370u;
label_2fb370:
    // 0x2fb370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb374: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB374u;
    SET_GPR_U32(ctx, 31, 0x2FB37Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB374u, 0x2FB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB37Cu;
label_2fb37c:
    // 0x2fb37c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb37cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb380: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb384: 0xaca30100  sw          $v1, 0x100($a1)
    ctx->pc = 0x2fb384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 3));
    // 0x2fb388: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb38c: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x2fb38cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb390: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2fb390u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x2fb394: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x2fb394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x2fb398: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb39c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2fb39cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb3a0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb3a4: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x2fb3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fb3a8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb3a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb3ac: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2fb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb3b0: 0x34a40011  ori         $a0, $a1, 0x11
    ctx->pc = 0x2fb3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17);
    // 0x2fb3b4: 0x12240164  beq         $s1, $a0, . + 4 + (0x164 << 2)
    ctx->pc = 0x2FB3B4u;
    {
        const bool branch_taken_0x2fb3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fb3b4) {
            ctx->pc = 0x2FB948u;
            return;
        }
    }
    ctx->pc = 0x2FB3BCu;
    // 0x2fb3bc: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb3c0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb3c4: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2fb3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb3c8: 0xae250b18  sw          $a1, 0xB18($s1)
    ctx->pc = 0x2fb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 5));
    // 0x2fb3cc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fb3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fb3d0: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb3d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2fb3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb3d8: 0xa2230346  sb          $v1, 0x346($s1)
    ctx->pc = 0x2fb3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb3dc: 0x3c0442b0  lui         $a0, 0x42B0
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb3e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb3e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb3e4: 0x0  nop
    ctx->pc = 0x2fb3e4u;
    // NOP
    // 0x2fb3e8: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb3ec: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb3f4: 0x0  nop
    ctx->pc = 0x2fb3f4u;
    // NOP
    // 0x2fb3f8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb3fc: 0x3c064268  lui         $a2, 0x4268
    ctx->pc = 0x2fb3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17000 << 16));
    // 0x2fb400: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb400u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb404: 0x0  nop
    ctx->pc = 0x2fb404u;
    // NOP
    // 0x2fb408: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb40c: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb414: 0x0  nop
    ctx->pc = 0x2fb414u;
    // NOP
    // 0x2fb418: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb41c: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2fb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb420: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb424: 0x0  nop
    ctx->pc = 0x2fb424u;
    // NOP
    // 0x2fb428: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb42c: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x2fb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb430: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb430u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb434: 0x0  nop
    ctx->pc = 0x2fb434u;
    // NOP
    // 0x2fb438: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb43c: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb440: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb440u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb444: 0x0  nop
    ctx->pc = 0x2fb444u;
    // NOP
    // 0x2fb448: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb44c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2fb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb454: 0x0  nop
    ctx->pc = 0x2fb454u;
    // NOP
    // 0x2fb458: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb45c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb45cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb460: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB460u;
    {
        const bool branch_taken_0x2fb460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb460) {
            ctx->pc = 0x2FB4C8u;
            return;
        }
    }
    ctx->pc = 0x2FB468u;
}
