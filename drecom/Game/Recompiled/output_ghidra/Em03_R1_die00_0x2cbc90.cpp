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

// Function: Em03_R1_die00
// Address: 0x2cbc90 - 0x2cc888
void Em03_R1_die00_0x2cbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_die00_0x2cbc90");
#endif

    switch (ctx->pc) {
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd24u: goto label_2cbd24;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbf1cu: goto label_2cbf1c;
        case 0x2cbf90u: goto label_2cbf90;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc07cu: goto label_2cc07c;
        case 0x2cc0b4u: goto label_2cc0b4;
        case 0x2cc0ecu: goto label_2cc0ec;
        case 0x2cc168u: goto label_2cc168;
        case 0x2cc1a0u: goto label_2cc1a0;
        case 0x2cc1d8u: goto label_2cc1d8;
        case 0x2cc254u: goto label_2cc254;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc2c4u: goto label_2cc2c4;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc3b0u: goto label_2cc3b0;
        case 0x2cc3f4u: goto label_2cc3f4;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f8u: goto label_2cc4f8;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc678u: goto label_2cc678;
        case 0x2cc71cu: goto label_2cc71c;
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc814u: goto label_2cc814;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc870u: goto label_2cc870;
        default: break;
    }

    ctx->pc = 0x2cbc90u;

    // 0x2cbc90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cbc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cbc94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2cbc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2cbc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbc9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbca0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2cbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2cbca4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbca8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cbca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cbcac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cbcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cbcb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cbcb4: 0x108302e7  beq         $a0, $v1, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x2CBCB4u;
    {
        const bool branch_taken_0x2cbcb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbcb4) {
            ctx->pc = 0x2CC854u;
            goto label_2cc854;
        }
    }
    ctx->pc = 0x2CBCBCu;
    // 0x2cbcbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cbcc0: 0x10830298  beq         $a0, $v1, . + 4 + (0x298 << 2)
    ctx->pc = 0x2CBCC0u;
    {
        const bool branch_taken_0x2cbcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbcc0) {
            ctx->pc = 0x2CC724u;
            goto label_2cc724;
        }
    }
    ctx->pc = 0x2CBCC8u;
    // 0x2cbcc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbccc: 0x10830240  beq         $a0, $v1, . + 4 + (0x240 << 2)
    ctx->pc = 0x2CBCCCu;
    {
        const bool branch_taken_0x2cbccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbccc) {
            ctx->pc = 0x2CC5D0u;
            goto label_2cc5d0;
        }
    }
    ctx->pc = 0x2CBCD4u;
    // 0x2cbcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbcd8: 0x108301de  beq         $a0, $v1, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2CBCD8u;
    {
        const bool branch_taken_0x2cbcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbcd8) {
            ctx->pc = 0x2CC454u;
            goto label_2cc454;
        }
    }
    ctx->pc = 0x2CBCE0u;
    // 0x2cbce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBCE0u;
    {
        const bool branch_taken_0x2cbce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbce0) {
            ctx->pc = 0x2CBCF0u;
            goto label_2cbcf0;
        }
    }
    ctx->pc = 0x2CBCE8u;
    // 0x2cbce8: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x2CBCE8u;
    {
        const bool branch_taken_0x2cbce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbce8) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CBCF0u;
label_2cbcf0:
    // 0x2cbcf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbcf4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbcf8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2cbcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cbcfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cbd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2cbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2cbd08: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2cbd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2cbd0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cbd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cbd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cbd14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CBD14u;
    SET_GPR_U32(ctx, 31, 0x2CBD1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CBD14u, 0x2CBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD1Cu;
label_2cbd1c:
    // 0x2cbd1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBD1Cu, 0x2CBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD24u;
label_2cbd24:
    // 0x2cbd24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cbd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cbd28: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cbd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cbd2c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cbd30: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2cbd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cbd34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2cbd34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2cbd38: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cbd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd3c: 0xa4a4127c  sh          $a0, 0x127C($a1)
    ctx->pc = 0x2cbd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cbd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbd4c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2cbd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2cbd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd58: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cbd5c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cbd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cbd60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd68: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2cbd6c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x2cbd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2cbd70: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2cbd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd74: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2cbd78: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2cbd7c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cbd80: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2cbd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cbd84: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x2cbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x2cbd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd90: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cbd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cbd94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbd98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbd9c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cbd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cbda0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbda4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbda8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2cbda8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbdac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdb0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2cbdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbdb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdb8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2cbdb8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbdbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cbdbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cbdc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cbdc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdc8: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2cbdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbdcc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cbdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbdd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdd8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2cbdd8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbde0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2cbde0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cbde4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cbde8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbdec: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2cbdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbdf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cbdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cbdf4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2cbdf4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbdf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cbdf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cbdfc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cbe00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbe08: 0x0  nop
    ctx->pc = 0x2cbe08u;
    // NOP
    // 0x2cbe0c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cbe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cbe10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cbe14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cbe18: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CBE18u;
    SET_GPR_U32(ctx, 31, 0x2CBE20u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CBE20u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CBE20u) { return; }
    ctx->pc = 0x2CBE20u;
label_2cbe20:
    // 0x2cbe20: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe28: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe34: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cbe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cbe38: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe40: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe4c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cbe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cbe50: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x2cbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x2cbe54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbe54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe58: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cbe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe64: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbe68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbe68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbe6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbe74: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cbe74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cbe78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbe7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cbe80: 0x24500320  addiu       $s0, $v0, 0x320
    ctx->pc = 0x2cbe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x2cbe84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2cbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbe88: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2cbe88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2cbe8c: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x2cbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2cbe90: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2cbe90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbe94: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cbe94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cbe98: 0x3043fff7  andi        $v1, $v0, 0xFFF7
    ctx->pc = 0x2cbe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cbe9c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2cbe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbea0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBEA0u;
    SET_GPR_U32(ctx, 31, 0x2CBEA8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBEA0u, 0x2CBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEA8u;
label_2cbea8:
    // 0x2cbea8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbeac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbeb0: 0x0  nop
    ctx->pc = 0x2cbeb0u;
    // NOP
    // 0x2cbeb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbeb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbeb8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cbebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbec0: 0x0  nop
    ctx->pc = 0x2cbec0u;
    // NOP
    // 0x2cbec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbec8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cbec8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2cbecc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbed4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbed8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cbed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cbedc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBEDCu;
    SET_GPR_U32(ctx, 31, 0x2CBEE4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBEDCu, 0x2CBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEE4u;
label_2cbee4:
    // 0x2cbee4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2cbee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cbee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbeec: 0x0  nop
    ctx->pc = 0x2cbeecu;
    // NOP
    // 0x2cbef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbef4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2cbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2cbef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbefc: 0x0  nop
    ctx->pc = 0x2cbefcu;
    // NOP
    // 0x2cbf00: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbf00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf04: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf10: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2cbf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2cbf14: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBF14u;
    SET_GPR_U32(ctx, 31, 0x2CBF1Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBF14u, 0x2CBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF1Cu;
label_2cbf1c:
    // 0x2cbf1c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbf20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbf24: 0x0  nop
    ctx->pc = 0x2cbf24u;
    // NOP
    // 0x2cbf28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbf28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbf2c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cbf30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbf34: 0x0  nop
    ctx->pc = 0x2cbf34u;
    // NOP
    // 0x2cbf38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cbf3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2cbf40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cbf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbf44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbf48: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf4c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2cbf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2cbf50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cbf54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cbf58: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2cbf5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbf60: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cbf60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cbf64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cbf68: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cbf68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbf6c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x2cbf6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cbf70: 0x3082fff7  andi        $v0, $a0, 0xFFF7
    ctx->pc = 0x2cbf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x2cbf74: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cbf74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cbf78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbf7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbf80: 0x0  nop
    ctx->pc = 0x2cbf80u;
    // NOP
    // 0x2cbf84: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2cbf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2cbf88: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBF88u;
    SET_GPR_U32(ctx, 31, 0x2CBF90u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBF88u, 0x2CBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF90u;
label_2cbf90:
    // 0x2cbf90: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x2cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x2cbf94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cbf94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbf98: 0x0  nop
    ctx->pc = 0x2cbf98u;
    // NOP
    // 0x2cbf9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbf9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbfa0: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x2cbfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x2cbfa4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2cbfa4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbfa8: 0x0  nop
    ctx->pc = 0x2cbfa8u;
    // NOP
    // 0x2cbfac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfb0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbfb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfb8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbfbc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cbfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cbfc0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBFC0u;
    SET_GPR_U32(ctx, 31, 0x2CBFC8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBFC0u, 0x2CBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFC8u;
label_2cbfc8:
    // 0x2cbfc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cbfcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cbfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbfd0: 0x0  nop
    ctx->pc = 0x2cbfd0u;
    // NOP
    // 0x2cbfd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cbfd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cbfd8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cbfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cbfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbfe0: 0x0  nop
    ctx->pc = 0x2cbfe0u;
    // NOP
    // 0x2cbfe4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cbfe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbfe8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbfec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbff0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2cbff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cbff4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2cbff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2cbff8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CBFF8u;
    SET_GPR_U32(ctx, 31, 0x2CC000u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CBFF8u, 0x2CC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x2cc004: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2cc004u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc008: 0x0  nop
    ctx->pc = 0x2cc008u;
    // NOP
    // 0x2cc00c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc010: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x2cc014: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2cc014u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc018: 0x0  nop
    ctx->pc = 0x2cc018u;
    // NOP
    // 0x2cc01c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc020: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc028: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc02c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cc030: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc034: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2cc038: 0x24501770  addiu       $s0, $v0, 0x1770
    ctx->pc = 0x2cc038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2cc03c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc040: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc044: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc048: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2cc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2cc04c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc050: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC050u;
    {
        const bool branch_taken_0x2cc050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc050) {
            ctx->pc = 0x2CC11Cu;
            goto label_2cc11c;
        }
    }
    ctx->pc = 0x2CC058u;
    // 0x2cc058: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc05c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc060: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc064: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc068: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc06c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc070: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc074: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC074u;
    SET_GPR_U32(ctx, 31, 0x2CC07Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC074u, 0x2CC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC07Cu;
label_2cc07c:
    // 0x2cc07c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc084: 0x0  nop
    ctx->pc = 0x2cc084u;
    // NOP
    // 0x2cc088: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc08c: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc094: 0x0  nop
    ctx->pc = 0x2cc094u;
    // NOP
    // 0x2cc098: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc09c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0a4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc0a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc0ac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC0ACu;
    SET_GPR_U32(ctx, 31, 0x2CC0B4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC0ACu, 0x2CC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0B4u;
label_2cc0b4:
    // 0x2cc0b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc0b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc0bc: 0x0  nop
    ctx->pc = 0x2cc0bcu;
    // NOP
    // 0x2cc0c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc0c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc0cc: 0x0  nop
    ctx->pc = 0x2cc0ccu;
    // NOP
    // 0x2cc0d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc0d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0d4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc0e0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc0e4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC0E4u;
    SET_GPR_U32(ctx, 31, 0x2CC0ECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC0E4u, 0x2CC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0ECu;
label_2cc0ec:
    // 0x2cc0ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc0f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc0f4: 0x0  nop
    ctx->pc = 0x2cc0f4u;
    // NOP
    // 0x2cc0f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc0fc: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc104: 0x0  nop
    ctx->pc = 0x2cc104u;
    // NOP
    // 0x2cc108: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc10c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc114: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc118: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cc11c:
    // 0x2cc11c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc120: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc124: 0x24501db0  addiu       $s0, $v0, 0x1DB0
    ctx->pc = 0x2cc124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x2cc128: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc12c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc12cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc130: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc134: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc13c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC13Cu;
    {
        const bool branch_taken_0x2cc13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc13c) {
            ctx->pc = 0x2CC208u;
            goto label_2cc208;
        }
    }
    ctx->pc = 0x2CC144u;
    // 0x2cc144: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc148: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc14c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc150: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc154: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc158: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc15c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc160: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC160u;
    SET_GPR_U32(ctx, 31, 0x2CC168u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC160u, 0x2CC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC168u;
label_2cc168:
    // 0x2cc168: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc170: 0x0  nop
    ctx->pc = 0x2cc170u;
    // NOP
    // 0x2cc174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc178: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cc178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc180: 0x0  nop
    ctx->pc = 0x2cc180u;
    // NOP
    // 0x2cc184: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc188: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc18c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc190: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc194: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc198: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC198u;
    SET_GPR_U32(ctx, 31, 0x2CC1A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC198u, 0x2CC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1A0u;
label_2cc1a0:
    // 0x2cc1a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc1a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc1a8: 0x0  nop
    ctx->pc = 0x2cc1a8u;
    // NOP
    // 0x2cc1ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc1b0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc1b8: 0x0  nop
    ctx->pc = 0x2cc1b8u;
    // NOP
    // 0x2cc1bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1c0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc1c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1c8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc1cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc1d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC1D0u;
    SET_GPR_U32(ctx, 31, 0x2CC1D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC1D0u, 0x2CC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1D8u;
label_2cc1d8:
    // 0x2cc1d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc1e0: 0x0  nop
    ctx->pc = 0x2cc1e0u;
    // NOP
    // 0x2cc1e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc1e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc1e8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc1f0: 0x0  nop
    ctx->pc = 0x2cc1f0u;
    // NOP
    // 0x2cc1f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc1f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc1f8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc200: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc204: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cc208:
    // 0x2cc208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc20c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc210: 0x24502580  addiu       $s0, $v0, 0x2580
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2cc214: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc218: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc21c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc220: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc228: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC228u;
    {
        const bool branch_taken_0x2cc228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc228) {
            ctx->pc = 0x2CC2F4u;
            goto label_2cc2f4;
        }
    }
    ctx->pc = 0x2CC230u;
    // 0x2cc230: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc234: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc238: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc23c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc23cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc240: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc244: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc248: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc24c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC24Cu;
    SET_GPR_U32(ctx, 31, 0x2CC254u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC24Cu, 0x2CC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC254u;
label_2cc254:
    // 0x2cc254: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc25c: 0x0  nop
    ctx->pc = 0x2cc25cu;
    // NOP
    // 0x2cc260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc264: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc26c: 0x0  nop
    ctx->pc = 0x2cc26cu;
    // NOP
    // 0x2cc270: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc274: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc27c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc280: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc284: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC284u;
    SET_GPR_U32(ctx, 31, 0x2CC28Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC284u, 0x2CC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc294: 0x0  nop
    ctx->pc = 0x2cc294u;
    // NOP
    // 0x2cc298: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc29c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc2a4: 0x0  nop
    ctx->pc = 0x2cc2a4u;
    // NOP
    // 0x2cc2a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc2a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2ac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc2b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc2b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc2bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC2BCu;
    SET_GPR_U32(ctx, 31, 0x2CC2C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC2BCu, 0x2CC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2C4u;
label_2cc2c4:
    // 0x2cc2c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc2c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc2cc: 0x0  nop
    ctx->pc = 0x2cc2ccu;
    // NOP
    // 0x2cc2d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc2d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc2d4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc2dc: 0x0  nop
    ctx->pc = 0x2cc2dcu;
    // NOP
    // 0x2cc2e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2e4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc2e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc2ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc2f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cc2f4:
    // 0x2cc2f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc2f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cc2fc: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x2cc300: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc304: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cc304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cc308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cc308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cc30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cc30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cc310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cc310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cc314: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC314u;
    {
        const bool branch_taken_0x2cc314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc314) {
            ctx->pc = 0x2CC3E0u;
            goto label_2cc3e0;
        }
    }
    ctx->pc = 0x2CC31Cu;
    // 0x2cc31c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc320: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cc320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cc324: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cc324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cc328: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cc328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc32c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cc32cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cc330: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cc330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cc334: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cc334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc338: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC338u;
    SET_GPR_U32(ctx, 31, 0x2CC340u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC338u, 0x2CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc348: 0x0  nop
    ctx->pc = 0x2cc348u;
    // NOP
    // 0x2cc34c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc34cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc350: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc358: 0x0  nop
    ctx->pc = 0x2cc358u;
    // NOP
    // 0x2cc35c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc35cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc360: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc368: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc36c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cc36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cc370: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC370u;
    SET_GPR_U32(ctx, 31, 0x2CC378u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC370u, 0x2CC378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC378u;
label_2cc378:
    // 0x2cc378: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc37c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc380: 0x0  nop
    ctx->pc = 0x2cc380u;
    // NOP
    // 0x2cc384: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc388: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cc38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc390: 0x0  nop
    ctx->pc = 0x2cc390u;
    // NOP
    // 0x2cc394: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc398: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc39c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc3a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cc3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cc3a8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CC3A8u;
    SET_GPR_U32(ctx, 31, 0x2CC3B0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CC3A8u, 0x2CC3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3B0u;
label_2cc3b0:
    // 0x2cc3b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cc3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc3b8: 0x0  nop
    ctx->pc = 0x2cc3b8u;
    // NOP
    // 0x2cc3bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cc3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc3c0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cc3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc3c8: 0x0  nop
    ctx->pc = 0x2cc3c8u;
    // NOP
    // 0x2cc3cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cc3ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3d0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc3d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc3d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cc3dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cc3e0:
    // 0x2cc3e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2cc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2cc3e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3ec: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2CC3ECu;
    SET_GPR_U32(ctx, 31, 0x2CC3F4u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2CC3ECu, 0x2CC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3F4u;
label_2cc3f4:
    // 0x2cc3f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3f8: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2cc3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2cc3fc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2cc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2cc400: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cc404: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2cc404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cc408: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2cc408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2cc40c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc410: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cc414: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2cc414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2cc418: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2cc418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2cc41c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cc420: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cc420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cc424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc428: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc42c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2cc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2cc430: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cc434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc438: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc43c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2cc43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x2cc440: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cc444: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cc444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cc448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc450: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2cc450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_2cc454:
    // 0x2cc454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc458: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc45c: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cc460: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc468: 0x0  nop
    ctx->pc = 0x2cc468u;
    // NOP
    // 0x2cc46c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc46cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc470: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC470u;
    SET_GPR_U32(ctx, 31, 0x2CC478u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC470u, 0x2CC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC478u;
label_2cc478:
    // 0x2cc478: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc47c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cc47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cc480: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc484: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cc484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc488: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cc488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cc48c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc494: 0x0  nop
    ctx->pc = 0x2cc494u;
    // NOP
    // 0x2cc498: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc498u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc49c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC49Cu;
    SET_GPR_U32(ctx, 31, 0x2CC4A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC49Cu, 0x2CC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4A4u;
label_2cc4a4:
    // 0x2cc4a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4a8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc4ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cc4b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CC4B4u;
    SET_GPR_U32(ctx, 31, 0x2CC4BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CC4B4u, 0x2CC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4BCu;
label_2cc4bc:
    // 0x2cc4bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4c8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cc4cc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cc4d0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cc4d4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CC4D4u;
    SET_GPR_U32(ctx, 31, 0x2CC4DCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CC4D4u, 0x2CC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4DCu;
label_2cc4dc:
    // 0x2cc4dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc4e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc4e4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CC4E4u;
    SET_GPR_U32(ctx, 31, 0x2CC4ECu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CC4E4u, 0x2CC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4ECu;
label_2cc4ec:
    // 0x2cc4ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CC4F0u;
    SET_GPR_U32(ctx, 31, 0x2CC4F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CC4F0u, 0x2CC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4F8u;
label_2cc4f8:
    // 0x2cc4f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc4fc: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc500: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc504: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc508: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc50c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc510: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cc510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cc514: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc518: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc51c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc524: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc52c: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cc530: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc534: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2cc538: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cc538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2cc53c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc540: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cc540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cc544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cc548: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cc548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cc54c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc550: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc554: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc558: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2cc558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc55c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cc55cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc560: 0x0  nop
    ctx->pc = 0x2cc560u;
    // NOP
    // 0x2cc564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc568: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cc568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cc56c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc570: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc574: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc57c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cc57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cc584: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2cc584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2cc588: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc58c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2cc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc590: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc594: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cc594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc598: 0x0  nop
    ctx->pc = 0x2cc598u;
    // NOP
    // 0x2cc59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cc59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc5a0: 0x0  nop
    ctx->pc = 0x2cc5a0u;
    // NOP
    // 0x2cc5a4: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x2CC5A4u;
    {
        const bool branch_taken_0x2cc5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc5a4) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC5ACu;
    // 0x2cc5ac: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cc5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cc5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cc5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc5b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5b8: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cc5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cc5bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cc5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc5c0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5c4: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2cc5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc5c8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2CC5C8u;
    {
        const bool branch_taken_0x2cc5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5c8) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC5D0u;
label_2cc5d0:
    // 0x2cc5d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5d4: 0xc4c100d8  lwc1        $f1, 0xD8($a2)
    ctx->pc = 0x2cc5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc5d8: 0x3c083f0e  lui         $t0, 0x3F0E
    ctx->pc = 0x2cc5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16142 << 16));
    // 0x2cc5dc: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2cc5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
    // 0x2cc5e0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2cc5e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc5e4: 0x0  nop
    ctx->pc = 0x2cc5e4u;
    // NOP
    // 0x2cc5e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc5e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc5ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC5ECu;
    SET_GPR_U32(ctx, 31, 0x2CC5F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC5ECu, 0x2CC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F4u;
label_2cc5f4:
    // 0x2cc5f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc5f8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cc5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cc5fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc600: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc604: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cc604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cc608: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cc608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cc60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc610: 0x0  nop
    ctx->pc = 0x2cc610u;
    // NOP
    // 0x2cc614: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cc614u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc618: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CC618u;
    SET_GPR_U32(ctx, 31, 0x2CC620u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CC618u, 0x2CC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC620u;
label_2cc620:
    // 0x2cc620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc624: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc628: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc62c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cc630: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CC630u;
    SET_GPR_U32(ctx, 31, 0x2CC638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CC630u, 0x2CC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC638u;
label_2cc638:
    // 0x2cc638: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc644: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cc648: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cc64c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cc650: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CC650u;
    SET_GPR_U32(ctx, 31, 0x2CC658u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CC650u, 0x2CC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC658u;
label_2cc658:
    // 0x2cc658: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc65c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc65cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc660: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CC660u;
    SET_GPR_U32(ctx, 31, 0x2CC668u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CC660u, 0x2CC668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cc668u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cc66c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc670: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CC670u;
    SET_GPR_U32(ctx, 31, 0x2CC678u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CC670u, 0x2CC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC678u;
label_2cc678:
    // 0x2cc678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc67c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc680: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc684: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc68c: 0x0  nop
    ctx->pc = 0x2cc68cu;
    // NOP
    // 0x2cc690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cc690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc694: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cc694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cc698: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc69c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc6a0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2cc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc6a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cc6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cc6b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cc6b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc6bc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2cc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc6c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6c4: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x2cc6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cc6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc6cc: 0x0  nop
    ctx->pc = 0x2cc6ccu;
    // NOP
    // 0x2cc6d0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2CC6D0u;
    {
        const bool branch_taken_0x2cc6d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc6d0) {
            ctx->pc = 0x2CC710u;
            goto label_2cc710;
        }
    }
    ctx->pc = 0x2CC6D8u;
    // 0x2cc6d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6dc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cc6e0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2cc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc6e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6e8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cc6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cc6ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc6f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc6f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc6fc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cc6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cc700: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2cc700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2cc704: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cc704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc708: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc70c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2cc70cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2cc710:
    // 0x2cc710: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc714: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC714u;
    SET_GPR_U32(ctx, 31, 0x2CC71Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC714u, 0x2CC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC71Cu;
label_2cc71c:
    // 0x2cc71c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2CC71Cu;
    {
        const bool branch_taken_0x2cc71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc71c) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC724u;
label_2cc724:
    // 0x2cc724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc728: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x2cc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc72c: 0x3c043b0d  lui         $a0, 0x3B0D
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15117 << 16));
    // 0x2cc730: 0x3490fea2  ori         $s0, $a0, 0xFEA2
    ctx->pc = 0x2cc730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65186);
    // 0x2cc734: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2cc734u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc738: 0x0  nop
    ctx->pc = 0x2cc738u;
    // NOP
    // 0x2cc73c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc740: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2cc740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2cc744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc748: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x2cc748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc74c: 0x3c023a5a  lui         $v0, 0x3A5A
    ctx->pc = 0x2cc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14938 << 16));
    // 0x2cc750: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x2cc754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc758: 0x0  nop
    ctx->pc = 0x2cc758u;
    // NOP
    // 0x2cc75c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc760: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x2cc760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x2cc764: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc768: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x2cc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc76c: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cc770: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cc770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cc774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc778: 0x0  nop
    ctx->pc = 0x2cc778u;
    // NOP
    // 0x2cc77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc780: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x2cc780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x2cc784: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc788: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc78c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc790: 0x0  nop
    ctx->pc = 0x2cc790u;
    // NOP
    // 0x2cc794: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cc794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc798: 0x0  nop
    ctx->pc = 0x2cc798u;
    // NOP
    // 0x2cc79c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC79Cu;
    {
        const bool branch_taken_0x2cc79c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc79c) {
            ctx->pc = 0x2CC7C0u;
            goto label_2cc7c0;
        }
    }
    ctx->pc = 0x2CC7A4u;
    // 0x2cc7a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc7a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7b4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cc7b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cc7b8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2cc7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2cc7bc: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cc7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_2cc7c0:
    // 0x2cc7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7c4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2cc7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cc7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cc7cc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2cc7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc7d0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2cc7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc7d4: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x2cc7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x2cc7d8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2cc7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cc7dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cc7e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2cc7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2cc7e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CC7E4u;
    {
        const bool branch_taken_0x2cc7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7e4) {
            ctx->pc = 0x2CC840u;
            goto label_2cc840;
        }
    }
    ctx->pc = 0x2CC7ECu;
    // 0x2cc7ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc7f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CC7F0u;
    SET_GPR_U32(ctx, 31, 0x2CC7F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CC7F0u, 0x2CC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7F8u;
label_2cc7f8:
    // 0x2cc7f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc7fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc804: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cc804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cc808: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc80c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CC80Cu;
    SET_GPR_U32(ctx, 31, 0x2CC814u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CC80Cu, 0x2CC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC814u;
label_2cc814:
    // 0x2cc814: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cc818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc81c: 0x0  nop
    ctx->pc = 0x2cc81cu;
    // NOP
    // 0x2cc820: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2cc820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cc824: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cc824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cc828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc82c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc834: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc838: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CC838u;
    SET_GPR_U32(ctx, 31, 0x2CC840u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CC838u, 0x2CC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC840u;
label_2cc840:
    // 0x2cc840: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc844: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC844u;
    SET_GPR_U32(ctx, 31, 0x2CC84Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC844u, 0x2CC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC84Cu;
label_2cc84c:
    // 0x2cc84c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC84Cu;
    {
        const bool branch_taken_0x2cc84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc84c) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC854u;
label_2cc854:
    // 0x2cc854: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2cc854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc858: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cc85c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2cc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2cc860: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cc860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cc864: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc868: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC868u;
    SET_GPR_U32(ctx, 31, 0x2CC870u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC868u, 0x2CC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC870u;
label_2cc870:
    // 0x2cc870: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2cc870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc87c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cc87cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cc880: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC888u;
}
