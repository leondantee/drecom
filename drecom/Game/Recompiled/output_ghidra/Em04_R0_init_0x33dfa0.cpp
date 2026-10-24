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

// Function: Em04_R0_init
// Address: 0x33dfa0 - 0x33e584
void Em04_R0_init_0x33dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R0_init_0x33dfa0");
#endif

    switch (ctx->pc) {
        case 0x33dfd8u: goto label_33dfd8;
        case 0x33e128u: goto label_33e128;
        case 0x33e134u: goto label_33e134;
        case 0x33e144u: goto label_33e144;
        case 0x33e214u: goto label_33e214;
        case 0x33e220u: goto label_33e220;
        case 0x33e228u: goto label_33e228;
        case 0x33e258u: goto label_33e258;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e328u: goto label_33e328;
        case 0x33e400u: goto label_33e400;
        case 0x33e44cu: goto label_33e44c;
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e518u: goto label_33e518;
        default: break;
    }

    ctx->pc = 0x33dfa0u;

    // 0x33dfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33dfa4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x33dfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x33dfa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33dfac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33dfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33dfb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33dfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33dfb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33dfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33dfbc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x33dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x33dfc0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33dfc4: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x33dfc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x33dfc8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x33dfc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x33dfcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33dfccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33dfd0: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x33DFD0u;
    SET_GPR_U32(ctx, 31, 0x33DFD8u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x33DFD0u, 0x33DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DFD8u;
label_33dfd8:
    // 0x33dfd8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x33dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x33dfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dfe0: 0x0  nop
    ctx->pc = 0x33dfe0u;
    // NOP
    // 0x33dfe4: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x33dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x33dfe8: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x33dfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x33dfec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x33dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x33dff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dff4: 0x0  nop
    ctx->pc = 0x33dff4u;
    // NOP
    // 0x33dff8: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x33dff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x33dffc: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x33dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x33e000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e004: 0x0  nop
    ctx->pc = 0x33e004u;
    // NOP
    // 0x33e008: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x33e008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x33e00c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e010: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33e014: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33e014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x33e018: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x33e018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x33e01c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e020: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x33e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x33e024: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x33e024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x33e028: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e02c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x33e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33e030: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x33e030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x33e034: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x33e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x33e038: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x33e038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x33e03c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33e040: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x33e040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x33e044: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x33e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x33e048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e04c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e050: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x33e050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x33e054: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x33e058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e05c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e060: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x33e060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x33e064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e068: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e06c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x33e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x33e070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e074: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x33e074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x33e078: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e07c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x33e07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x33e080: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e084: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33e088: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x33e08c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x33e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x33e090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e094: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e098: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33e098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e0a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0a4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x33e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e0a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0ac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x33e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e0b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0b4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x33e0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e0b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x33e0c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0c4: 0xac401330  sw          $zero, 0x1330($v0)
    ctx->pc = 0x33e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x33e0c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0cc: 0xac401350  sw          $zero, 0x1350($v0)
    ctx->pc = 0x33e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4944), GPR_U32(ctx, 0));
    // 0x33e0d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0d4: 0xac401360  sw          $zero, 0x1360($v0)
    ctx->pc = 0x33e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4960), GPR_U32(ctx, 0));
    // 0x33e0d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33e0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e0e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0e4: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x33e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x33e0e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33e0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33e0ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e0f0: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x33e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x33e0f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33e0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33e0f8: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x33e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e0fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e100: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x33e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x33e104: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33e104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33e108: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33e10c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x33e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x33e110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e114: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x33e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x33e118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x33e11c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e120: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x33E120u;
    SET_GPR_U32(ctx, 31, 0x33E128u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x33E120u, 0x33E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E128u;
label_33e128:
    // 0x33e128: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33e128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33e12c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x33E12Cu;
    {
        const bool branch_taken_0x33e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e12c) {
            ctx->pc = 0x33E3B0u;
            goto label_33e3b0;
        }
    }
    ctx->pc = 0x33E134u;
label_33e134:
    // 0x33e134: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x33e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33e138: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e13c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x33E13Cu;
    SET_GPR_U32(ctx, 31, 0x33E144u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x33E13Cu, 0x33E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E144u;
label_33e144:
    // 0x33e144: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e148: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x33e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x33e14c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x33e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x33e150: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33e154: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33e154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33e158: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e15c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33e15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e160: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e164: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e16c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e178: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e17c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e180: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e184: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e188: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e190: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e194: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e19c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e1a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e1a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e1ac: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33e1b0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x33e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x33e1b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e1bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e1c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1cc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e1d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e1dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e1e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e1e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e1e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e1ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e1f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1f4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e1f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e1f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x33e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x33e200: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x33e200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x33e204: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33e204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33e208: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x33e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33e20c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E20Cu;
    SET_GPR_U32(ctx, 31, 0x33E214u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E20Cu, 0x33E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E214u;
label_33e214:
    // 0x33e214: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x33e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e218: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E218u;
    SET_GPR_U32(ctx, 31, 0x33E220u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E218u, 0x33E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E220u;
label_33e220:
    // 0x33e220: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E220u;
    SET_GPR_U32(ctx, 31, 0x33E228u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E220u, 0x33E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E228u;
label_33e228:
    // 0x33e228: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x33e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x33e22c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e230: 0x0  nop
    ctx->pc = 0x33e230u;
    // NOP
    // 0x33e234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e238: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x33e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x33e23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e240: 0x0  nop
    ctx->pc = 0x33e240u;
    // NOP
    // 0x33e244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33e248: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x33e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x33e24c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x33e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x33e250: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E250u;
    SET_GPR_U32(ctx, 31, 0x33E258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E250u, 0x33E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E258u;
label_33e258:
    // 0x33e258: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e25c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e260: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e270: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e274: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e278: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e27c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e288: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e28c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e290: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e298: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2a0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x33e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33e2a4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x33e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33e2a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x33e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x33e2ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x33e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x33e2b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e2b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e2bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e2c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e2cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e2d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e2d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e2e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e2e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e2e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e2ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e2fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e300: 0xa6020052  sh          $v0, 0x52($s0)
    ctx->pc = 0x33e300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e304: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E304u;
    SET_GPR_U32(ctx, 31, 0x33E30Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E304u, 0x33E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E30Cu;
label_33e30c:
    // 0x33e30c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e314: 0x0  nop
    ctx->pc = 0x33e314u;
    // NOP
    // 0x33e318: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e31c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x33e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x33e320: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E320u;
    SET_GPR_U32(ctx, 31, 0x33E328u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E320u, 0x33E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E328u;
label_33e328:
    // 0x33e328: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e32c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e330: 0x0  nop
    ctx->pc = 0x33e330u;
    // NOP
    // 0x33e334: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e338: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x33e338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x33e33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e340: 0x0  nop
    ctx->pc = 0x33e340u;
    // NOP
    // 0x33e344: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x33e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x33e348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e34c: 0x0  nop
    ctx->pc = 0x33e34cu;
    // NOP
    // 0x33e350: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x33e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x33e354: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e358: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e35c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e360: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e36c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e374: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e37c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e384: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e388: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e38c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e390: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e394: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e39c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x33e3a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x33e3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x33e3a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e3a8: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e3ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33e3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33e3b0:
    // 0x33e3b0: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x33e3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x33e3b4: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x33E3B4u;
    {
        const bool branch_taken_0x33e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e3b4) {
            ctx->pc = 0x33E134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e134;
        }
    }
    ctx->pc = 0x33E3BCu;
    // 0x33e3bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33e3c0: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x33e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x33e3c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3c8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x33e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x33e3cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e3ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x33e3d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33e3d4: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x33e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x33e3d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3dc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33e3e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e3e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33e3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33e3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33e3ec: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x33e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x33e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x33e3f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e3f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33E3F8u;
    {
        const bool branch_taken_0x33e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e3f8) {
            ctx->pc = 0x33E478u;
            goto label_33e478;
        }
    }
    ctx->pc = 0x33E400u;
label_33e400:
    // 0x33e400: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e404: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x33e404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x33e408: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33e40c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33e410: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x33e414: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x33e414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e418: 0x8e930034  lw          $s3, 0x34($s4)
    ctx->pc = 0x33e418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x33e41c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x33e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x33e420: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x33e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x33e424: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33e428: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x33e428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x33e42c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x33e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x33e430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e434: 0x0  nop
    ctx->pc = 0x33e434u;
    // NOP
    // 0x33e438: 0xe66000a0  swc1        $f0, 0xA0($s3)
    ctx->pc = 0x33e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
    // 0x33e43c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x33e43cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x33e440: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x33e444: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x33E444u;
    SET_GPR_U32(ctx, 31, 0x33E44Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x33E444u, 0x33E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E44Cu;
label_33e44c:
    // 0x33e44c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x33e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x33e450: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x33e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x33e454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e458: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x33e45c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33e460: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x33e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x33e464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e468: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33e46c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e470: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33e470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33e474: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_33e478:
    // 0x33e478: 0x2e22001f  sltiu       $v0, $s1, 0x1F
    ctx->pc = 0x33e478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33e47c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x33E47Cu;
    {
        const bool branch_taken_0x33e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e47c) {
            ctx->pc = 0x33E400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e400;
        }
    }
    ctx->pc = 0x33E484u;
    // 0x33e484: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x33e488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33e488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33e48c: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x33e48cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x33e490: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x33e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x33e494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e498: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e49c: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x33e49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x33e4a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33e4a8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x33e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33e4ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e4b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33e4b4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33E4B4u;
    SET_GPR_U32(ctx, 31, 0x33E4BCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33E4B4u, 0x33E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4BCu;
label_33e4bc:
    // 0x33e4bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33e4c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e4c4: 0x0  nop
    ctx->pc = 0x33e4c4u;
    // NOP
    // 0x33e4c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33e4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33e4cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4d0: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x33e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x33e4d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33e4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33e4d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33e4dc: 0x24439f80  addiu       $v1, $v0, -0x6080
    ctx->pc = 0x33e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
    // 0x33e4e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4e4: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x33e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x33e4e8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x33e4ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4f0: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x33e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x33e4f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x33e4f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4fc: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x33e4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e504: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e508: 0xa04310a9  sb          $v1, 0x10A9($v0)
    ctx->pc = 0x33e508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4265), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e50c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e510: 0xc0cfc5c  jal         func_33F170
    ctx->pc = 0x33E510u;
    SET_GPR_U32(ctx, 31, 0x33E518u);
    ctx->pc = 0x33F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F170u, 0x33E510u, 0x33E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E518u;
label_33e518:
    // 0x33e518: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33e518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33e51c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e520: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x33e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x33e524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e528: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33e52c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x33e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x33e530: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e534: 0xac641250  sw          $a0, 0x1250($v1)
    ctx->pc = 0x33e534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 4));
    // 0x33e538: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e53c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33e53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33e540: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33e544: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33e548: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E548u;
    {
        const bool branch_taken_0x33e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e548) {
            ctx->pc = 0x33E560u;
            goto label_33e560;
        }
    }
    ctx->pc = 0x33E550u;
    // 0x33e550: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33e550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33e554: 0x24649f60  addiu       $a0, $v1, -0x60A0
    ctx->pc = 0x33e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942560));
    // 0x33e558: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e55c: 0xac641250  sw          $a0, 0x1250($v1)
    ctx->pc = 0x33e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 4));
label_33e560:
    // 0x33e560: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x33e560u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33e564: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33e564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e568: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33e568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e56c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e578: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x33e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33e57c: 0x3e00008  jr          $ra
    ctx->pc = 0x33E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E584u;
}
