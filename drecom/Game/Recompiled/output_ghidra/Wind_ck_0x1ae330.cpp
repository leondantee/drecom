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

// Function: Wind_ck
// Address: 0x1ae330 - 0x1ae978
void Wind_ck_0x1ae330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wind_ck_0x1ae330");
#endif

    switch (ctx->pc) {
        case 0x1ae3c8u: goto label_1ae3c8;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae710u: goto label_1ae710;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae83cu: goto label_1ae83c;
        default: break;
    }

    ctx->pc = 0x1ae330u;

    // 0x1ae330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ae330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ae334: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1ae334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ae338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae344: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1ae344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1ae348: 0x2450f010  addiu       $s0, $v0, -0xFF0
    ctx->pc = 0x1ae348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1ae34c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1ae350: 0x2452f000  addiu       $s2, $v0, -0x1000
    ctx->pc = 0x1ae350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1ae354: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ae358: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1ae35c: 0x92220d86  lbu         $v0, 0xD86($s1)
    ctx->pc = 0x1ae35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E06u));
    // 0x1ae360: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ae360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae368: 0x106200f3  beq         $v1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1AE368u;
    {
        const bool branch_taken_0x1ae368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae368) {
            ctx->pc = 0x1AE738u;
            goto label_1ae738;
        }
    }
    ctx->pc = 0x1AE370u;
    // 0x1ae370: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae374: 0x106200d2  beq         $v1, $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1AE374u;
    {
        const bool branch_taken_0x1ae374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae374) {
            ctx->pc = 0x1AE6C0u;
            goto label_1ae6c0;
        }
    }
    ctx->pc = 0x1AE37Cu;
    // 0x1ae37c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae380: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1AE380u;
    {
        const bool branch_taken_0x1ae380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae380) {
            ctx->pc = 0x1AE4F4u;
            goto label_1ae4f4;
        }
    }
    ctx->pc = 0x1AE388u;
    // 0x1ae388: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE388u;
    {
        const bool branch_taken_0x1ae388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae388) {
            ctx->pc = 0x1AE398u;
            goto label_1ae398;
        }
    }
    ctx->pc = 0x1AE390u;
    // 0x1ae390: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1AE390u;
    {
        const bool branch_taken_0x1ae390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae390) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE398u;
label_1ae398:
    // 0x1ae398: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae39c: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae39cu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae3a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae3a4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae3a8: 0xe420b510  swc1        $f0, -0x4AF0($at)
    ctx->pc = 0x1ae3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948112), bits); }
    // 0x1ae3ac: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae3b0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae3b0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae3b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae3b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae3bc: 0xe420b514  swc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1ae3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948116), bits); }
    // 0x1ae3c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE3C0u;
    SET_GPR_U32(ctx, 31, 0x1AE3C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE3C0u, 0x1AE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3C8u;
label_1ae3c8:
    // 0x1ae3c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE3C8u;
    {
        const bool branch_taken_0x1ae3c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae3c8) {
            ctx->pc = 0x1AE3E4u;
            goto label_1ae3e4;
        }
    }
    ctx->pc = 0x1AE3D0u;
    // 0x1ae3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae3d4: 0x0  nop
    ctx->pc = 0x1ae3d4u;
    // NOP
    // 0x1ae3d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae3dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3DCu;
    {
        const bool branch_taken_0x1ae3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3dc) {
            ctx->pc = 0x1AE400u;
            goto label_1ae400;
        }
    }
    ctx->pc = 0x1AE3E4u;
label_1ae3e4:
    // 0x1ae3e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae3e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae3ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae3f4: 0x0  nop
    ctx->pc = 0x1ae3f4u;
    // NOP
    // 0x1ae3f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae3fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ae3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ae400:
    // 0x1ae400: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ae404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae408: 0x0  nop
    ctx->pc = 0x1ae408u;
    // NOP
    // 0x1ae40c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae410: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ae410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ae414: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ae418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae41c: 0x0  nop
    ctx->pc = 0x1ae41cu;
    // NOP
    // 0x1ae420: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae424: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1ae428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae42c: 0x0  nop
    ctx->pc = 0x1ae42cu;
    // NOP
    // 0x1ae430: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae430u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae434: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae438: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae438u;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae440: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae444: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae448: 0xe420b508  swc1        $f0, -0x4AF8($at)
    ctx->pc = 0x1ae448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948104), bits); }
    // 0x1ae44c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE44Cu;
    SET_GPR_U32(ctx, 31, 0x1AE454u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE44Cu, 0x1AE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE454u;
    {
        const bool branch_taken_0x1ae454 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae454) {
            ctx->pc = 0x1AE470u;
            goto label_1ae470;
        }
    }
    ctx->pc = 0x1AE45Cu;
    // 0x1ae45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae460: 0x0  nop
    ctx->pc = 0x1ae460u;
    // NOP
    // 0x1ae464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE468u;
    {
        const bool branch_taken_0x1ae468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae468) {
            ctx->pc = 0x1AE48Cu;
            goto label_1ae48c;
        }
    }
    ctx->pc = 0x1AE470u;
label_1ae470:
    // 0x1ae470: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae480: 0x0  nop
    ctx->pc = 0x1ae480u;
    // NOP
    // 0x1ae484: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae488: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ae488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ae48c:
    // 0x1ae48c: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x1ae48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae490: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae494: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1ae498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae49c: 0x0  nop
    ctx->pc = 0x1ae49cu;
    // NOP
    // 0x1ae4a0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1ae4a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae4a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ae4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae4ac: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x1ae4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae4b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ae4b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ae4b4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1ae4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ae4b8: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae4bc: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae4bcu;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae4c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae4c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4c8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4cc: 0xe420b50c  swc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948108), bits); }
    // 0x1ae4d0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ae4d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4d8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4dc: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae4e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4e4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4e8: 0xa420b504  sh          $zero, -0x4AFC($at)
    ctx->pc = 0x1ae4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ae4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae4f0: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
label_1ae4f4:
    // 0x1ae4f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4f8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4fc: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae504: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae508: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae508u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae50c: 0xa422b504  sh          $v0, -0x4AFC($at)
    ctx->pc = 0x1ae50cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948100), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae514: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae518: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae51c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE51Cu;
    {
        const bool branch_taken_0x1ae51c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae51c) {
            ctx->pc = 0x1AE538u;
            goto label_1ae538;
        }
    }
    ctx->pc = 0x1AE524u;
    // 0x1ae524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae528: 0x0  nop
    ctx->pc = 0x1ae528u;
    // NOP
    // 0x1ae52c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae530: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE530u;
    {
        const bool branch_taken_0x1ae530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae530) {
            ctx->pc = 0x1AE554u;
            goto label_1ae554;
        }
    }
    ctx->pc = 0x1AE538u;
label_1ae538:
    // 0x1ae538: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae548: 0x0  nop
    ctx->pc = 0x1ae548u;
    // NOP
    // 0x1ae54c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae550: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ae550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ae554:
    // 0x1ae554: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae558: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae558u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae55c: 0xc420b508  lwc1        $f0, -0x4AF8($at)
    ctx->pc = 0x1ae55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae560: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae564: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae568: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae56c: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae56cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae570: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE570u;
    {
        const bool branch_taken_0x1ae570 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae570) {
            ctx->pc = 0x1AE58Cu;
            goto label_1ae58c;
        }
    }
    ctx->pc = 0x1AE578u;
    // 0x1ae578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae57c: 0x0  nop
    ctx->pc = 0x1ae57cu;
    // NOP
    // 0x1ae580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE584u;
    {
        const bool branch_taken_0x1ae584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae584) {
            ctx->pc = 0x1AE5A8u;
            goto label_1ae5a8;
        }
    }
    ctx->pc = 0x1AE58Cu;
label_1ae58c:
    // 0x1ae58c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae59c: 0x0  nop
    ctx->pc = 0x1ae59cu;
    // NOP
    // 0x1ae5a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae5a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ae5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ae5a8:
    // 0x1ae5a8: 0x0  nop
    ctx->pc = 0x1ae5a8u;
    // NOP
    // 0x1ae5ac: 0x0  nop
    ctx->pc = 0x1ae5acu;
    // NOP
    // 0x1ae5b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae5b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae5b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae5b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae5bc: 0xc420b510  lwc1        $f0, -0x4AF0($at)
    ctx->pc = 0x1ae5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae5c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ae5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ae5c4: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae5c8: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae5cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae5d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae5d4: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae5d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae5d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE5F4u;
            goto label_1ae5f4;
        }
    }
    ctx->pc = 0x1AE5E0u;
    // 0x1ae5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae5e4: 0x0  nop
    ctx->pc = 0x1ae5e4u;
    // NOP
    // 0x1ae5e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae5ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE5ECu;
    {
        const bool branch_taken_0x1ae5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae5ec) {
            ctx->pc = 0x1AE610u;
            goto label_1ae610;
        }
    }
    ctx->pc = 0x1AE5F4u;
label_1ae5f4:
    // 0x1ae5f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae5f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae5fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae604: 0x0  nop
    ctx->pc = 0x1ae604u;
    // NOP
    // 0x1ae608: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae60c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ae60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ae610:
    // 0x1ae610: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae614: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae618: 0xc420b50c  lwc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae61c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae620: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae624: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae628: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae62c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE62Cu;
    {
        const bool branch_taken_0x1ae62c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae62c) {
            ctx->pc = 0x1AE648u;
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE634u;
    // 0x1ae634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae638: 0x0  nop
    ctx->pc = 0x1ae638u;
    // NOP
    // 0x1ae63c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE664u;
            goto label_1ae664;
        }
    }
    ctx->pc = 0x1AE648u;
label_1ae648:
    // 0x1ae648: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ae64c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ae64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ae650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae658: 0x0  nop
    ctx->pc = 0x1ae658u;
    // NOP
    // 0x1ae65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ae660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ae664:
    // 0x1ae664: 0x0  nop
    ctx->pc = 0x1ae664u;
    // NOP
    // 0x1ae668: 0x0  nop
    ctx->pc = 0x1ae668u;
    // NOP
    // 0x1ae66c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae66cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae670: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae674: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae674u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae678: 0xc420b514  lwc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1ae678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ae67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ae680: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae684: 0xe420efe8  swc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE8u, _value); } while (0); }
    // 0x1ae688: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae68c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae690: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae694: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ae694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae698: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae69c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6a0: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae6a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae6a8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AE6A8u;
    {
        const bool branch_taken_0x1ae6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae6a8) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE6B0u;
    // 0x1ae6b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae6b4: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae6b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AE6B8u;
    {
        const bool branch_taken_0x1ae6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6b8) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE6C0u;
label_1ae6c0:
    // 0x1ae6c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6c4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6c8: 0xc421b510  lwc1        $f1, -0x4AF0($at)
    ctx->pc = 0x1ae6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae6cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6d4: 0xc420b508  lwc1        $f0, -0x4AF8($at)
    ctx->pc = 0x1ae6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae6d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ae6dc: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae6e0: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae6e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6e8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6ec: 0xc421b514  lwc1        $f1, -0x4AEC($at)
    ctx->pc = 0x1ae6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae6f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6f4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6f8: 0xc420b50c  lwc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae6fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ae700: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae704: 0xe420efe8  swc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE8u, _value); } while (0); }
    // 0x1ae708: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE708u;
    SET_GPR_U32(ctx, 31, 0x1AE710u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE708u, 0x1AE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE710u;
label_1ae710:
    // 0x1ae710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae714: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1ae718: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae71c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae720: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae724: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae72c: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae730: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AE730u;
    {
        const bool branch_taken_0x1ae730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae730) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE738u;
label_1ae738:
    // 0x1ae738: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae73c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae740: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae748: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae74c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae750: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae750u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae754: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae758: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae75c: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae760: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE760u;
    {
        const bool branch_taken_0x1ae760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae760) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE768u;
    // 0x1ae768: 0xa2200d86  sb          $zero, 0xD86($s1)
    ctx->pc = 0x1ae768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 0));
label_1ae76c:
    // 0x1ae76c: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae77c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae780: 0xa2220d87  sb          $v0, 0xD87($s1)
    ctx->pc = 0x1ae780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3463), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae784: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae788: 0xc42cefe0  lwc1        $f12, -0x1020($at)
    ctx->pc = 0x1ae788u;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae78c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1AE78Cu;
    SET_GPR_U32(ctx, 31, 0x1AE794u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1AE78Cu, 0x1AE794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae798: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae79c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7a0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae7a0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7a4: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae7a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae7b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ae7b4: 0xe4400d88  swc1        $f0, 0xD88($v0)
    ctx->pc = 0x1ae7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3464), bits); }
    // 0x1ae7b8: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7bc: 0xc420efe0  lwc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae7bcu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7c0: 0x92220d87  lbu         $v0, 0xD87($s1)
    ctx->pc = 0x1ae7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae7c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae7cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ae7d0: 0xe4401188  swc1        $f0, 0x1188($v0)
    ctx->pc = 0x1ae7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4488), bits); }
    // 0x1ae7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7d8: 0x0  nop
    ctx->pc = 0x1ae7d8u;
    // NOP
    // 0x1ae7dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ae7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ae7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7e4: 0x0  nop
    ctx->pc = 0x1ae7e4u;
    // NOP
    // 0x1ae7e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ae7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ae7ec: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae7f0: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae7f0u;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae7f4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ae7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae7fc: 0x0  nop
    ctx->pc = 0x1ae7fcu;
    // NOP
    // 0x1ae800: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ae800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ae804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae808: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1AE808u;
    SET_GPR_U32(ctx, 31, 0x1AE810u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1AE810u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE810u) { return; }
    ctx->pc = 0x1AE810u;
label_1ae810:
    // 0x1ae810: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae814: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae818: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae81c: 0xc42cefe0  lwc1        $f12, -0x1020($at)
    ctx->pc = 0x1ae81cu;
    { uint32_t bits = FAST_READ32(0x5EEFE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae820: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1AE828u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE828u) { return; }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae82c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae830: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae834: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AE834u;
    SET_GPR_U32(ctx, 31, 0x1AE83Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AE83Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AE83Cu) { return; }
    ctx->pc = 0x1AE83Cu;
label_1ae83c:
    // 0x1ae83c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ae83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae840: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae844: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae84c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae850: 0xe4607d00  swc1        $f0, 0x7D00($v1)
    ctx->pc = 0x1ae850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32000), bits); }
    // 0x1ae854: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae858: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae85c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae864: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae868: 0xe4607d04  swc1        $f0, 0x7D04($v1)
    ctx->pc = 0x1ae868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32004), bits); }
    // 0x1ae86c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ae86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae870: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae874: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae87c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae880: 0xe4607d08  swc1        $f0, 0x7D08($v1)
    ctx->pc = 0x1ae880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32008), bits); }
    // 0x1ae884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae888: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae88c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae890: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae894: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae898: 0xe4607d0c  swc1        $f0, 0x7D0C($v1)
    ctx->pc = 0x1ae898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32012), bits); }
    // 0x1ae89c: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8ac: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1ae8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae8b0: 0xc4607d00  lwc1        $f0, 0x7D00($v1)
    ctx->pc = 0x1ae8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae8b8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae8bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae8c0: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae8d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae8d8: 0xe4208d00  swc1        $f0, -0x7300($at)
    ctx->pc = 0x1ae8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937856), bits); }
    // 0x1ae8dc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1ae8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae8e0: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae8e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae8e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae8ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae8f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae8f4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae8f8: 0xe4208d04  swc1        $f0, -0x72FC($at)
    ctx->pc = 0x1ae8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937860), bits); }
    // 0x1ae8fc: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae904: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae908: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae90c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1ae90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae910: 0xc4607d08  lwc1        $f0, 0x7D08($v1)
    ctx->pc = 0x1ae910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae914: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ae914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae918: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1ae918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae91c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ae91cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae920: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae924: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae928: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae92c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae930: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae934: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae938: 0xe4208d08  swc1        $f0, -0x72F8($at)
    ctx->pc = 0x1ae938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937864), bits); }
    // 0x1ae93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae940: 0x92230d87  lbu         $v1, 0xD87($s1)
    ctx->pc = 0x1ae940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3463)));
    // 0x1ae944: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ae944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae948: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae94c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ae950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae954: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1ae958: 0xe4208d0c  swc1        $f0, -0x72F4($at)
    ctx->pc = 0x1ae958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937868), bits); }
    // 0x1ae95c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1ae95cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae96c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ae970: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE978u;
}
