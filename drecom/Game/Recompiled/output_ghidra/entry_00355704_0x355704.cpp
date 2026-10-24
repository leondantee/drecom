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

// Function: entry_00355704
// Address: 0x355704 - 0x355804
void entry_00355704_0x355704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355704_0x355704");
#endif

    ctx->pc = 0x355704u;

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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x355804u;
}
