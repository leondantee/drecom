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

// Function: Em19_R1_return
// Address: 0x2e5120 - 0x2e5384
void Em19_R1_return_0x2e5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_return_0x2e5120");
#endif

    switch (ctx->pc) {
        case 0x2e519cu: goto label_2e519c;
        case 0x2e5270u: goto label_2e5270;
        case 0x2e527cu: goto label_2e527c;
        case 0x2e528cu: goto label_2e528c;
        case 0x2e5298u: goto label_2e5298;
        default: break;
    }

    ctx->pc = 0x2e5120u;

    // 0x2e5120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e5124: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2e5124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2e5128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e512c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5134: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2e5138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e513c: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2e513cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e5140: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e5140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5144: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e5144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e5148: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e5148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e514c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e5150: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e5150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e5154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5158: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e5158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e515c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e515cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5164: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5164u;
    {
        const bool branch_taken_0x2e5164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5164) {
            ctx->pc = 0x2E51BCu;
            goto label_2e51bc;
        }
    }
    ctx->pc = 0x2E516Cu;
    // 0x2e516c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E516Cu;
    {
        const bool branch_taken_0x2e516c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e516c) {
            ctx->pc = 0x2E517Cu;
            goto label_2e517c;
        }
    }
    ctx->pc = 0x2E5174u;
    // 0x2e5174: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2E5174u;
    {
        const bool branch_taken_0x2e5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5174) {
            ctx->pc = 0x2E5368u;
            goto label_2e5368;
        }
    }
    ctx->pc = 0x2E517Cu;
label_2e517c:
    // 0x2e517c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5180: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5184: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5188: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x2e5188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x2e518c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5194u;
    SET_GPR_U32(ctx, 31, 0x2E519Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5194u, 0x2E519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E519Cu;
label_2e519c:
    // 0x2e519c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e51a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e51a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51a8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2e51a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2e51ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e51b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e51b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e51b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e51b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e51bc:
    // 0x2e51bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e51c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e51c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e51c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e51cc: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e51d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e51d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e51d4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e51d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e51d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51dc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e51e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e51e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51e4: 0x0  nop
    ctx->pc = 0x2e51e4u;
    // NOP
    // 0x2e51e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e51e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e51ec: 0x0  nop
    ctx->pc = 0x2e51ecu;
    // NOP
    // 0x2e51f0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E51F0u;
    {
        const bool branch_taken_0x2e51f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e51f0) {
            ctx->pc = 0x2E5230u;
            goto label_2e5230;
        }
    }
    ctx->pc = 0x2E51F8u;
    // 0x2e51f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51fc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5208: 0x0  nop
    ctx->pc = 0x2e5208u;
    // NOP
    // 0x2e520c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e520cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5210: 0x0  nop
    ctx->pc = 0x2e5210u;
    // NOP
    // 0x2e5214: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5214u;
    {
        const bool branch_taken_0x2e5214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5214) {
            ctx->pc = 0x2E5260u;
            goto label_2e5260;
        }
    }
    ctx->pc = 0x2E521Cu;
    // 0x2e521c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e521cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5220: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5224: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e5228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E5228u;
    {
        const bool branch_taken_0x2e5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5228) {
            ctx->pc = 0x2E5260u;
            goto label_2e5260;
        }
    }
    ctx->pc = 0x2E5230u;
label_2e5230:
    // 0x2e5230: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5234: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5238: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5240: 0x0  nop
    ctx->pc = 0x2e5240u;
    // NOP
    // 0x2e5244: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5248: 0x0  nop
    ctx->pc = 0x2e5248u;
    // NOP
    // 0x2e524c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E524Cu;
    {
        const bool branch_taken_0x2e524c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e524c) {
            ctx->pc = 0x2E5260u;
            goto label_2e5260;
        }
    }
    ctx->pc = 0x2E5254u;
    // 0x2e5254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5258: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e525c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e525cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e5260:
    // 0x2e5260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5264: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5268: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5268u;
    SET_GPR_U32(ctx, 31, 0x2E5270u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5268u, 0x2E5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5270u;
label_2e5270:
    // 0x2e5270: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5274: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E5274u;
    SET_GPR_U32(ctx, 31, 0x2E527Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E5274u, 0x2E527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E527Cu;
label_2e527c:
    // 0x2e527c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5280: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e5280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5284: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E5284u;
    SET_GPR_U32(ctx, 31, 0x2E528Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E5284u, 0x2E528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E528Cu;
label_2e528c:
    // 0x2e528c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5290: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E5290u;
    SET_GPR_U32(ctx, 31, 0x2E5298u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E5290u, 0x2E5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5298u;
label_2e5298:
    // 0x2e5298: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e529c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e529cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e52a0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E52A0u;
    {
        const bool branch_taken_0x2e52a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e52a0) {
            ctx->pc = 0x2E5368u;
            goto label_2e5368;
        }
    }
    ctx->pc = 0x2E52A8u;
    // 0x2e52a8: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2e52a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e52ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e52acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e52b0: 0x8c24efa8  lw          $a0, -0x1058($at)
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x2e52b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E52B8u;
    {
        const bool branch_taken_0x2e52b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e52b8) {
            ctx->pc = 0x2E52C8u;
            goto label_2e52c8;
        }
    }
    ctx->pc = 0x2E52C0u;
    // 0x2e52c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e52c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e52c4: 0xac30efa8  sw          $s0, -0x1058($at)
    ctx->pc = 0x2e52c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
label_2e52c8:
    // 0x2e52c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e52cc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2e52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x2e52d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e52d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e52d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e52d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e52d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e52dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e52e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e52e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e52ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e52f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e52f8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e52fc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e5300: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e5304: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5308: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e5308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e530c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5310: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5314: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5318: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e531c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5320: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e5320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5328: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e532c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5330: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e533c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5340: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e5340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e5344: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e5344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e5348: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e5348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e534c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e5350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5354: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x2e5354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2e5358: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2e5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2e535c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e5360: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e5360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e5364: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x2e5364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
label_2e5368:
    // 0x2e5368: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2e5368u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e536c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e536cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5378: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e5378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e537c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5384u;
}
