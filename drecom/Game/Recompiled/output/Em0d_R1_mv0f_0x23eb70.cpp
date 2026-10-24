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

// Function: Em0d_R1_mv0f
// Address: 0x23eb70 - 0x23f3ec
void Em0d_R1_mv0f_0x23eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv0f_0x23eb70");
#endif

    switch (ctx->pc) {
        case 0x23eb88u: goto label_23eb88;
        case 0x23ec14u: goto label_23ec14;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edb0u: goto label_23edb0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef80u: goto label_23ef80;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efc4u: goto label_23efc4;
        case 0x23f090u: goto label_23f090;
        case 0x23f174u: goto label_23f174;
        case 0x23f1b0u: goto label_23f1b0;
        case 0x23f1dcu: goto label_23f1dc;
        case 0x23f210u: goto label_23f210;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f260u: goto label_23f260;
        case 0x23f26cu: goto label_23f26c;
        default: break;
    }

    ctx->pc = 0x23eb70u;

    // 0x23eb70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23eb74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x23eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x23eb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23eb7c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x23eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x23eb80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23EB80u;
    SET_GPR_U32(ctx, 31, 0x23EB88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23EB80u, 0x23EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB88u;
label_23eb88:
    // 0x23eb88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23eb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23eb8c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23eb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23eb90: 0x24700003  addiu       $s0, $v1, 0x3
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23eb94: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x23eb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x23eb98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23eb98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23eb9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eba0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23eba4: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x23eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x23eba8: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebac: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x23ebacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23ebb0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x23ebb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23ebb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ebb8: 0x10c5018a  beq         $a2, $a1, . + 4 + (0x18A << 2)
    ctx->pc = 0x23EBB8u;
    {
        const bool branch_taken_0x23ebb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x23ebb8) {
            ctx->pc = 0x23F1E4u;
            goto label_23f1e4;
        }
    }
    ctx->pc = 0x23EBC0u;
    // 0x23ebc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ebc4: 0x10c400dc  beq         $a2, $a0, . + 4 + (0xDC << 2)
    ctx->pc = 0x23EBC4u;
    {
        const bool branch_taken_0x23ebc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x23ebc4) {
            ctx->pc = 0x23EF38u;
            goto label_23ef38;
        }
    }
    ctx->pc = 0x23EBCCu;
    // 0x23ebcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ebd0: 0x10c3008f  beq         $a2, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x23EBD0u;
    {
        const bool branch_taken_0x23ebd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ebd0) {
            ctx->pc = 0x23EE10u;
            goto label_23ee10;
        }
    }
    ctx->pc = 0x23EBD8u;
    // 0x23ebd8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EBD8u;
    {
        const bool branch_taken_0x23ebd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ebd8) {
            ctx->pc = 0x23EBE8u;
            goto label_23ebe8;
        }
    }
    ctx->pc = 0x23EBE0u;
    // 0x23ebe0: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x23EBE0u;
    {
        const bool branch_taken_0x23ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ebe0) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23EBE8u;
label_23ebe8:
    // 0x23ebe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ebec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebf0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23ebf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ebf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ebfc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23ec00: 0x2406372a  addiu       $a2, $zero, 0x372A
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14122));
    // 0x23ec04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ec08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23ec0c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23EC0Cu;
    SET_GPR_U32(ctx, 31, 0x23EC14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23EC0Cu, 0x23EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC14u;
label_23ec14:
    // 0x23ec14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ec14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec20: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23ec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23ec24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ec24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec30: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23ec30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23ec34: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x23ec38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23ec38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec40: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23ec44: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23ec48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23ec4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec58: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23ec5c: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
    // 0x23ec60: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x23ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23ec64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec6c: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ec70: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x23ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x23ec74: 0x3c023b49  lui         $v0, 0x3B49
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15177 << 16));
    // 0x23ec78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ec7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ec7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec84: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ec88: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23ec8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec90: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x23ec90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ec94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ec98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ec9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eca0: 0xa0850072  sb          $a1, 0x72($a0)
    ctx->pc = 0x23eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x23eca4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eca8: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ecac: 0xa0a00070  sb          $zero, 0x70($a1)
    ctx->pc = 0x23ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecb4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x23ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23ecb8: 0xa0600071  sb          $zero, 0x71($v1)
    ctx->pc = 0x23ecb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecbc: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x23ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23ecc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecc4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23ecc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x23ecc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eccc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ecd0: 0x24700120  addiu       $s0, $v1, 0x120
    ctx->pc = 0x23ecd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ecd4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ecd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecdc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ece0: 0x247001b0  addiu       $s0, $v1, 0x1B0
    ctx->pc = 0x23ece0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x23ece4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ece8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecec: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ecf0: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x23ecf4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ecf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ecf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ecfc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ed00: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x23ed04: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed10: 0x247006c0  addiu       $s0, $v1, 0x6C0
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x23ed14: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed1c: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x23ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed20: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x23ed20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x23ed24: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed2c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed30: 0x24700240  addiu       $s0, $v1, 0x240
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x23ed34: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed3c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed40: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x23ed40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x23ed44: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x23ed50: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x23ed54: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed5c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23ed60: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x23ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x23ed64: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23ed64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ed68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ed70: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23ed74: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23ed78: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23ed7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed80: 0xac40121c  sw          $zero, 0x121C($v0)
    ctx->pc = 0x23ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 0));
    // 0x23ed84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ed88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ed8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ed90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ed90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ed94: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23ed98: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ed9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ed9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23eda0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EDA0u;
    SET_GPR_U32(ctx, 31, 0x23EDA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EDA0u, 0x23EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA8u;
label_23eda8:
    // 0x23eda8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23EDA8u;
    SET_GPR_U32(ctx, 31, 0x23EDB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23EDA8u, 0x23EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDB0u;
label_23edb0:
    // 0x23edb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23edb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23edb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23EDB8u;
    {
        const bool branch_taken_0x23edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23edb8) {
            ctx->pc = 0x23EDECu;
            goto label_23edec;
        }
    }
    ctx->pc = 0x23EDC0u;
    // 0x23edc0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23edc4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23edc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23edc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23edcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23edd0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x23edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23edd4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23edd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23edd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23eddc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EDDCu;
    SET_GPR_U32(ctx, 31, 0x23EDE4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EDDCu, 0x23EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDE4u;
label_23ede4:
    // 0x23ede4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23EDE4u;
    {
        const bool branch_taken_0x23ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ede4) {
            ctx->pc = 0x23EE10u;
            goto label_23ee10;
        }
    }
    ctx->pc = 0x23EDECu;
label_23edec:
    // 0x23edec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23edf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23edf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23edf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23edf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23edfc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23ee00: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23ee04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ee04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ee08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EE08u;
    SET_GPR_U32(ctx, 31, 0x23EE10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EE08u, 0x23EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE10u;
label_23ee10:
    // 0x23ee10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee18: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x23ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x23ee1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ee20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23ee24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ee28: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ee2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ee30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ee34: 0xc05c848  jal         func_172120
    ctx->pc = 0x23EE34u;
    SET_GPR_U32(ctx, 31, 0x23EE3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23EE34u, 0x23EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE3Cu;
label_23ee3c:
    // 0x23ee3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23ee40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee44: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee48: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ee4c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ee4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ee50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23EE50u;
    SET_GPR_U32(ctx, 31, 0x23EE58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23EE50u, 0x23EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE58u;
label_23ee58:
    // 0x23ee58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee5c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ee60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee64: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee68: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x23ee6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ee70: 0x0  nop
    ctx->pc = 0x23ee70u;
    // NOP
    // 0x23ee74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ee74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ee78: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23ee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23ee7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23ee84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23EE84u;
    SET_GPR_U32(ctx, 31, 0x23EE8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23EE84u, 0x23EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE8Cu;
label_23ee8c:
    // 0x23ee8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee90: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23EE90u;
    SET_GPR_U32(ctx, 31, 0x23EE98u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23EE90u, 0x23EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE98u;
label_23ee98:
    // 0x23ee98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee9c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x23eea0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23eea4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x23eea4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23eea8: 0x1480010b  bnez        $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23EEB0u;
    // 0x23eeb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23eeb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eeb8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23eeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eec4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eec8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23eecc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x23eed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eed8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eedc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23eee0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x23eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x23eee4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23eee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eeec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eef0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eef4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23eef8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23eefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ef00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ef08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23ef0c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ef10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ef14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ef18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef1c: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23ef20: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23ef24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ef24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ef28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EF28u;
    SET_GPR_U32(ctx, 31, 0x23EF30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EF28u, 0x23EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF30u;
label_23ef30:
    // 0x23ef30: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x23EF30u;
    {
        const bool branch_taken_0x23ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef30) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23EF38u;
label_23ef38:
    // 0x23ef38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef44: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ef48: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ef4c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ef50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ef54: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ef58: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23ef5c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23EF5Cu;
    SET_GPR_U32(ctx, 31, 0x23EF64u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23EF5Cu, 0x23EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF64u;
label_23ef64:
    // 0x23ef64: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ef64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23ef68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef6c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ef70: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ef74: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ef74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ef78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23EF78u;
    SET_GPR_U32(ctx, 31, 0x23EF80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23EF78u, 0x23EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF80u;
label_23ef80:
    // 0x23ef80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ef88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23ef94: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x23ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23ef98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ef9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23efa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23EFA0u;
    SET_GPR_U32(ctx, 31, 0x23EFA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23EFA0u, 0x23EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFA8u;
label_23efa8:
    // 0x23efa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23efb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23EFB0u;
    SET_GPR_U32(ctx, 31, 0x23EFB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23EFB0u, 0x23EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFB8u;
label_23efb8:
    // 0x23efb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efbc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23EFBCu, 0x23EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efc8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23efcc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x23efd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23efd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23efd4: 0x0  nop
    ctx->pc = 0x23efd4u;
    // NOP
    // 0x23efd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23efd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23efdc: 0x0  nop
    ctx->pc = 0x23efdcu;
    // NOP
    // 0x23efe0: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
    ctx->pc = 0x23EFE0u;
    {
        const bool branch_taken_0x23efe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23efe0) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23EFE8u;
    // 0x23efe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23efec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eff0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eff8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23effc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f000: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23f004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f008: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f00c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f010: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23f014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23f018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f01c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f020: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f024: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23f024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23f028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23f02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f030: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f038: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23f03c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x23f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23f040: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f044: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23f044u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f04c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f050: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f054: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x23f054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f05c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f060: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x23f060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f068: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f06c: 0xa0400071  sb          $zero, 0x71($v0)
    ctx->pc = 0x23f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f074: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f078: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23f078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23f07c: 0x24063700  addiu       $a2, $zero, 0x3700
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14080));
    // 0x23f080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23f088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23F088u;
    SET_GPR_U32(ctx, 31, 0x23F090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23F088u, 0x23F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F090u;
label_23f090:
    // 0x23f090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f094: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f098: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0ac: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x23f0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0c0: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x23f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x23f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0d4: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x23f0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x23f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f0e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0e8: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x23f0ec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f0f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0f4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f0f8: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x23f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x23f0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f100: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f104: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f108: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f10c: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x23f10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x23f110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f114: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f11c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f120: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x23f120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x23f124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f128: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f130: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23f134: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x23f138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f13c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x23f13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f144: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x23f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23f148: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x23f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x23f14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f150: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x23f150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f154: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f158: 0x24c51330  addiu       $a1, $a2, 0x1330
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23f15c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x23f160: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x23f164: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23f164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23f168: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23f168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x23f16c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F16Cu;
    SET_GPR_U32(ctx, 31, 0x23F174u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F16Cu, 0x23F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F174u;
label_23f174:
    // 0x23f174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f178: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f17c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23F17Cu;
    {
        const bool branch_taken_0x23f17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f17c) {
            ctx->pc = 0x23F1B8u;
            goto label_23f1b8;
        }
    }
    ctx->pc = 0x23F184u;
    // 0x23f184: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f188: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x23f18c: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x23f18cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x23f190: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x23f190u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f194: 0x24080520  addiu       $t0, $zero, 0x520
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23f198: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x23f198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x23f19c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x23f1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23f1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23f1a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f1a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f1a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F1A8u;
    SET_GPR_U32(ctx, 31, 0x23F1B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F1A8u, 0x23F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1B0u;
label_23f1b0:
    // 0x23f1b0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x23F1B0u;
    {
        const bool branch_taken_0x23f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1b0) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23F1B8u;
label_23f1b8:
    // 0x23f1b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f1bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f1c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1c8: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x23f1cc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f1d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f1d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f1d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F1D4u;
    SET_GPR_U32(ctx, 31, 0x23F1DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F1D4u, 0x23F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1DCu;
label_23f1dc:
    // 0x23f1dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23F1DCu;
    {
        const bool branch_taken_0x23f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1dc) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23F1E4u;
label_23f1e4:
    // 0x23f1e4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x23f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x23f1e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23f1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23f1ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23f1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23f1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23f1fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f200: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23f204: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23f208: 0xc05c848  jal         func_172120
    ctx->pc = 0x23F208u;
    SET_GPR_U32(ctx, 31, 0x23F210u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23F208u, 0x23F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F210u;
label_23f210:
    // 0x23f210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23f214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f218: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f21c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f220: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23f220u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f224: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23F224u;
    SET_GPR_U32(ctx, 31, 0x23F22Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23F224u, 0x23F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F22Cu;
label_23f22c:
    // 0x23f22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f230: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23f230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23f234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f238: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f23c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x23f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x23f240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f244: 0x0  nop
    ctx->pc = 0x23f244u;
    // NOP
    // 0x23f248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23f248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f24c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23f24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23f250: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f254: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23f258: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23F258u;
    SET_GPR_U32(ctx, 31, 0x23F260u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23F258u, 0x23F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F260u;
label_23f260:
    // 0x23f260: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f264: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23F264u;
    SET_GPR_U32(ctx, 31, 0x23F26Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23F264u, 0x23F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F26Cu;
label_23f26c:
    // 0x23f26c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f270: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23f270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x23f274: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f278: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x23f278u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f27c: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F2D8u;
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23F284u;
    // 0x23f284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f288: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f28c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f294: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f298: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23f298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f29c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x23f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23f2b4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f2b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2bc: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x23f2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
    // 0x23f2c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f2c8: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x23f2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f2cc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x23f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x23f2d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2d4: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x23f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
label_23f2d8:
    // 0x23f2d8: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2dc: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f2e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f2e8: 0x0  nop
    ctx->pc = 0x23f2e8u;
    // NOP
    // 0x23f2ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23f2ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f2f0: 0x0  nop
    ctx->pc = 0x23f2f0u;
    // NOP
    // 0x23f2f4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23F2F4u;
    {
        const bool branch_taken_0x23f2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f2f4) {
            ctx->pc = 0x23F3D8u;
            goto label_23f3d8;
        }
    }
    ctx->pc = 0x23F2FCu;
    // 0x23f2fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f300: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f304: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f30c: 0x0  nop
    ctx->pc = 0x23f30cu;
    // NOP
    // 0x23f310: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23f310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f314: 0x0  nop
    ctx->pc = 0x23f314u;
    // NOP
    // 0x23f318: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23F318u;
    {
        const bool branch_taken_0x23f318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f318) {
            ctx->pc = 0x23F380u;
            goto label_23f380;
        }
    }
    ctx->pc = 0x23F320u;
    // 0x23f320: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f324: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f328: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f32c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23f330: 0x34700fdb  ori         $s0, $v1, 0xFDB
    ctx->pc = 0x23f330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23f334: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23f334u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f338: 0x0  nop
    ctx->pc = 0x23f338u;
    // NOP
    // 0x23f33c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23f33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f340: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23f340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23f344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f348: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f34c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f354: 0x0  nop
    ctx->pc = 0x23f354u;
    // NOP
    // 0x23f358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f35c: 0x0  nop
    ctx->pc = 0x23f35cu;
    // NOP
    // 0x23f360: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23F360u;
    {
        const bool branch_taken_0x23f360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f360) {
            ctx->pc = 0x23F3D8u;
            goto label_23f3d8;
        }
    }
    ctx->pc = 0x23F368u;
    // 0x23f368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f36c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f374: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23f378: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23F378u;
    {
        const bool branch_taken_0x23f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f378) {
            ctx->pc = 0x23F3D8u;
            goto label_23f3d8;
        }
    }
    ctx->pc = 0x23F380u;
label_23f380:
    // 0x23f380: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f384: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f388: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f38c: 0x3c103cc9  lui         $s0, 0x3CC9
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15561 << 16));
    // 0x23f390: 0x36030fdb  ori         $v1, $s0, 0xFDB
    ctx->pc = 0x23f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4059);
    // 0x23f394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23f394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f398: 0x0  nop
    ctx->pc = 0x23f398u;
    // NOP
    // 0x23f39c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23f39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f3a0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23f3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23f3a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f3a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f3ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f3b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f3b4: 0x0  nop
    ctx->pc = 0x23f3b4u;
    // NOP
    // 0x23f3b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23f3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f3bc: 0x0  nop
    ctx->pc = 0x23f3bcu;
    // NOP
    // 0x23f3c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23F3C0u;
    {
        const bool branch_taken_0x23f3c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f3c0) {
            ctx->pc = 0x23F3D8u;
            goto label_23f3d8;
        }
    }
    ctx->pc = 0x23F3C8u;
    // 0x23f3c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f3cc: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f3d0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f3d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23f3d8:
    // 0x23f3d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23f3d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F3ECu;
}
