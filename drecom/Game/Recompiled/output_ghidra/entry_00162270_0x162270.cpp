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

// Function: entry_00162270
// Address: 0x162270 - 0x1623a4
void entry_00162270_0x162270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162270_0x162270");
#endif

    ctx->pc = 0x162270u;

    // 0x162270: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x162274: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x162278: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x162278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16227c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16227Cu;
    {
        const bool branch_taken_0x16227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16227c) {
            ctx->pc = 0x1621F8u;
            return;
        }
    }
    ctx->pc = 0x162284u;
    // 0x162284: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x162284u;
    {
        const bool branch_taken_0x162284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x162284) {
            ctx->pc = 0x1623F0u;
            return;
        }
    }
    ctx->pc = 0x16228Cu;
    // 0x16228c: 0xc64111e0  lwc1        $f1, 0x11E0($s2)
    ctx->pc = 0x16228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162290: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x162290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x162294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162298: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x16229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622a0: 0x0  nop
    ctx->pc = 0x1622a0u;
    // NOP
    // 0x1622a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1622a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1622a8: 0xc640128c  lwc1        $f0, 0x128C($s2)
    ctx->pc = 0x1622a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1622acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622b0: 0x0  nop
    ctx->pc = 0x1622b0u;
    // NOP
    // 0x1622b4: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x1622B4u;
    {
        const bool branch_taken_0x1622b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622b4) {
            ctx->pc = 0x1623F0u;
            return;
        }
    }
    ctx->pc = 0x1622BCu;
    // 0x1622bc: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x1622bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1622c0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1622c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622c8: 0x0  nop
    ctx->pc = 0x1622c8u;
    // NOP
    // 0x1622cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1622ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1622d0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1622d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1622d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622d8: 0x0  nop
    ctx->pc = 0x1622d8u;
    // NOP
    // 0x1622dc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x1622DCu;
    {
        const bool branch_taken_0x1622dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622dc) {
            ctx->pc = 0x1623F0u;
            return;
        }
    }
    ctx->pc = 0x1622E4u;
    // 0x1622e4: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x1622e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1622e8: 0xc64011e4  lwc1        $f0, 0x11E4($s2)
    ctx->pc = 0x1622e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1622ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1622f0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1622f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1622f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622f8: 0x0  nop
    ctx->pc = 0x1622f8u;
    // NOP
    // 0x1622fc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1622fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162300: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x162300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162308: 0x0  nop
    ctx->pc = 0x162308u;
    // NOP
    // 0x16230c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x16230Cu;
    {
        const bool branch_taken_0x16230c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16230c) {
            ctx->pc = 0x1623F0u;
            return;
        }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x162318: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x162318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x16231c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x16231cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x162320: 0xae1213f0  sw          $s2, 0x13F0($s0)
    ctx->pc = 0x162320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 18));
    // 0x162324: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162328: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x16232c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x162330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x162330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x162334: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162338: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x162338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16233c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x16233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x162340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162344: 0x0  nop
    ctx->pc = 0x162344u;
    // NOP
    // 0x162348: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16234c: 0x0  nop
    ctx->pc = 0x16234cu;
    // NOP
    // 0x162350: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x162350u;
    {
        const bool branch_taken_0x162350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162350) {
            ctx->pc = 0x1623A4u;
            return;
        }
    }
    ctx->pc = 0x162358u;
    // 0x162358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16235c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16235cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162364: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162368: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16236c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16236cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162374: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162378: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16237c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x16237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x162380: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162384: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162388: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x162388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16238c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16238cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162390: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x162390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162394: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x162398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16239c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x16239Cu;
    {
        const bool branch_taken_0x16239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16239c) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x1623A4u;
}
