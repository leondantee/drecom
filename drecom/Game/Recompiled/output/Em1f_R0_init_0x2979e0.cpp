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

// Function: Em1f_R0_init
// Address: 0x2979e0 - 0x297d30
void Em1f_R0_init_0x2979e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R0_init_0x2979e0");
#endif

    switch (ctx->pc) {
        case 0x297a0cu: goto label_297a0c;
        case 0x297b0cu: goto label_297b0c;
        case 0x297b14u: goto label_297b14;
        case 0x297b5cu: goto label_297b5c;
        case 0x297c14u: goto label_297c14;
        case 0x297c5cu: goto label_297c5c;
        default: break;
    }

    ctx->pc = 0x2979e0u;

    // 0x2979e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2979e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2979e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2979e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2979e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2979ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2979ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2979f0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2979f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2979f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2979f8: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2979f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2979fc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2979fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x297a00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x297a00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297a04: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x297A04u;
    SET_GPR_U32(ctx, 31, 0x297A0Cu);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x297A04u, 0x297A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A0Cu;
label_297a0c:
    // 0x297a0c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x297a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x297a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a14: 0x0  nop
    ctx->pc = 0x297a14u;
    // NOP
    // 0x297a18: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x297a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x297a1c: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x297a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x297a20: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x297a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a28: 0x0  nop
    ctx->pc = 0x297a28u;
    // NOP
    // 0x297a2c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x297a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x297a30: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x297a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a38: 0x0  nop
    ctx->pc = 0x297a38u;
    // NOP
    // 0x297a3c: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x297a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x297a40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a44: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x297a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x297a48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x297a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x297a4c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x297a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x297a50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a54: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x297a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x297a58: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x297a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x297a5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a60: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x297a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x297a64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x297a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x297a68: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x297a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a74: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x297a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x297a78: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x297a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x297a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297a80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a84: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x297a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x297a88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x297a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x297a8c: 0x8c23bb48  lw          $v1, -0x44B8($at)
    ctx->pc = 0x297a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB48u));
    // 0x297a90: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x297a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x297a94: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x297a94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297a98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297a9c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x297a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x297aa0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x297aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x297aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x297aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297aac: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x297aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x297ab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ab4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x297ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x297ab8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297abc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x297abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x297ac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x297ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ac4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x297ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297ac8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x297ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x297acc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x297accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x297ad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297ad4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ad8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x297ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x297adc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297ae0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ae4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x297ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x297ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297aec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x297aecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x297af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297af4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x297af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x297af8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297afc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x297afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x297b00: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x297b00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297b04: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x297B04u;
    {
        const bool branch_taken_0x297b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b04) {
            ctx->pc = 0x297B60u;
            goto label_297b60;
        }
    }
    ctx->pc = 0x297B0Cu;
label_297b0c:
    // 0x297b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x297B0Cu;
    SET_GPR_U32(ctx, 31, 0x297B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x297B0Cu, 0x297B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B14u;
label_297b14:
    // 0x297b14: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x297b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x297b18: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x297b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x297b1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b20: 0x0  nop
    ctx->pc = 0x297b20u;
    // NOP
    // 0x297b24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x297b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297b28: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x297b2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x297b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x297b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297b34: 0x0  nop
    ctx->pc = 0x297b34u;
    // NOP
    // 0x297b38: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x297b38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297b3c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x297b40: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x297b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x297b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x297b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297b50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297b50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297b54: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x297B54u;
    SET_GPR_U32(ctx, 31, 0x297B5Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297B54u, 0x297B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B5Cu;
label_297b5c:
    // 0x297b5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_297b60:
    // 0x297b60: 0x2e03000e  sltiu       $v1, $s0, 0xE
    ctx->pc = 0x297b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x297b64: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x297B64u;
    {
        const bool branch_taken_0x297b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297b64) {
            ctx->pc = 0x297B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297b0c;
        }
    }
    ctx->pc = 0x297B6Cu;
    // 0x297b6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b70: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x297b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x297b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297b78: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297b7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b80: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x297b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x297b84: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297b88: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297b8c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297b90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297b94: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x297b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x297b98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297b9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297ba0: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297ba4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ba8: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x297bac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297bb0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297bb4: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bbc: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x297bc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297bc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297bc8: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x297bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297bd0: 0x24631344  addiu       $v1, $v1, 0x1344
    ctx->pc = 0x297bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4932));
    // 0x297bd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x297bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x297bd8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x297bdc: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x297bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x297be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297be4: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x297be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x297be8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x297be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297bec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297bf0: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x297bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x297bf4: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x297bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x297bf8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x297bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x297bfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297c00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297c04: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x297c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x297c08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x297c08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297c0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x297C0Cu;
    {
        const bool branch_taken_0x297c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c0c) {
            ctx->pc = 0x297CA0u;
            goto label_297ca0;
        }
    }
    ctx->pc = 0x297C14u;
label_297c14:
    // 0x297c14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x297c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x297c18: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x297c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
    // 0x297c1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297c20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x297c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x297c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c28: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297c34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x297c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x297c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c40: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x297c44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297c48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297c50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297c54: 0xc067654  jal         func_19D950
    ctx->pc = 0x297C54u;
    SET_GPR_U32(ctx, 31, 0x297C5Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x297C54u, 0x297C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C5Cu;
label_297c5c:
    // 0x297c5c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x297c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x297c60: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x297c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x297c64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x297c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c68: 0x0  nop
    ctx->pc = 0x297c68u;
    // NOP
    // 0x297c6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x297c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297c70: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x297c74: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x297c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x297c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c7c: 0x0  nop
    ctx->pc = 0x297c7cu;
    // NOP
    // 0x297c80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297c84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c88: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x297c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x297c8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x297c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x297c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297c98: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_297ca0:
    // 0x297ca0: 0x2e03000e  sltiu       $v1, $s0, 0xE
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x297ca4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x297CA4u;
    {
        const bool branch_taken_0x297ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297ca4) {
            ctx->pc = 0x297C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297c14;
        }
    }
    ctx->pc = 0x297CACu;
    // 0x297cac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x297cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x297cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297cb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cb8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x297cbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297cc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cc4: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x297cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x297cc8: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x297cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x297ccc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x297cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x297cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297cd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cd8: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x297cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x297cdc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x297cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ce0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x297ce4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x297ce8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297cec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x297cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x297cf0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x297cf4: 0x246468c0  addiu       $a0, $v1, 0x68C0
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26816));
    // 0x297cf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cfc: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x297cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x297d00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297d04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297d08: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x297d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x297d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297d14: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x297d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x297d18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x297d18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297d24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x297d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x297d28: 0x3e00008  jr          $ra
    ctx->pc = 0x297D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297D30u;
}
