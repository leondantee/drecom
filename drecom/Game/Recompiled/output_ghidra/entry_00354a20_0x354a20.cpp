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

// Function: entry_00354a20
// Address: 0x354a20 - 0x354b70
void entry_00354a20_0x354a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354a20_0x354a20");
#endif

    switch (ctx->pc) {
        case 0x354ad0u: goto label_354ad0;
        case 0x354b48u: goto label_354b48;
        case 0x354b50u: goto label_354b50;
        default: break;
    }

    ctx->pc = 0x354a20u;

    // 0x354a20: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x354a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354a24: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x354a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x354a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a2c: 0x0  nop
    ctx->pc = 0x354a2cu;
    // NOP
    // 0x354a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x354a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354a34: 0x0  nop
    ctx->pc = 0x354a34u;
    // NOP
    // 0x354a38: 0x45010175  bc1t        . + 4 + (0x175 << 2)
    ctx->pc = 0x354A38u;
    {
        const bool branch_taken_0x354a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354a38) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354A40u;
    // 0x354a40: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354a44: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x354a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354a48: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x354a4c: 0x90e2010c  lbu         $v0, 0x10C($a3)
    ctx->pc = 0x354a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
    // 0x354a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354a54: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354a58: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x354a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354a5c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x354a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x354a60: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x354a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x354a64: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x354a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x354a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a6c: 0x0  nop
    ctx->pc = 0x354a6cu;
    // NOP
    // 0x354a70: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x354a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x354a74: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x354a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x354a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a7c: 0x0  nop
    ctx->pc = 0x354a7cu;
    // NOP
    // 0x354a80: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x354a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x354a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a88: 0x0  nop
    ctx->pc = 0x354a88u;
    // NOP
    // 0x354a8c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x354a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x354a90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a98: 0x0  nop
    ctx->pc = 0x354a98u;
    // NOP
    // 0x354a9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x354a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x354aa0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x354aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x354aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354aa8: 0x0  nop
    ctx->pc = 0x354aa8u;
    // NOP
    // 0x354aac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x354aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x354ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354ab4: 0xa7a200e4  sh          $v0, 0xE4($sp)
    ctx->pc = 0x354ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 2));
    // 0x354ab8: 0xa3a000e6  sb          $zero, 0xE6($sp)
    ctx->pc = 0x354ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x354abc: 0xa3a000e7  sb          $zero, 0xE7($sp)
    ctx->pc = 0x354abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x354ac0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354ac4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x354ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x354ac8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x354AC8u;
    SET_GPR_U32(ctx, 31, 0x354AD0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x354AC8u, 0x354AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AD0u;
label_354ad0:
    // 0x354ad0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x354ad0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354ad4: 0x10e0004a  beqz        $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x354AD4u;
    {
        const bool branch_taken_0x354ad4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ad4) {
            ctx->pc = 0x354C00u;
            return;
        }
    }
    ctx->pc = 0x354ADCu;
    // 0x354adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354ae0: 0x0  nop
    ctx->pc = 0x354ae0u;
    // NOP
    // 0x354ae4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x354ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x354ae8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354aec: 0x0  nop
    ctx->pc = 0x354aecu;
    // NOP
    // 0x354af0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x354af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x354af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354af8: 0x0  nop
    ctx->pc = 0x354af8u;
    // NOP
    // 0x354afc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x354afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x354b00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x354b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354b08: 0x0  nop
    ctx->pc = 0x354b08u;
    // NOP
    // 0x354b0c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x354b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x354b10: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x354b14: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x354b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x354b18: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x354b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354b1c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x354b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x354b20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x354b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x354b24: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x354b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x354b28: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x354b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x354b2c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x354b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x354b30: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x354b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x354b34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x354b34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354b38: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x354b3c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354b3cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354b40: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354B40u;
    SET_GPR_U32(ctx, 31, 0x354B48u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354B40u, 0x354B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B48u;
label_354b48:
    // 0x354b48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x354B48u;
    SET_GPR_U32(ctx, 31, 0x354B50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354B48u, 0x354B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B50u;
label_354b50:
    // 0x354b50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x354b50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354b54: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354B54u;
    {
        const bool branch_taken_0x354b54 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x354b54) {
            ctx->pc = 0x354B70u;
            return;
        }
    }
    ctx->pc = 0x354B5Cu;
    // 0x354b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x354b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354b60: 0x0  nop
    ctx->pc = 0x354b60u;
    // NOP
    // 0x354b64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x354b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x354B68u;
    {
        const bool branch_taken_0x354b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b68) {
            ctx->pc = 0x354B8Cu;
            return;
        }
    }
    ctx->pc = 0x354B70u;
}
