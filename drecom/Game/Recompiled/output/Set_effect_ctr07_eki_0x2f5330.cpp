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

// Function: Set_effect_ctr07_eki
// Address: 0x2f5330 - 0x2f5548
void Set_effect_ctr07_eki_0x2f5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_ctr07_eki_0x2f5330");
#endif

    switch (ctx->pc) {
        case 0x2f53a8u: goto label_2f53a8;
        case 0x2f53d0u: goto label_2f53d0;
        case 0x2f545cu: goto label_2f545c;
        case 0x2f5468u: goto label_2f5468;
        case 0x2f5474u: goto label_2f5474;
        case 0x2f54fcu: goto label_2f54fc;
        default: break;
    }

    ctx->pc = 0x2f5330u;

    // 0x2f5330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5334: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f5334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f5338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f533c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2f533cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2f5340: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x2f5340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2f5344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f5344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f534c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f534cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f5350: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5354: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5358: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f535c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5360: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f5360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5364: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5368: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f536c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f5370: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5374: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f537c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5380: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2f5380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f5384: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5388: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f538c: 0x3c023c30  lui         $v0, 0x3C30
    ctx->pc = 0x2f538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15408 << 16));
    // 0x2f5390: 0x3442010d  ori         $v0, $v0, 0x10D
    ctx->pc = 0x2f5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2f5394: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2f5394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f5398: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5398u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f539c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2f539cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f53a0: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x2F53A0u;
    SET_GPR_U32(ctx, 31, 0x2F53A8u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x2F53A0u, 0x2F53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53A8u;
label_2f53a8:
    // 0x2f53a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f53a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f53ac: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2f53b0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2f53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2f53b4: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2F53B4u;
    {
        const bool branch_taken_0x2f53b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f53b4) {
            ctx->pc = 0x2F5530u;
            goto label_2f5530;
        }
    }
    ctx->pc = 0x2F53BCu;
    // 0x2f53bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f53bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f53c0: 0x0  nop
    ctx->pc = 0x2f53c0u;
    // NOP
    // 0x2f53c4: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f53c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2f53c8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F53C8u;
    SET_GPR_U32(ctx, 31, 0x2F53D0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F53C8u, 0x2F53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53D0u;
label_2f53d0:
    // 0x2f53d0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f53d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f53d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f53d8: 0x0  nop
    ctx->pc = 0x2f53d8u;
    // NOP
    // 0x2f53dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f53dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f53e0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2f53e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f53e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f53e8: 0x0  nop
    ctx->pc = 0x2f53e8u;
    // NOP
    // 0x2f53ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f53ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f53f0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f53f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2f53f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f53f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f53f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f53fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f53fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5400: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x2f5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5404: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f5404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5408: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2f5408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2f540c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5414: 0x0  nop
    ctx->pc = 0x2f5414u;
    // NOP
    // 0x2f5418: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f541c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5424: 0x0  nop
    ctx->pc = 0x2f5424u;
    // NOP
    // 0x2f5428: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f542c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5434: 0x0  nop
    ctx->pc = 0x2f5434u;
    // NOP
    // 0x2f5438: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f543c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2f543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2f5440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5444: 0x0  nop
    ctx->pc = 0x2f5444u;
    // NOP
    // 0x2f5448: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f544c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5450: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f5450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5454: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F5454u;
    SET_GPR_U32(ctx, 31, 0x2F545Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F5454u, 0x2F545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F545Cu;
label_2f545c:
    // 0x2f545c: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f5460: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5460u;
    SET_GPR_U32(ctx, 31, 0x2F5468u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5460u, 0x2F5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5468u;
label_2f5468:
    // 0x2f5468: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f5468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f546c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F546Cu;
    SET_GPR_U32(ctx, 31, 0x2F5474u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F546Cu, 0x2F5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5474u;
label_2f5474:
    // 0x2f5474: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f5478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f547c: 0x0  nop
    ctx->pc = 0x2f547cu;
    // NOP
    // 0x2f5480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5484: 0xe60002f8  swc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f5484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f5488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5490: 0x0  nop
    ctx->pc = 0x2f5490u;
    // NOP
    // 0x2f5494: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f5498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f549c: 0x0  nop
    ctx->pc = 0x2f549cu;
    // NOP
    // 0x2f54a0: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x2f54a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x2f54a4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f54a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f54a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54ac: 0x0  nop
    ctx->pc = 0x2f54acu;
    // NOP
    // 0x2f54b0: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x2f54b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x2f54b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f54b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54b8: 0x0  nop
    ctx->pc = 0x2f54b8u;
    // NOP
    // 0x2f54bc: 0xe6000308  swc1        $f0, 0x308($s0)
    ctx->pc = 0x2f54bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x2f54c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f54c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f54c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f54c8: 0x0  nop
    ctx->pc = 0x2f54c8u;
    // NOP
    // 0x2f54cc: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f54ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    // 0x2f54d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f54d4: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f54d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f54d8: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f54dc: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x2f54e0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f54e4: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x2f54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x2f54e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f54ec: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x2f54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f54f0: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x2f54f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f54f4: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F54F4u;
    SET_GPR_U32(ctx, 31, 0x2F54FCu);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F54F4u, 0x2F54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54FCu;
label_2f54fc:
    // 0x2f54fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f54fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5500: 0x0  nop
    ctx->pc = 0x2f5500u;
    // NOP
    // 0x2f5504: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x2f5504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x2f5508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f550c: 0x0  nop
    ctx->pc = 0x2f550cu;
    // NOP
    // 0x2f5510: 0xe6000314  swc1        $f0, 0x314($s0)
    ctx->pc = 0x2f5510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x2f5514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5518: 0x0  nop
    ctx->pc = 0x2f5518u;
    // NOP
    // 0x2f551c: 0xe6000318  swc1        $f0, 0x318($s0)
    ctx->pc = 0x2f551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x2f5520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5528: 0x0  nop
    ctx->pc = 0x2f5528u;
    // NOP
    // 0x2f552c: 0xe600031c  swc1        $f0, 0x31C($s0)
    ctx->pc = 0x2f552cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
label_2f5530:
    // 0x2f5530: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2f5530u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f5534: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f5534u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f553c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2f553cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f5540: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5548u;
}
