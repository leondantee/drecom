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

// Function: Em18_eyelid_move
// Address: 0x2da1e0 - 0x2da560
void Em18_eyelid_move_0x2da1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_eyelid_move_0x2da1e0");
#endif

    switch (ctx->pc) {
        case 0x2da484u: goto label_2da484;
        case 0x2da494u: goto label_2da494;
        case 0x2da50cu: goto label_2da50c;
        case 0x2da544u: goto label_2da544;
        default: break;
    }

    ctx->pc = 0x2da1e0u;

    // 0x2da1e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2da1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2da1e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2da1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2da1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da1f4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2da1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2da1f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2da1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da1fc: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2da200: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2da200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da204: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da208: 0x24513070  addiu       $s1, $v0, 0x3070
    ctx->pc = 0x2da208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x2da20c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2da20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da210: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da214: 0x24523200  addiu       $s2, $v0, 0x3200
    ctx->pc = 0x2da214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
    // 0x2da218: 0x920200d8  lbu         $v0, 0xD8($s0)
    ctx->pc = 0x2da218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2da21c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2da21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da220: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2da220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2da224: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2DA224u;
    {
        const bool branch_taken_0x2da224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da224) {
            ctx->pc = 0x2DA448u;
            goto label_2da448;
        }
    }
    ctx->pc = 0x2DA22Cu;
    // 0x2da22c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2da22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2da230: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2DA230u;
    {
        const bool branch_taken_0x2da230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da230) {
            ctx->pc = 0x2DA398u;
            goto label_2da398;
        }
    }
    ctx->pc = 0x2DA238u;
    // 0x2da238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da23c: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DA23Cu;
    {
        const bool branch_taken_0x2da23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da23c) {
            ctx->pc = 0x2DA2F4u;
            goto label_2da2f4;
        }
    }
    ctx->pc = 0x2DA244u;
    // 0x2da244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da248: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA248u;
    {
        const bool branch_taken_0x2da248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da248) {
            ctx->pc = 0x2DA260u;
            goto label_2da260;
        }
    }
    ctx->pc = 0x2DA250u;
    // 0x2da250: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2DA250u;
    {
        const bool branch_taken_0x2da250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da250) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA258u;
    // 0x2da258: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2DA258u;
    {
        const bool branch_taken_0x2da258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da258) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA260u;
label_2da260:
    // 0x2da260: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da268: 0x0  nop
    ctx->pc = 0x2da268u;
    // NOP
    // 0x2da26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da270: 0x0  nop
    ctx->pc = 0x2da270u;
    // NOP
    // 0x2da274: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2DA274u;
    {
        const bool branch_taken_0x2da274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da274) {
            ctx->pc = 0x2DA2DCu;
            goto label_2da2dc;
        }
    }
    ctx->pc = 0x2DA27Cu;
    // 0x2da27c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da280: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da284: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da28c: 0x0  nop
    ctx->pc = 0x2da28cu;
    // NOP
    // 0x2da290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da294: 0x0  nop
    ctx->pc = 0x2da294u;
    // NOP
    // 0x2da298: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA298u;
    {
        const bool branch_taken_0x2da298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da298) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA2A0u;
    // 0x2da2a0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2a4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da2a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2b0: 0x0  nop
    ctx->pc = 0x2da2b0u;
    // NOP
    // 0x2da2b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da2b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2DA2BCu;
    {
        const bool branch_taken_0x2da2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2bc) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA2C4u;
label_2da2c4:
    // 0x2da2c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2c8: 0x0  nop
    ctx->pc = 0x2da2c8u;
    // NOP
    // 0x2da2cc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2d0: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da2d4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DA2D4u;
    {
        const bool branch_taken_0x2da2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2d4) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA2DCu;
label_2da2dc:
    // 0x2da2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2e0: 0x0  nop
    ctx->pc = 0x2da2e0u;
    // NOP
    // 0x2da2e4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2e8: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da2ec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2DA2ECu;
    {
        const bool branch_taken_0x2da2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2ec) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA2F4u;
label_2da2f4:
    // 0x2da2f4: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2f8: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da2fc: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da304: 0x0  nop
    ctx->pc = 0x2da304u;
    // NOP
    // 0x2da308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da30c: 0x0  nop
    ctx->pc = 0x2da30cu;
    // NOP
    // 0x2da310: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2DA310u;
    {
        const bool branch_taken_0x2da310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da310) {
            ctx->pc = 0x2DA380u;
            goto label_2da380;
        }
    }
    ctx->pc = 0x2DA318u;
    // 0x2da318: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da31c: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x2da31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
    // 0x2da320: 0x344290fd  ori         $v0, $v0, 0x90FD
    ctx->pc = 0x2da320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37117);
    // 0x2da324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da328: 0x0  nop
    ctx->pc = 0x2da328u;
    // NOP
    // 0x2da32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da330: 0x0  nop
    ctx->pc = 0x2da330u;
    // NOP
    // 0x2da334: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA334u;
    {
        const bool branch_taken_0x2da334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da334) {
            ctx->pc = 0x2DA360u;
            goto label_2da360;
        }
    }
    ctx->pc = 0x2DA33Cu;
    // 0x2da33c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da340: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da344: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da34c: 0x0  nop
    ctx->pc = 0x2da34cu;
    // NOP
    // 0x2da350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da354: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da358: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2DA358u;
    {
        const bool branch_taken_0x2da358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da358) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA360u;
label_2da360:
    // 0x2da360: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da364: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da36c: 0x0  nop
    ctx->pc = 0x2da36cu;
    // NOP
    // 0x2da370: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da374: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da378: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2DA378u;
    {
        const bool branch_taken_0x2da378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da378) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA380u;
label_2da380:
    // 0x2da380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da384: 0x0  nop
    ctx->pc = 0x2da384u;
    // NOP
    // 0x2da388: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da38c: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da390: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DA390u;
    {
        const bool branch_taken_0x2da390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da390) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA398u;
label_2da398:
    // 0x2da398: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da39c: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da3a0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3a8: 0x0  nop
    ctx->pc = 0x2da3a8u;
    // NOP
    // 0x2da3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3b0: 0x0  nop
    ctx->pc = 0x2da3b0u;
    // NOP
    // 0x2da3b4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2DA3B4u;
    {
        const bool branch_taken_0x2da3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3b4) {
            ctx->pc = 0x2DA434u;
            goto label_2da434;
        }
    }
    ctx->pc = 0x2DA3BCu;
    // 0x2da3bc: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da3c0: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x2da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
    // 0x2da3c4: 0x344290fd  ori         $v0, $v0, 0x90FD
    ctx->pc = 0x2da3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37117);
    // 0x2da3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3cc: 0x0  nop
    ctx->pc = 0x2da3ccu;
    // NOP
    // 0x2da3d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3d4: 0x0  nop
    ctx->pc = 0x2da3d4u;
    // NOP
    // 0x2da3d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA3D8u;
    {
        const bool branch_taken_0x2da3d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3d8) {
            ctx->pc = 0x2DA404u;
            goto label_2da404;
        }
    }
    ctx->pc = 0x2DA3E0u;
    // 0x2da3e0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da3e4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da3e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3f0: 0x0  nop
    ctx->pc = 0x2da3f0u;
    // NOP
    // 0x2da3f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da3f8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da3fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA3FCu;
    {
        const bool branch_taken_0x2da3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3fc) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA404u;
label_2da404:
    // 0x2da404: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da408: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da410: 0x0  nop
    ctx->pc = 0x2da410u;
    // NOP
    // 0x2da414: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da418: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2da418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2da41c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2da41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2da420: 0x920200d8  lbu         $v0, 0xD8($s0)
    ctx->pc = 0x2da420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2da424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da428: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da42c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA42Cu;
    {
        const bool branch_taken_0x2da42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da42c) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA434u;
label_2da434:
    // 0x2da434: 0x920200d8  lbu         $v0, 0xD8($s0)
    ctx->pc = 0x2da434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2da438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da43c: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da440: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA440u;
    {
        const bool branch_taken_0x2da440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da440) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA448u;
label_2da448:
    // 0x2da448: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2da448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2da44c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA44Cu;
    {
        const bool branch_taken_0x2da44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da44c) {
            ctx->pc = 0x2DA468u;
            goto label_2da468;
        }
    }
    ctx->pc = 0x2DA454u;
    // 0x2da454: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2da454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2da458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2da458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2da45c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2da45cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2da460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA460u;
    {
        const bool branch_taken_0x2da460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da460) {
            ctx->pc = 0x2DA470u;
            goto label_2da470;
        }
    }
    ctx->pc = 0x2DA468u;
label_2da468:
    // 0x2da468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da46c: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da46cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
label_2da470:
    // 0x2da470: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2da470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da474: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2da474u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2da478: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2da478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2da47c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DA47Cu;
    SET_GPR_U32(ctx, 31, 0x2DA484u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DA47Cu, 0x2DA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA484u;
label_2da484:
    // 0x2da484: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2da484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2da488: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x2da488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da48c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DA48Cu;
    SET_GPR_U32(ctx, 31, 0x2DA494u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DA48Cu, 0x2DA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA494u;
label_2da494:
    // 0x2da494: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da49c: 0x0  nop
    ctx->pc = 0x2da49cu;
    // NOP
    // 0x2da4a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da4a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da4a4: 0x0  nop
    ctx->pc = 0x2da4a4u;
    // NOP
    // 0x2da4a8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x2DA4A8u;
    {
        const bool branch_taken_0x2da4a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da4a8) {
            ctx->pc = 0x2DA544u;
            goto label_2da544;
        }
    }
    ctx->pc = 0x2DA4B0u;
    // 0x2da4b0: 0x3c02423e  lui         $v0, 0x423E
    ctx->pc = 0x2da4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16958 << 16));
    // 0x2da4b4: 0x3442fc66  ori         $v0, $v0, 0xFC66
    ctx->pc = 0x2da4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64614);
    // 0x2da4b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da4bc: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2da4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da4c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2da4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2da4c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2da4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2da4c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4cc: 0x0  nop
    ctx->pc = 0x2da4ccu;
    // NOP
    // 0x2da4d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2da4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2da4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4d8: 0x0  nop
    ctx->pc = 0x2da4d8u;
    // NOP
    // 0x2da4dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2da4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2da4e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2da4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4e8: 0x0  nop
    ctx->pc = 0x2da4e8u;
    // NOP
    // 0x2da4ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2da4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2da4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da4f8: 0x0  nop
    ctx->pc = 0x2da4f8u;
    // NOP
    // 0x2da4fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2da4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2da500: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da504: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DA504u;
    SET_GPR_U32(ctx, 31, 0x2DA50Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DA504u, 0x2DA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA50Cu;
label_2da50c:
    // 0x2da50c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2da50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2da510: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2da510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2da514: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2da514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2da518: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x2da51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da520: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2da520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2da524: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2da524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da528: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2da528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2da52c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da530: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2da530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da534: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2da534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da538: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2da538u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2da53c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DA53Cu;
    SET_GPR_U32(ctx, 31, 0x2DA544u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DA53Cu, 0x2DA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA544u;
label_2da544:
    // 0x2da544: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2da544u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da554: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2da554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da558: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA560u;
}
