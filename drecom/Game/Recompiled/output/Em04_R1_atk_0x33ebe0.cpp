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

// Function: Em04_R1_atk
// Address: 0x33ebe0 - 0x33eda4
void Em04_R1_atk_0x33ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R1_atk_0x33ebe0");
#endif

    switch (ctx->pc) {
        case 0x33ebfcu: goto label_33ebfc;
        default: break;
    }

    ctx->pc = 0x33ebe0u;

    // 0x33ebe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ebe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x33ebe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x33ebe8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x33ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x33ebec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ebf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33ebf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ebf4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x33EBF4u;
    SET_GPR_U32(ctx, 31, 0x33EBFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x33EBF4u, 0x33EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBFCu;
label_33ebfc:
    // 0x33ebfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x33ec00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33ec04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33ec04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33ec08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ec0c: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x33EC0Cu;
    {
        const bool branch_taken_0x33ec0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ec0c) {
            ctx->pc = 0x33ECB8u;
            goto label_33ecb8;
        }
    }
    ctx->pc = 0x33EC14u;
    // 0x33ec14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ec18: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33EC18u;
    {
        const bool branch_taken_0x33ec18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ec18) {
            ctx->pc = 0x33EC38u;
            goto label_33ec38;
        }
    }
    ctx->pc = 0x33EC20u;
    // 0x33ec20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EC20u;
    {
        const bool branch_taken_0x33ec20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec20) {
            ctx->pc = 0x33EC30u;
            goto label_33ec30;
        }
    }
    ctx->pc = 0x33EC28u;
    // 0x33ec28: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x33EC28u;
    {
        const bool branch_taken_0x33ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec28) {
            ctx->pc = 0x33ED94u;
            goto label_33ed94;
        }
    }
    ctx->pc = 0x33EC30u;
label_33ec30:
    // 0x33ec30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec34: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x33ec34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_33ec38:
    // 0x33ec38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec3c: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x33ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x33ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ec44: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x33ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x33ec48: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33ec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33ec4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec50: 0x0  nop
    ctx->pc = 0x33ec50u;
    // NOP
    // 0x33ec54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33ec54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33ec58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ec5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec60: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ec68: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x33ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x33ec6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec74: 0x0  nop
    ctx->pc = 0x33ec74u;
    // NOP
    // 0x33ec78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ec78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ec7c: 0x0  nop
    ctx->pc = 0x33ec7cu;
    // NOP
    // 0x33ec80: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x33EC80u;
    {
        const bool branch_taken_0x33ec80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ec80) {
            ctx->pc = 0x33ED94u;
            goto label_33ed94;
        }
    }
    ctx->pc = 0x33EC88u;
    // 0x33ec88: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x33ec8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ec90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec98: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec9c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ec9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33eca0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eca4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x33eca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33eca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ecac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x33ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33ecb0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x33ECB0u;
    {
        const bool branch_taken_0x33ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ecb0) {
            ctx->pc = 0x33ED94u;
            goto label_33ed94;
        }
    }
    ctx->pc = 0x33ECB8u;
label_33ecb8:
    // 0x33ecb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ecbc: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ecc0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x33ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ecc4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x33ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x33ecc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33eccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ecccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ecd0: 0x0  nop
    ctx->pc = 0x33ecd0u;
    // NOP
    // 0x33ecd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33ecd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ecd8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ecd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ecdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ece0: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ece4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ece8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33ecec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ecf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ecf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ecf4: 0x0  nop
    ctx->pc = 0x33ecf4u;
    // NOP
    // 0x33ecf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33ecf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ecfc: 0x0  nop
    ctx->pc = 0x33ecfcu;
    // NOP
    // 0x33ed00: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x33ED00u;
    {
        const bool branch_taken_0x33ed00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ed00) {
            ctx->pc = 0x33ED94u;
            goto label_33ed94;
        }
    }
    ctx->pc = 0x33ED08u;
    // 0x33ed08: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33ed0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ed10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ed10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ed14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed18: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ed1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ed20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed24: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x33ed24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x33ed28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ed2c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x33ed2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x33ed30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33ed34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ed34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33ed38: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33ed3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ed3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33ed40: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x33ed40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33ed44: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x33ED44u;
    {
        const bool branch_taken_0x33ed44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed44) {
            ctx->pc = 0x33ED84u;
            goto label_33ed84;
        }
    }
    ctx->pc = 0x33ED4Cu;
    // 0x33ed4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ed50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ed58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ed5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x33ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ed64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ed6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33ed70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ed74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33ed7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33ED7Cu;
    {
        const bool branch_taken_0x33ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed7c) {
            ctx->pc = 0x33ED94u;
            goto label_33ed94;
        }
    }
    ctx->pc = 0x33ED84u;
label_33ed84:
    // 0x33ed84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed88: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x33ed88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ed8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ed90: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x33ed90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_33ed94:
    // 0x33ed94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33ed94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ed98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33ed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x33ED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EDA4u;
}
