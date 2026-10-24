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

// Function: Set_effect_em05_01
// Address: 0x2eabd0 - 0x2eb040
void Set_effect_em05_01_0x2eabd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_01_0x2eabd0");
#endif

    switch (ctx->pc) {
        case 0x2eac44u: goto label_2eac44;
        case 0x2eacfcu: goto label_2eacfc;
        case 0x2ead90u: goto label_2ead90;
        case 0x2eae40u: goto label_2eae40;
        case 0x2eae64u: goto label_2eae64;
        case 0x2eae88u: goto label_2eae88;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaed4u: goto label_2eaed4;
        case 0x2eaf00u: goto label_2eaf00;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eaff0u: goto label_2eaff0;
        default: break;
    }

    ctx->pc = 0x2eabd0u;

    // 0x2eabd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2eabd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2eabd4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2eabd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x2eabd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2eabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2eabdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2eabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2eabe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eabe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eabe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eabec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eabf0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2eabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2eabf4: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2eabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x2eabf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eabf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eabfc: 0x0  nop
    ctx->pc = 0x2eabfcu;
    // NOP
    // 0x2eac00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2eac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2eac04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eac04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac08: 0x0  nop
    ctx->pc = 0x2eac08u;
    // NOP
    // 0x2eac0c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2eac0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2eac10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eac10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac14: 0x0  nop
    ctx->pc = 0x2eac14u;
    // NOP
    // 0x2eac18: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2eac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2eac1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2eac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2eac20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eac20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac24: 0x0  nop
    ctx->pc = 0x2eac24u;
    // NOP
    // 0x2eac28: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2eac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2eac2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eac2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac30: 0x0  nop
    ctx->pc = 0x2eac30u;
    // NOP
    // 0x2eac34: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2eac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2eac38: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2eac38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eac3c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2EAC3Cu;
    {
        const bool branch_taken_0x2eac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac3c) {
            ctx->pc = 0x2EB010u;
            goto label_2eb010;
        }
    }
    ctx->pc = 0x2EAC44u;
label_2eac44:
    // 0x2eac44: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2eac44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2eac48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eac50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eac54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eac58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eac5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eac60: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eac64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eac68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eac6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eac70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eac74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eac78: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eac7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eac80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eac84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac88: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eac88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eac8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eac90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eac94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eac98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eac9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2eac9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eaca0: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2eaca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2eaca4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eaca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eaca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eaca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eacac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2eacacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2eacb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eacb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eacb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eacb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eacb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eacb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eacbc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2eacbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eacc0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2eacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eacc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2eacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2eacc8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eaccc: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2eacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2eacd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eacd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eacd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eacd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eacd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eacdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eace0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eace4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eace8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eace8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eacec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eacecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eacf0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eacf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EACF4u;
    SET_GPR_U32(ctx, 31, 0x2EACFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EACF4u, 0x2EACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACFCu;
label_2eacfc:
    // 0x2eacfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eacfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead00: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ead04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead0c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ead0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ead10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ead14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead1c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ead1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ead20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead28: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ead28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead34: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ead34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead40: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ead40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead4c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ead4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead58: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ead58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead64: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ead64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead70: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ead70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead7c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ead7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead84: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ead84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EAD88u;
    SET_GPR_U32(ctx, 31, 0x2EAD90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EAD88u, 0x2EAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD90u;
label_2ead90:
    // 0x2ead90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead94: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ead94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ead98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead9c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ead9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eada0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eada4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eada8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EADA8u;
    {
        const bool branch_taken_0x2eada8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eada8) {
            ctx->pc = 0x2EADBCu;
            goto label_2eadbc;
        }
    }
    ctx->pc = 0x2EADB0u;
    // 0x2eadb0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eadb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eadb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EADB4u;
    {
        const bool branch_taken_0x2eadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadb4) {
            ctx->pc = 0x2EADD8u;
            goto label_2eadd8;
        }
    }
    ctx->pc = 0x2EADBCu;
label_2eadbc:
    // 0x2eadbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eadc0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eadc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eadc8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eadcc: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x2eadccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eadd0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2eadd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2eadd4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2eadd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2eadd8:
    // 0x2eadd8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eaddc: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2eaddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eade0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2eade0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eade4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eade8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eadec: 0x12030086  beq         $s0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2EADECu;
    {
        const bool branch_taken_0x2eadec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eadec) {
            ctx->pc = 0x2EB008u;
            goto label_2eb008;
        }
    }
    ctx->pc = 0x2EADF4u;
    // 0x2eadf4: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eadf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eadf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eadfc: 0x0  nop
    ctx->pc = 0x2eadfcu;
    // NOP
    // 0x2eae00: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eae04: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eae08: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eae0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae10: 0x0  nop
    ctx->pc = 0x2eae10u;
    // NOP
    // 0x2eae14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eae18: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2eae1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae20: 0x0  nop
    ctx->pc = 0x2eae20u;
    // NOP
    // 0x2eae24: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eae28: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2eae28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2eae2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae30: 0x0  nop
    ctx->pc = 0x2eae30u;
    // NOP
    // 0x2eae34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eae38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE38u;
    SET_GPR_U32(ctx, 31, 0x2EAE40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE38u, 0x2EAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE40u;
label_2eae40:
    // 0x2eae40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae48: 0x0  nop
    ctx->pc = 0x2eae48u;
    // NOP
    // 0x2eae4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae50: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eae58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eae58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eae5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE5Cu, 0x2EAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE64u;
label_2eae64:
    // 0x2eae64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae6c: 0x0  nop
    ctx->pc = 0x2eae6cu;
    // NOP
    // 0x2eae70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae74: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eae7c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eae80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAE80u;
    SET_GPR_U32(ctx, 31, 0x2EAE88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAE80u, 0x2EAE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE88u;
label_2eae88:
    // 0x2eae88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eae8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae90: 0x0  nop
    ctx->pc = 0x2eae90u;
    // NOP
    // 0x2eae94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eae94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eae98: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaea0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eaea4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAEA4u;
    SET_GPR_U32(ctx, 31, 0x2EAEACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAEA4u, 0x2EAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEACu;
label_2eaeac:
    // 0x2eaeac: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaeb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaeb4: 0x0  nop
    ctx->pc = 0x2eaeb4u;
    // NOP
    // 0x2eaeb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaeb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaebc: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eaebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaec4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eaec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eaec8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2eaec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaecc: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EAECCu;
    SET_GPR_U32(ctx, 31, 0x2EAED4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EAECCu, 0x2EAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAED4u;
label_2eaed4:
    // 0x2eaed4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2eaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2eaed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaedc: 0x0  nop
    ctx->pc = 0x2eaedcu;
    // NOP
    // 0x2eaee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaee4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eaee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eaee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eaee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaeec: 0x0  nop
    ctx->pc = 0x2eaeecu;
    // NOP
    // 0x2eaef0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eaef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eaef4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2eaef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaef8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EAEF8u;
    SET_GPR_U32(ctx, 31, 0x2EAF00u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EAEF8u, 0x2EAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF00u;
label_2eaf00:
    // 0x2eaf00: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2eaf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2eaf04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaf08: 0x0  nop
    ctx->pc = 0x2eaf08u;
    // NOP
    // 0x2eaf0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaf0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaf10: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eaf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eaf14: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2eaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2eaf18: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2eaf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf20: 0x0  nop
    ctx->pc = 0x2eaf20u;
    // NOP
    // 0x2eaf24: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eaf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eaf28: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2eaf2c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eaf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eaf30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf34: 0x0  nop
    ctx->pc = 0x2eaf34u;
    // NOP
    // 0x2eaf38: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2eaf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2eaf3c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2eaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2eaf40: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2eaf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2eaf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf48: 0x0  nop
    ctx->pc = 0x2eaf48u;
    // NOP
    // 0x2eaf4c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eaf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eaf50: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x2eaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x2eaf54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eaf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eaf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf5c: 0x0  nop
    ctx->pc = 0x2eaf5cu;
    // NOP
    // 0x2eaf60: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eaf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eaf64: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eaf68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf6c: 0x0  nop
    ctx->pc = 0x2eaf6cu;
    // NOP
    // 0x2eaf70: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eaf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eaf74: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2eaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2eaf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf7c: 0x0  nop
    ctx->pc = 0x2eaf7cu;
    // NOP
    // 0x2eaf80: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eaf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eaf84: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eaf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf8c: 0x0  nop
    ctx->pc = 0x2eaf8cu;
    // NOP
    // 0x2eaf90: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eaf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eaf94: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAF94u;
    SET_GPR_U32(ctx, 31, 0x2EAF9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAF94u, 0x2EAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eafa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eafa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eafa4: 0x0  nop
    ctx->pc = 0x2eafa4u;
    // NOP
    // 0x2eafa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eafa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eafac: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2eafb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eafb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eafb4: 0x0  nop
    ctx->pc = 0x2eafb4u;
    // NOP
    // 0x2eafb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eafb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eafbc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eafc0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2eafc4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2eafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2eafc8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAFC8u;
    SET_GPR_U32(ctx, 31, 0x2EAFD0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAFC8u, 0x2EAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFD0u;
label_2eafd0:
    // 0x2eafd0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eafd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eafd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eafd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eafd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eafdc: 0x0  nop
    ctx->pc = 0x2eafdcu;
    // NOP
    // 0x2eafe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eafe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eafe4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eafe8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAFE8u;
    SET_GPR_U32(ctx, 31, 0x2EAFF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAFE8u, 0x2EAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFF0u;
label_2eaff0:
    // 0x2eaff0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2eaff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2eaff4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eaff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eaff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaffc: 0x0  nop
    ctx->pc = 0x2eaffcu;
    // NOP
    // 0x2eb000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb004: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eb004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2eb008:
    // 0x2eb008: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2eb008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2eb00c: 0x0  nop
    ctx->pc = 0x2eb00cu;
    // NOP
label_2eb010:
    // 0x2eb010: 0x1a40ff0c  blez        $s2, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x2EB010u;
    {
        const bool branch_taken_0x2eb010 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2eb010) {
            ctx->pc = 0x2EAC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eac44;
        }
    }
    ctx->pc = 0x2EB018u;
    // 0x2eb018: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2eb018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb01c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2eb01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eb020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eb024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eb028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eb030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb034: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eb038: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB040u;
}
