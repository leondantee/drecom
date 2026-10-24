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

// Function: Em09_size_ch
// Address: 0x355320 - 0x355814
void Em09_size_ch_0x355320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_size_ch_0x355320");
#endif

    ctx->pc = 0x355320u;

    // 0x355320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355328: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x355328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35532c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35532cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355330: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355334: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355338: 0x9063008e  lbu         $v1, 0x8E($v1)
    ctx->pc = 0x355338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
    // 0x35533c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35533cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355340: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x355340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x355344: 0x1083012f  beq         $a0, $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x355344u;
    {
        const bool branch_taken_0x355344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355344) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x35534Cu;
    // 0x35534c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355350: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355354: 0x9063008e  lbu         $v1, 0x8E($v1)
    ctx->pc = 0x355354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
    // 0x355358: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35535c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355360: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x355360u;
    {
        const bool branch_taken_0x355360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355360) {
            ctx->pc = 0x355398u;
            goto label_355398;
        }
    }
    ctx->pc = 0x355368u;
    // 0x355368: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355368u;
    {
        const bool branch_taken_0x355368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355368) {
            ctx->pc = 0x355378u;
            goto label_355378;
        }
    }
    ctx->pc = 0x355370u;
    // 0x355370: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x355370u;
    {
        const bool branch_taken_0x355370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355370) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x355378u;
label_355378:
    // 0x355378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35537c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x355380: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x355380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x355384: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x355384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x355388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35538c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355390: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355394: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x355394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
label_355398:
    // 0x355398: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35539c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553a0: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x3553a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553a8: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3553acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3553b0: 0x0  nop
    ctx->pc = 0x3553b0u;
    // NOP
    // 0x3553b4: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3553B4u;
    {
        const bool branch_taken_0x3553b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3553b4) {
            ctx->pc = 0x3554B4u;
            goto label_3554b4;
        }
    }
    ctx->pc = 0x3553BCu;
    // 0x3553bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3553c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553c4: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x3553c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553cc: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3553d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3553d4: 0x0  nop
    ctx->pc = 0x3553d4u;
    // NOP
    // 0x3553d8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x3553D8u;
    {
        const bool branch_taken_0x3553d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3553d8) {
            ctx->pc = 0x355434u;
            goto label_355434;
        }
    }
    ctx->pc = 0x3553E0u;
    // 0x3553e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3553e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553e8: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x3553e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553f0: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3553f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3553f8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3553fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355400: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355404: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x355404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35540c: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x35540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355414: 0x0  nop
    ctx->pc = 0x355414u;
    // NOP
    // 0x355418: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x355418u;
    {
        const bool branch_taken_0x355418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355418) {
            ctx->pc = 0x355434u;
            goto label_355434;
        }
    }
    ctx->pc = 0x355420u;
    // 0x355420: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355424: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355428: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x355428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35542c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355430: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_355434:
    // 0x355434: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355438: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35543c: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x35543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355444: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35544c: 0x0  nop
    ctx->pc = 0x35544cu;
    // NOP
    // 0x355450: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355450u;
    {
        const bool branch_taken_0x355450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355450) {
            ctx->pc = 0x3554BCu;
            goto label_3554bc;
        }
    }
    ctx->pc = 0x355458u;
    // 0x355458: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35545c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355460: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x355460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355464: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355468: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35546c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35546cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355470: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x355474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355478: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35547c: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x35547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355484: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35548c: 0x0  nop
    ctx->pc = 0x35548cu;
    // NOP
    // 0x355490: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x355490u;
    {
        const bool branch_taken_0x355490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355490) {
            ctx->pc = 0x3554BCu;
            goto label_3554bc;
        }
    }
    ctx->pc = 0x355498u;
    // 0x355498: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35549c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554a0: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x3554a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554a8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3554a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3554ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3554ACu;
    {
        const bool branch_taken_0x3554ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554ac) {
            ctx->pc = 0x3554BCu;
            goto label_3554bc;
        }
    }
    ctx->pc = 0x3554B4u;
label_3554b4:
    // 0x3554b4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3554b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3554b8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3554b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3554bc:
    // 0x3554bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3554c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554c4: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3554c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3554c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554cc: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3554ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3554d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3554d4: 0x0  nop
    ctx->pc = 0x3554d4u;
    // NOP
    // 0x3554d8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3554D8u;
    {
        const bool branch_taken_0x3554d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3554d8) {
            ctx->pc = 0x3555D8u;
            goto label_3555d8;
        }
    }
    ctx->pc = 0x3554E0u;
    // 0x3554e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3554e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554e8: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3554e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3554ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554f0: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3554f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3554f8: 0x0  nop
    ctx->pc = 0x3554f8u;
    // NOP
    // 0x3554fc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x3554FCu;
    {
        const bool branch_taken_0x3554fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3554fc) {
            ctx->pc = 0x355558u;
            goto label_355558;
        }
    }
    ctx->pc = 0x355504u;
    // 0x355504: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355508: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35550c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x35550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355514: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35551c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x355520: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355524: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355528: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x355528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35552c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355530: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355538: 0x0  nop
    ctx->pc = 0x355538u;
    // NOP
    // 0x35553c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x35553Cu;
    {
        const bool branch_taken_0x35553c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35553c) {
            ctx->pc = 0x355558u;
            goto label_355558;
        }
    }
    ctx->pc = 0x355544u;
    // 0x355544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355548: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35554c: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x35554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355550: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355554: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_355558:
    // 0x355558: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35555c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355560: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x355560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355568: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35556c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35556cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355570: 0x0  nop
    ctx->pc = 0x355570u;
    // NOP
    // 0x355574: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355574u;
    {
        const bool branch_taken_0x355574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355574) {
            ctx->pc = 0x3555E0u;
            goto label_3555e0;
        }
    }
    ctx->pc = 0x35557Cu;
    // 0x35557c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355580: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355584: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x355584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355588: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35558c: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355594: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x355598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35559c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555a0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3555a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555a8: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3555a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3555acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3555b0: 0x0  nop
    ctx->pc = 0x3555b0u;
    // NOP
    // 0x3555b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3555B4u;
    {
        const bool branch_taken_0x3555b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3555b4) {
            ctx->pc = 0x3555E0u;
            goto label_3555e0;
        }
    }
    ctx->pc = 0x3555BCu;
    // 0x3555bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3555c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555c4: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x3555c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555cc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3555ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x3555d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3555D0u;
    {
        const bool branch_taken_0x3555d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555d0) {
            ctx->pc = 0x3555E0u;
            goto label_3555e0;
        }
    }
    ctx->pc = 0x3555D8u;
label_3555d8:
    // 0x3555d8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3555d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3555dc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3555dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3555e0:
    // 0x3555e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3555e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555e8: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x3555e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3555ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555f0: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3555f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3555f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3555f8: 0x0  nop
    ctx->pc = 0x3555f8u;
    // NOP
    // 0x3555fc: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3555FCu;
    {
        const bool branch_taken_0x3555fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3555fc) {
            ctx->pc = 0x3556FCu;
            goto label_3556fc;
        }
    }
    ctx->pc = 0x355604u;
    // 0x355604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355608: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35560c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x35560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355610: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355614: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35561c: 0x0  nop
    ctx->pc = 0x35561cu;
    // NOP
    // 0x355620: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x355620u;
    {
        const bool branch_taken_0x355620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355620) {
            ctx->pc = 0x35567Cu;
            goto label_35567c;
        }
    }
    ctx->pc = 0x355628u;
    // 0x355628: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35562c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355630: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x355630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355638: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35563c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35563cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355640: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x355644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355648: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35564c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x35564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355650: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355654: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35565c: 0x0  nop
    ctx->pc = 0x35565cu;
    // NOP
    // 0x355660: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x355660u;
    {
        const bool branch_taken_0x355660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355660) {
            ctx->pc = 0x35567Cu;
            goto label_35567c;
        }
    }
    ctx->pc = 0x355668u;
    // 0x355668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35566c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355670: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x355670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355674: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355678: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_35567c:
    // 0x35567c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355680: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355684: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x355684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355688: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35568c: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x35568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355690: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355694: 0x0  nop
    ctx->pc = 0x355694u;
    // NOP
    // 0x355698: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355698u;
    {
        const bool branch_taken_0x355698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355698) {
            ctx->pc = 0x355704u;
            goto label_355704;
        }
    }
    ctx->pc = 0x3556A0u;
    // 0x3556a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556a8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x3556a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3556ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556b0: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3556b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3556b8: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x3556bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556c4: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x3556c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3556c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556cc: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3556d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3556d4: 0x0  nop
    ctx->pc = 0x3556d4u;
    // NOP
    // 0x3556d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3556D8u;
    {
        const bool branch_taken_0x3556d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3556d8) {
            ctx->pc = 0x355704u;
            goto label_355704;
        }
    }
    ctx->pc = 0x3556E0u;
    // 0x3556e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556e8: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x3556e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556f0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x3556f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3556F4u;
    {
        const bool branch_taken_0x3556f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556f4) {
            ctx->pc = 0x355704u;
            goto label_355704;
        }
    }
    ctx->pc = 0x3556FCu;
label_3556fc:
    // 0x3556fc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x355700: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x355700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_355704:
    // 0x355704: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355708: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35570c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x35570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355710: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355714: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355718: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x355718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35571c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35571cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355720: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x355720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x355724: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355728: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35572c: 0xc46100a4  lwc1        $f1, 0xA4($v1)
    ctx->pc = 0x35572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355730: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355734: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355738: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x355738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35573c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35573cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355740: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x355740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x355744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355748: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35574c: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x35574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355750: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355754: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355758: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x355758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35575c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35575cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355760: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x355760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x355764: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x355764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x355768: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35576c: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x35576Cu;
    {
        const bool branch_taken_0x35576c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35576c) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x355774u;
    // 0x355774: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x355774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x355778: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35577c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355780: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x355780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x355784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355788: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x355788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35578c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x355790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x355790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355794: 0x0  nop
    ctx->pc = 0x355794u;
    // NOP
    // 0x355798: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x355798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35579c: 0x0  nop
    ctx->pc = 0x35579cu;
    // NOP
    // 0x3557a0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3557A0u;
    {
        const bool branch_taken_0x3557a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3557a0) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x3557A8u;
    // 0x3557a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3557a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3557ac: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x3557acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3557b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3557b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3557b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3557b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3557b8: 0x0  nop
    ctx->pc = 0x3557b8u;
    // NOP
    // 0x3557bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3557bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3557c0: 0x0  nop
    ctx->pc = 0x3557c0u;
    // NOP
    // 0x3557c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3557C4u;
    {
        const bool branch_taken_0x3557c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3557c4) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x3557CCu;
    // 0x3557cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3557ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3557d0: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x3557d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3557d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3557d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3557d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3557d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3557dc: 0x0  nop
    ctx->pc = 0x3557dcu;
    // NOP
    // 0x3557e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3557e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3557e4: 0x0  nop
    ctx->pc = 0x3557e4u;
    // NOP
    // 0x3557e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3557E8u;
    {
        const bool branch_taken_0x3557e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3557e8) {
            ctx->pc = 0x355804u;
            goto label_355804;
        }
    }
    ctx->pc = 0x3557F0u;
    // 0x3557f0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3557f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3557f4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3557f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3557f8: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3557fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3557fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x355800: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x355800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_355804:
    // 0x355804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35580c: 0x3e00008  jr          $ra
    ctx->pc = 0x35580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355814u;
}
