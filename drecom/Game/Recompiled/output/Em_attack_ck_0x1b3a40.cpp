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

// Function: Em_attack_ck
// Address: 0x1b3a40 - 0x1b40a8
void Em_attack_ck_0x1b3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_attack_ck_0x1b3a40");
#endif

    switch (ctx->pc) {
        case 0x1b3ac4u: goto label_1b3ac4;
        case 0x1b3b40u: goto label_1b3b40;
        case 0x1b3b4cu: goto label_1b3b4c;
        case 0x1b3bc0u: goto label_1b3bc0;
        case 0x1b3be0u: goto label_1b3be0;
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c60u: goto label_1b3c60;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cf4u: goto label_1b3cf4;
        case 0x1b3d04u: goto label_1b3d04;
        case 0x1b3d60u: goto label_1b3d60;
        case 0x1b3d8cu: goto label_1b3d8c;
        case 0x1b3db8u: goto label_1b3db8;
        default: break;
    }

    ctx->pc = 0x1b3a40u;

    // 0x1b3a40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1b3a44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b3a48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b3a4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b3a50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b3a54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b3a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b3a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b3a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b3a5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3a6c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1b3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1b3a70: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x1b3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x1b3a74: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1b3a74u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3a78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b3a78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3a7c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b3a80: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b3a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a88: 0x0  nop
    ctx->pc = 0x1b3a88u;
    // NOP
    // 0x1b3a8c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b3a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1b3a90: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x1b3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x1b3a94: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3a98: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3aa0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b3aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b3aa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3AA4u;
    {
        const bool branch_taken_0x1b3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3aa4) {
            ctx->pc = 0x1B3AB8u;
            goto label_1b3ab8;
        }
    }
    ctx->pc = 0x1B3AACu;
    // 0x1b3aac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1b3ab0: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x1b3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1b3ab4: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1b3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_1b3ab8:
    // 0x1b3ab8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1b3ab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3abc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B3ABCu;
    {
        const bool branch_taken_0x1b3abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3abc) {
            ctx->pc = 0x1B3B80u;
            goto label_1b3b80;
        }
    }
    ctx->pc = 0x1B3AC4u;
label_1b3ac4:
    // 0x1b3ac4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1b3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1b3ac8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b3acc: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1b3ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3ad4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1b3ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3ad8: 0x864210a6  lh          $v0, 0x10A6($s2)
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x1b3adc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3ae0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3ae4: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B3AE4u;
    {
        const bool branch_taken_0x1b3ae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b3ae4) {
            ctx->pc = 0x1B3B78u;
            goto label_1b3b78;
        }
    }
    ctx->pc = 0x1B3AECu;
    // 0x1b3aec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3af0: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3AF0u;
    {
        const bool branch_taken_0x1b3af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3af0) {
            ctx->pc = 0x1B3B78u;
            goto label_1b3b78;
        }
    }
    ctx->pc = 0x1B3AF8u;
    // 0x1b3af8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b3af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b3afc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3b00: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3b04: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3b0c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3B0Cu;
    {
        const bool branch_taken_0x1b3b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3b0c) {
            ctx->pc = 0x1B3B78u;
            goto label_1b3b78;
        }
    }
    ctx->pc = 0x1B3B14u;
    // 0x1b3b14: 0x924210a8  lbu         $v0, 0x10A8($s2)
    ctx->pc = 0x1b3b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4264)));
    // 0x1b3b18: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B3B18u;
    {
        const bool branch_taken_0x1b3b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b18) {
            ctx->pc = 0x1B3B78u;
            goto label_1b3b78;
        }
    }
    ctx->pc = 0x1B3B20u;
    // 0x1b3b20: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x1b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1b3b24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3b30: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1b3b34: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1b3b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1b3b38: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3B38u;
    SET_GPR_U32(ctx, 31, 0x1B3B40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3B38u, 0x1B3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B40u;
label_1b3b40:
    // 0x1b3b40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3b44: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B3B44u;
    SET_GPR_U32(ctx, 31, 0x1B3B4Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B3B44u, 0x1B3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B4Cu;
label_1b3b4c:
    // 0x1b3b4c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b3b50: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x1b3b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b54: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b3b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3b5c: 0x0  nop
    ctx->pc = 0x1b3b5cu;
    // NOP
    // 0x1b3b60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B60u;
    {
        const bool branch_taken_0x1b3b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3b60) {
            ctx->pc = 0x1B3B78u;
            goto label_1b3b78;
        }
    }
    ctx->pc = 0x1B3B68u;
    // 0x1b3b68: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b6c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1b3b70: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x1b3b70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b3b74: 0x0  nop
    ctx->pc = 0x1b3b74u;
    // NOP
label_1b3b78:
    // 0x1b3b78: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1b3b7c: 0x0  nop
    ctx->pc = 0x1b3b7cu;
    // NOP
label_1b3b80:
    // 0x1b3b80: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b3b84: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1b3b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3b88: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B3B88u;
    {
        const bool branch_taken_0x1b3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b88) {
            ctx->pc = 0x1B3AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3ac4;
        }
    }
    ctx->pc = 0x1B3B90u;
    // 0x1b3b90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B90u;
    {
        const bool branch_taken_0x1b3b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b90) {
            ctx->pc = 0x1B3BA4u;
            goto label_1b3ba4;
        }
    }
    ctx->pc = 0x1B3B98u;
    // 0x1b3b98: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1b3b98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1b3b9c: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1B3B9Cu;
    {
        const bool branch_taken_0x1b3b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b9c) {
            ctx->pc = 0x1B4074u;
            goto label_1b4074;
        }
    }
    ctx->pc = 0x1B3BA4u;
label_1b3ba4:
    // 0x1b3ba4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1b3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3ba8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3bac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3bb0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3bb4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3bb8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3BB8u;
    SET_GPR_U32(ctx, 31, 0x1B3BC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B3BC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3BC0u) { return; }
    ctx->pc = 0x1B3BC0u;
label_1b3bc0:
    // 0x1b3bc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b3bc4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x1b3bc8: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b3bcc: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b3bd0: 0x8e17121c  lw          $s7, 0x121C($s0)
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b3bd4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b3bd4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3bd8: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1B3BD8u;
    {
        const bool branch_taken_0x1b3bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bd8) {
            ctx->pc = 0x1B4058u;
            goto label_1b4058;
        }
    }
    ctx->pc = 0x1B3BE0u;
label_1b3be0:
    // 0x1b3be0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b3be4: 0x12e00122  beqz        $s7, . + 4 + (0x122 << 2)
    ctx->pc = 0x1B3BE4u;
    {
        const bool branch_taken_0x1b3be4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3be4) {
            ctx->pc = 0x1B4070u;
            goto label_1b4070;
        }
    }
    ctx->pc = 0x1B3BECu;
    // 0x1b3bec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b3bf0: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b3bf4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x1b3bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x1b3bf8: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x1B3BF8u;
    {
        const bool branch_taken_0x1b3bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bf8) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B3C00u;
    // 0x1b3c00: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b3c04: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b3c04u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b3c08: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x1b3c08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x1b3c0c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b3c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b3c10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c14: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b3c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b3c18: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x1B3C18u;
    {
        const bool branch_taken_0x1b3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c18) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B3C20u;
    // 0x1b3c20: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c28: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1b3c2c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b3c30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b3c34: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b3c38: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3c3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3c40: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b3c44: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3C44u;
    SET_GPR_U32(ctx, 31, 0x1B3C4Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B3C4Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3C4Cu) { return; }
    ctx->pc = 0x1B3C4Cu;
label_1b3c4c:
    // 0x1b3c4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3c50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b3c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3c54: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3c58: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3C58u;
    SET_GPR_U32(ctx, 31, 0x1B3C60u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3C58u, 0x1B3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C60u;
label_1b3c60:
    // 0x1b3c60: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3c6c: 0x0  nop
    ctx->pc = 0x1b3c6cu;
    // NOP
    // 0x1b3c70: 0x450000f8  bc1f        . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B3C70u;
    {
        const bool branch_taken_0x1b3c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3c70) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B3C78u;
    // 0x1b3c78: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c7c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b3c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3c84: 0x0  nop
    ctx->pc = 0x1b3c84u;
    // NOP
    // 0x1b3c88: 0x450100f2  bc1t        . + 4 + (0xF2 << 2)
    ctx->pc = 0x1B3C88u;
    {
        const bool branch_taken_0x1b3c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3c88) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B3C90u;
    // 0x1b3c90: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1b3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c94: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c98: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b3c98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3c9c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1b3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ca0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1b3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3ca8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b3ca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b3cac: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B3CACu;
    SET_GPR_U32(ctx, 31, 0x1B3CB4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B3CACu, 0x1B3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CB4u;
label_1b3cb4:
    // 0x1b3cb4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b3cb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3cbc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1b3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3cc0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3cc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b3cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b3cc8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3cccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3cd0: 0x0  nop
    ctx->pc = 0x1b3cd0u;
    // NOP
    // 0x1b3cd4: 0x450000df  bc1f        . + 4 + (0xDF << 2)
    ctx->pc = 0x1B3CD4u;
    {
        const bool branch_taken_0x1b3cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3cd4) {
            ctx->pc = 0x1B4054u;
            goto label_1b4054;
        }
    }
    ctx->pc = 0x1B3CDCu;
    // 0x1b3cdc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3ce0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3ce4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3ce8: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b3ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3cec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3CECu;
    SET_GPR_U32(ctx, 31, 0x1B3CF4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3CECu, 0x1B3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CF4u;
label_1b3cf4:
    // 0x1b3cf4: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1b3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3cf8: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x1b3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3cfc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3CFCu;
    SET_GPR_U32(ctx, 31, 0x1B3D04u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3CFCu, 0x1B3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D04u;
label_1b3d04:
    // 0x1b3d04: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3d08: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3d0c: 0x90420026  lbu         $v0, 0x26($v0)
    ctx->pc = 0x1b3d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x1b3d10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3d14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3d18: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B3D18u;
    {
        const bool branch_taken_0x1b3d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d18) {
            ctx->pc = 0x1B3D98u;
            goto label_1b3d98;
        }
    }
    ctx->pc = 0x1B3D20u;
    // 0x1b3d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3d24: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3D24u;
    {
        const bool branch_taken_0x1b3d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d24) {
            ctx->pc = 0x1B3D6Cu;
            goto label_1b3d6c;
        }
    }
    ctx->pc = 0x1B3D2Cu;
    // 0x1b3d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D30u;
    {
        const bool branch_taken_0x1b3d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d30) {
            ctx->pc = 0x1B3D40u;
            goto label_1b3d40;
        }
    }
    ctx->pc = 0x1B3D38u;
    // 0x1b3d38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3D38u;
    {
        const bool branch_taken_0x1b3d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d38) {
            ctx->pc = 0x1B3DC0u;
            goto label_1b3dc0;
        }
    }
    ctx->pc = 0x1B3D40u;
label_1b3d40:
    // 0x1b3d40: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3d44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d50: 0x0  nop
    ctx->pc = 0x1b3d50u;
    // NOP
    // 0x1b3d54: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b3d54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3d58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3D58u;
    SET_GPR_U32(ctx, 31, 0x1B3D60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3D58u, 0x1B3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D60u;
label_1b3d60:
    // 0x1b3d60: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3d64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B3D64u;
    {
        const bool branch_taken_0x1b3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d64) {
            ctx->pc = 0x1B3DC0u;
            goto label_1b3dc0;
        }
    }
    ctx->pc = 0x1B3D6Cu;
label_1b3d6c:
    // 0x1b3d6c: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b3d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3d70: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3d74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d7c: 0x0  nop
    ctx->pc = 0x1b3d7cu;
    // NOP
    // 0x1b3d80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b3d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3D84u;
    SET_GPR_U32(ctx, 31, 0x1B3D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3D84u, 0x1B3D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D8Cu;
label_1b3d8c:
    // 0x1b3d8c: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B3D90u;
    {
        const bool branch_taken_0x1b3d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d90) {
            ctx->pc = 0x1B3DC0u;
            goto label_1b3dc0;
        }
    }
    ctx->pc = 0x1B3D98u;
label_1b3d98:
    // 0x1b3d98: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b3d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3d9c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3da0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3da8: 0x0  nop
    ctx->pc = 0x1b3da8u;
    // NOP
    // 0x1b3dac: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b3dacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b3db0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3DB0u;
    SET_GPR_U32(ctx, 31, 0x1B3DB8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3DB0u, 0x1B3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DB8u;
label_1b3db8:
    // 0x1b3db8: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3dbc: 0x0  nop
    ctx->pc = 0x1b3dbcu;
    // NOP
label_1b3dc0:
    // 0x1b3dc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3dc4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3dcc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b3dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b3dd0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1B3DD0u;
    {
        const bool branch_taken_0x1b3dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dd0) {
            ctx->pc = 0x1B3EA0u;
            goto label_1b3ea0;
        }
    }
    ctx->pc = 0x1B3DD8u;
    // 0x1b3dd8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3de0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3de4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3de8: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x1b3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x1b3dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3df0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1b3df0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3df8: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3dfc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e00: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3e0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b3e10: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b3e14: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1b3e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3e1c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1b3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b3e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e24: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3e28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e2c: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b3e38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b3e3c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b3e40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3e44: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1b3e48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3e4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3e4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3e50: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e54: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3e58: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e60: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b3e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b3e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e68: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3e6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3e70: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3e74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3e78: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3e7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3e80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3e84: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B3E84u;
    {
        const bool branch_taken_0x1b3e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e84) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3E8Cu;
    // 0x1b3e8c: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3e90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3e94: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3e98: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B3E98u;
    {
        const bool branch_taken_0x1b3e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e98) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3EA0u;
label_1b3ea0:
    // 0x1b3ea0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3ea8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b3eac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B3EACu;
    {
        const bool branch_taken_0x1b3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3eac) {
            ctx->pc = 0x1B3F58u;
            goto label_1b3f58;
        }
    }
    ctx->pc = 0x1B3EB4u;
    // 0x1b3eb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3eb8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3ec0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3ec4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3ec8: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3ed0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ed8: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3edc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3ee0: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3ee4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3ee8: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3ef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3ef4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3ef8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1b3ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3efc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f00: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f04: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3f08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3f14: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b3f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b3f18: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f1c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3f20: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3f24: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3f28: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3f2c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f30: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3f34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3f38: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3f3c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B3F3Cu;
    {
        const bool branch_taken_0x1b3f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f3c) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3F44u;
    // 0x1b3f44: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3f48: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3f4c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3F50u;
    {
        const bool branch_taken_0x1b3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f50) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3F58u;
label_1b3f58:
    // 0x1b3f58: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3f5c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3f64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3f6c: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3f74: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f7c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3f84: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3f88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3f8c: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3f90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3f98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3f9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1b3f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3fa0: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b3fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fa4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3fa8: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b3fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b3fac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3fb4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b3fb8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b3fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b3fbc: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fc0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b3fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b3fc4: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b3fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3fc8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3fcc: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3fd0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3fd4: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x1b3fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
    // 0x1b3fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3fdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3FE8u;
    // 0x1b3fe8: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b3fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b3fec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b3ff0: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3ff4: 0x0  nop
    ctx->pc = 0x1b3ff4u;
    // NOP
label_1b3ff8:
    // 0x1b3ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ffc: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b3ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4000: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4008: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b4008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b400c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B400Cu;
    {
        const bool branch_taken_0x1b400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b400c) {
            ctx->pc = 0x1B4020u;
            goto label_1b4020;
        }
    }
    ctx->pc = 0x1B4014u;
    // 0x1b4014: 0x36b50003  ori         $s5, $s5, 0x3
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)3);
    // 0x1b4018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B4018u;
    {
        const bool branch_taken_0x1b4018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4018) {
            ctx->pc = 0x1B4048u;
            goto label_1b4048;
        }
    }
    ctx->pc = 0x1B4020u;
label_1b4020:
    // 0x1b4020: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4028: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1b402c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B402Cu;
    {
        const bool branch_taken_0x1b402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b402c) {
            ctx->pc = 0x1B4040u;
            goto label_1b4040;
        }
    }
    ctx->pc = 0x1B4034u;
    // 0x1b4034: 0x36b50009  ori         $s5, $s5, 0x9
    ctx->pc = 0x1b4034u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)9);
    // 0x1b4038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4038u;
    {
        const bool branch_taken_0x1b4038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4038) {
            ctx->pc = 0x1B4048u;
            goto label_1b4048;
        }
    }
    ctx->pc = 0x1B4040u;
label_1b4040:
    // 0x1b4040: 0x36b50005  ori         $s5, $s5, 0x5
    ctx->pc = 0x1b4040u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)5);
    // 0x1b4044: 0x0  nop
    ctx->pc = 0x1b4044u;
    // NOP
label_1b4048:
    // 0x1b4048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b404c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B404Cu;
    {
        const bool branch_taken_0x1b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b404c) {
            ctx->pc = 0x1B4074u;
            goto label_1b4074;
        }
    }
    ctx->pc = 0x1B4054u;
label_1b4054:
    // 0x1b4054: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b4058:
    // 0x1b4058: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b4058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b405c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4060: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b4060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4064: 0x1440fede  bnez        $v0, . + 4 + (-0x122 << 2)
    ctx->pc = 0x1B4064u;
    {
        const bool branch_taken_0x1b4064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4064) {
            ctx->pc = 0x1B3BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3be0;
        }
    }
    ctx->pc = 0x1B406Cu;
    // 0x1b406c: 0x0  nop
    ctx->pc = 0x1b406cu;
    // NOP
label_1b4070:
    // 0x1b4070: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b4070u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b4074:
    // 0x1b4074: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b4074u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4078: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b4078u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b407c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b407cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4080: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b4080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4084: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b4084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b4088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b408c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b408cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b409c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1b409cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b40a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B40A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B40A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B40A8u;
}
