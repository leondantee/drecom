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

// Function: entry_002fe1f8
// Address: 0x2fe1f8 - 0x2fe3b8
void entry_002fe1f8_0x2fe1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe1f8_0x2fe1f8");
#endif

    switch (ctx->pc) {
        case 0x2fe254u: goto label_2fe254;
        case 0x2fe268u: goto label_2fe268;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe320u: goto label_2fe320;
        case 0x2fe33cu: goto label_2fe33c;
        default: break;
    }

    ctx->pc = 0x2fe1f8u;

    // 0x2fe1f8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2fe1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fe1fc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2FE1FCu;
    {
        const bool branch_taken_0x2fe1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1fc) {
            ctx->pc = 0x2FE108u;
            return;
        }
    }
    ctx->pc = 0x2FE204u;
    // 0x2fe204: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe208: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe20c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2fe20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2fe210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe214: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe218: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fe218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fe21c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fe21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe220: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe224: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fe224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe230: 0x0  nop
    ctx->pc = 0x2fe230u;
    // NOP
    // 0x2fe234: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2fe234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe238: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2fe238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2fe23c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe240: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2fe240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe244: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe248: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe24c: 0xc0bf728  jal         func_2FDCA0
    ctx->pc = 0x2FE24Cu;
    SET_GPR_U32(ctx, 31, 0x2FE254u);
    ctx->pc = 0x2FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDCA0u, 0x2FE24Cu, 0x2FE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE254u;
label_2fe254:
    // 0x2fe254: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe25c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2fe25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe260: 0xc0bf6f4  jal         func_2FDBD0
    ctx->pc = 0x2FE260u;
    SET_GPR_U32(ctx, 31, 0x2FE268u);
    ctx->pc = 0x2FDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBD0u, 0x2FE260u, 0x2FE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE268u;
label_2fe268:
    // 0x2fe268: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe26c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe270: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE270u;
    SET_GPR_U32(ctx, 31, 0x2FE278u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE270u, 0x2FE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE278u;
label_2fe278:
    // 0x2fe278: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe280: 0x0  nop
    ctx->pc = 0x2fe280u;
    // NOP
    // 0x2fe284: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2fe284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe288: 0x3c024535  lui         $v0, 0x4535
    ctx->pc = 0x2fe288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17717 << 16));
    // 0x2fe28c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2fe28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2fe290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe294: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fe298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fe29c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2fe29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2fe2a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fe2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe2a4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe2a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fe2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe2ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe2b4: 0x0  nop
    ctx->pc = 0x2fe2b4u;
    // NOP
    // 0x2fe2b8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2fe2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe2bc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2fe2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe2c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fe2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fe2c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fe2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fe2cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fe2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fe2d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fe2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fe2d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe2d8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2fe2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2dc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe2e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fe2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fe2e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fe2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fe2ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fe2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fe2f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fe2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fe2f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe2f8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2fe2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fe2fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fe2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe300: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe304: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2fe304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2fe308: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x2fe308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x2fe30c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2fe30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fe310: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fe310u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe314: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2fe318: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x2FE318u;
    SET_GPR_U32(ctx, 31, 0x2FE320u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x2FE318u, 0x2FE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE320u;
label_2fe320:
    // 0x2fe320: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2fe320u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe324: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe328: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe32c: 0x12630022  beq         $s3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FE32Cu;
    {
        const bool branch_taken_0x2fe32c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe32c) {
            ctx->pc = 0x2FE3B8u;
            return;
        }
    }
    ctx->pc = 0x2FE334u;
    // 0x2fe334: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE334u;
    SET_GPR_U32(ctx, 31, 0x2FE33Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE334u, 0x2FE33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE33Cu;
label_2fe33c:
    // 0x2fe33c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2fe33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2fe340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe344: 0x0  nop
    ctx->pc = 0x2fe344u;
    // NOP
    // 0x2fe348: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe34c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2fe34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2fe350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe354: 0x0  nop
    ctx->pc = 0x2fe354u;
    // NOP
    // 0x2fe358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe35c: 0xe6600338  swc1        $f0, 0x338($s3)
    ctx->pc = 0x2fe35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 824), bits); }
    // 0x2fe360: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe368: 0x0  nop
    ctx->pc = 0x2fe368u;
    // NOP
    // 0x2fe36c: 0xe66002d0  swc1        $f0, 0x2D0($s3)
    ctx->pc = 0x2fe36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 720), bits); }
    // 0x2fe370: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe378: 0x0  nop
    ctx->pc = 0x2fe378u;
    // NOP
    // 0x2fe37c: 0xe66002d4  swc1        $f0, 0x2D4($s3)
    ctx->pc = 0x2fe37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 724), bits); }
    // 0x2fe380: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe388: 0x0  nop
    ctx->pc = 0x2fe388u;
    // NOP
    // 0x2fe38c: 0xe66002d8  swc1        $f0, 0x2D8($s3)
    ctx->pc = 0x2fe38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 728), bits); }
    // 0x2fe390: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fe390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fe394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe398: 0x0  nop
    ctx->pc = 0x2fe398u;
    // NOP
    // 0x2fe39c: 0xe66002dc  swc1        $f0, 0x2DC($s3)
    ctx->pc = 0x2fe39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 732), bits); }
    // 0x2fe3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe3a4: 0xa26302a8  sb          $v1, 0x2A8($s3)
    ctx->pc = 0x2fe3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fe3a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fe3ac: 0xa263034f  sb          $v1, 0x34F($s3)
    ctx->pc = 0x2fe3acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fe3b0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2fe3b4: 0xae630364  sw          $v1, 0x364($s3)
    ctx->pc = 0x2fe3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 3));
    ctx->pc = 0x2fe3b8u;
}
