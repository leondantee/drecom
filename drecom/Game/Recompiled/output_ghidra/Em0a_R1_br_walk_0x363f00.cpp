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

// Function: Em0a_R1_br_walk
// Address: 0x363f00 - 0x364374
void Em0a_R1_br_walk_0x363f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_br_walk_0x363f00");
#endif

    switch (ctx->pc) {
        case 0x363f38u: goto label_363f38;
        case 0x363f48u: goto label_363f48;
        case 0x363f60u: goto label_363f60;
        case 0x363fdcu: goto label_363fdc;
        case 0x3640f0u: goto label_3640f0;
        case 0x364170u: goto label_364170;
        case 0x364188u: goto label_364188;
        default: break;
    }

    ctx->pc = 0x363f00u;

    // 0x363f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x363f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x363f04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x363f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x363f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363f0c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x363f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x363f10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x363f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363f14: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x363f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x363f18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x363f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363f1c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x363f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x363f20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x363f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x363f24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x363f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x363f28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x363f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x363f2c: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x363f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x363f30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x363F30u;
    SET_GPR_U32(ctx, 31, 0x363F38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x363F30u, 0x363F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F38u;
label_363f38:
    // 0x363f38: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x363f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363f3c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x363f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363f40: 0xc0455e6  jal         func_115798
    ctx->pc = 0x363F40u;
    SET_GPR_U32(ctx, 31, 0x363F48u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x363F40u, 0x363F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F48u;
label_363f48:
    // 0x363f48: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x363f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x363f4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x363f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363f50: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x363f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363f54: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x363f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363f58: 0xc058f20  jal         func_163C80
    ctx->pc = 0x363F58u;
    SET_GPR_U32(ctx, 31, 0x363F60u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x363F58u, 0x363F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F60u;
label_363f60:
    // 0x363f60: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x363f64: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x363f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363f6c: 0x0  nop
    ctx->pc = 0x363f6cu;
    // NOP
    // 0x363f70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363f74: 0x0  nop
    ctx->pc = 0x363f74u;
    // NOP
    // 0x363f78: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x363F78u;
    {
        const bool branch_taken_0x363f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363f78) {
            ctx->pc = 0x363F94u;
            goto label_363f94;
        }
    }
    ctx->pc = 0x363F80u;
    // 0x363f80: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x363f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x363f84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x363f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363f88: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x363f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363f8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x363f90: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_363f94:
    // 0x363f94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363f98: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x363f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x363f9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x363f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x363fa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363fa4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x363FA4u;
    {
        const bool branch_taken_0x363fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363fa4) {
            ctx->pc = 0x3640C0u;
            goto label_3640c0;
        }
    }
    ctx->pc = 0x363FACu;
    // 0x363fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363fb0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x363fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363fb4: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x363fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x363fb8: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x363fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x363fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363fc0: 0x0  nop
    ctx->pc = 0x363fc0u;
    // NOP
    // 0x363fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363fc8: 0x0  nop
    ctx->pc = 0x363fc8u;
    // NOP
    // 0x363fcc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x363FCCu;
    {
        const bool branch_taken_0x363fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363fcc) {
            ctx->pc = 0x3640C0u;
            goto label_3640c0;
        }
    }
    ctx->pc = 0x363FD4u;
    // 0x363fd4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363FD4u;
    SET_GPR_U32(ctx, 31, 0x363FDCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363FD4u, 0x363FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FDCu;
label_363fdc:
    // 0x363fdc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363fe0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x363fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363fe4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363fe8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x363FE8u;
    {
        const bool branch_taken_0x363fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363fe8) {
            ctx->pc = 0x364088u;
            goto label_364088;
        }
    }
    ctx->pc = 0x363FF0u;
    // 0x363ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363ff4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x363FF4u;
    {
        const bool branch_taken_0x363ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363ff4) {
            ctx->pc = 0x364050u;
            goto label_364050;
        }
    }
    ctx->pc = 0x363FFCu;
    // 0x363ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364000: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364000u;
    {
        const bool branch_taken_0x364000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364000) {
            ctx->pc = 0x364018u;
            goto label_364018;
        }
    }
    ctx->pc = 0x364008u;
    // 0x364008: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364008u;
    {
        const bool branch_taken_0x364008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364008) {
            ctx->pc = 0x364018u;
            goto label_364018;
        }
    }
    ctx->pc = 0x364010u;
    // 0x364010: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x364010u;
    {
        const bool branch_taken_0x364010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364010) {
            ctx->pc = 0x3640C0u;
            goto label_3640c0;
        }
    }
    ctx->pc = 0x364018u;
label_364018:
    // 0x364018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36401c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364020: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364024: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x364024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x364028: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36402c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36402cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364034: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364038: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36403c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36403cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364044: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364048: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x364048u;
    {
        const bool branch_taken_0x364048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364048) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364050u;
label_364050:
    // 0x364050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364058: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36405c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x36405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x364060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364064: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364068: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36406c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36406cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364074: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36407c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36407cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364080: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x364080u;
    {
        const bool branch_taken_0x364080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364080) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364088u;
label_364088:
    // 0x364088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36408c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364090: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364094: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x364094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x364098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36409c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36409cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3640a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3640a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3640a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3640acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3640b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3640b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3640b8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3640B8u;
    {
        const bool branch_taken_0x3640b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3640b8) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x3640C0u;
label_3640c0:
    // 0x3640c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3640c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3640c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3640C8u;
    {
        const bool branch_taken_0x3640c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3640c8) {
            ctx->pc = 0x364138u;
            goto label_364138;
        }
    }
    ctx->pc = 0x3640D0u;
    // 0x3640d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3640d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3640d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3640d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3640dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3640dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3640e0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3640E0u;
    {
        const bool branch_taken_0x3640e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3640e0) {
            ctx->pc = 0x364138u;
            goto label_364138;
        }
    }
    ctx->pc = 0x3640E8u;
    // 0x3640e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3640E8u;
    SET_GPR_U32(ctx, 31, 0x3640F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3640E8u, 0x3640F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640F0u;
label_3640f0:
    // 0x3640f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3640f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3640f4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3640f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3640f8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3640F8u;
    {
        const bool branch_taken_0x3640f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3640f8) {
            ctx->pc = 0x364138u;
            goto label_364138;
        }
    }
    ctx->pc = 0x364100u;
    // 0x364100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36410c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x364110: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364114: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36411c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36411cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364124: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36412c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36412cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364130: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x364130u;
    {
        const bool branch_taken_0x364130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364130) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364138u;
label_364138:
    // 0x364138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36413c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x36413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364140: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x364140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
    // 0x364144: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x364148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36414c: 0x0  nop
    ctx->pc = 0x36414cu;
    // NOP
    // 0x364150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364154: 0x0  nop
    ctx->pc = 0x364154u;
    // NOP
    // 0x364158: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x364158u;
    {
        const bool branch_taken_0x364158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364158) {
            ctx->pc = 0x364300u;
            goto label_364300;
        }
    }
    ctx->pc = 0x364160u;
    // 0x364160: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x364160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364164: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364168: 0xc0455e6  jal         func_115798
    ctx->pc = 0x364168u;
    SET_GPR_U32(ctx, 31, 0x364170u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364168u, 0x364170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364170u;
label_364170:
    // 0x364170: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364174: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364178: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x364178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36417c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364180: 0xc058f20  jal         func_163C80
    ctx->pc = 0x364180u;
    SET_GPR_U32(ctx, 31, 0x364188u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x364180u, 0x364188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364188u;
label_364188:
    // 0x364188: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36418c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x36418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364194: 0x0  nop
    ctx->pc = 0x364194u;
    // NOP
    // 0x364198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36419c: 0x0  nop
    ctx->pc = 0x36419cu;
    // NOP
    // 0x3641a0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x3641A0u;
    {
        const bool branch_taken_0x3641a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3641a0) {
            ctx->pc = 0x364254u;
            goto label_364254;
        }
    }
    ctx->pc = 0x3641A8u;
    // 0x3641a8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3641a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3641ac: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x3641acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x3641b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3641b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3641b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3641b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3641b8: 0x0  nop
    ctx->pc = 0x3641b8u;
    // NOP
    // 0x3641bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3641bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3641c0: 0x0  nop
    ctx->pc = 0x3641c0u;
    // NOP
    // 0x3641c4: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x3641C4u;
    {
        const bool branch_taken_0x3641c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3641c4) {
            ctx->pc = 0x364300u;
            goto label_364300;
        }
    }
    ctx->pc = 0x3641CCu;
    // 0x3641cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641d0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3641d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3641d4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3641d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3641d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3641d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3641dc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3641DCu;
    {
        const bool branch_taken_0x3641dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3641dc) {
            ctx->pc = 0x36421Cu;
            goto label_36421c;
        }
    }
    ctx->pc = 0x3641E4u;
    // 0x3641e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3641e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3641e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3641ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3641f0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3641f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3641f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3641f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3641fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364200: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364208: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36420c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364210: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x364214u;
    {
        const bool branch_taken_0x364214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364214) {
            ctx->pc = 0x36424Cu;
            goto label_36424c;
        }
    }
    ctx->pc = 0x36421Cu;
label_36421c:
    // 0x36421c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364224: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364228: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x364228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36422c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364230: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364238: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36423c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364240: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364248: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36424c:
    // 0x36424c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x36424Cu;
    {
        const bool branch_taken_0x36424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36424c) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364254u;
label_364254:
    // 0x364254: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364258: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x36425c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x36425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364264: 0x0  nop
    ctx->pc = 0x364264u;
    // NOP
    // 0x364268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36426c: 0x0  nop
    ctx->pc = 0x36426cu;
    // NOP
    // 0x364270: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x364270u;
    {
        const bool branch_taken_0x364270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364270) {
            ctx->pc = 0x364300u;
            goto label_364300;
        }
    }
    ctx->pc = 0x364278u;
    // 0x364278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36427c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x36427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x364280: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x364280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x364284: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364288: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x364288u;
    {
        const bool branch_taken_0x364288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364288) {
            ctx->pc = 0x3642C8u;
            goto label_3642c8;
        }
    }
    ctx->pc = 0x364290u;
    // 0x364290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364298: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36429c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3642a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3642a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3642a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3642acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3642b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3642c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3642C0u;
    {
        const bool branch_taken_0x3642c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642c0) {
            ctx->pc = 0x3642F8u;
            goto label_3642f8;
        }
    }
    ctx->pc = 0x3642C8u;
label_3642c8:
    // 0x3642c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3642c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3642cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3642d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3642d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3642d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3642d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3642dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3642e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3642e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3642ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3642f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3642f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3642f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3642f8:
    // 0x3642f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3642F8u;
    {
        const bool branch_taken_0x3642f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642f8) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364300u;
label_364300:
    // 0x364300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364304: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364308: 0x3c034538  lui         $v1, 0x4538
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17720 << 16));
    // 0x36430c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x36430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x364310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364314: 0x0  nop
    ctx->pc = 0x364314u;
    // NOP
    // 0x364318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36431c: 0x0  nop
    ctx->pc = 0x36431cu;
    // NOP
    // 0x364320: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x364320u;
    {
        const bool branch_taken_0x364320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364320) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364328u;
    // 0x364328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36432c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364334: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x364334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364338: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36433c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36433cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36434c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36434cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364358: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x364358u;
    {
        const bool branch_taken_0x364358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364358) {
            ctx->pc = 0x364360u;
            goto label_364360;
        }
    }
    ctx->pc = 0x364360u;
label_364360:
    // 0x364360: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x364360u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364368: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x364368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36436c: 0x3e00008  jr          $ra
    ctx->pc = 0x36436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364374u;
}
