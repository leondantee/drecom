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

// Function: Set_effect_em05_05
// Address: 0x2ecfa0 - 0x2ed504
void Set_effect_em05_05_0x2ecfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_05_0x2ecfa0");
#endif

    switch (ctx->pc) {
        case 0x2ecfe8u: goto label_2ecfe8;
        case 0x2ed00cu: goto label_2ed00c;
        case 0x2ed038u: goto label_2ed038;
        case 0x2ed05cu: goto label_2ed05c;
        case 0x2ed0f8u: goto label_2ed0f8;
        case 0x2ed194u: goto label_2ed194;
        case 0x2ed230u: goto label_2ed230;
        case 0x2ed2f8u: goto label_2ed2f8;
        case 0x2ed30cu: goto label_2ed30c;
        case 0x2ed320u: goto label_2ed320;
        case 0x2ed338u: goto label_2ed338;
        case 0x2ed370u: goto label_2ed370;
        case 0x2ed464u: goto label_2ed464;
        case 0x2ed484u: goto label_2ed484;
        default: break;
    }

    ctx->pc = 0x2ecfa0u;

    // 0x2ecfa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ecfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ecfa4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2ecfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2ecfa8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ecfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ecfac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ecfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ecfb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ecfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ecfb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ecfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ecfb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ecfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ecfbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ecfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ecfc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ecfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ecfc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ecfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ecfc8: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2ecfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2ecfcc: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x2ecfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x2ecfd0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2ecfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2ecfd4: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x2ecfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x2ecfd8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ecfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ecfdc: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x2ecfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ecfe0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2ECFE0u;
    SET_GPR_U32(ctx, 31, 0x2ECFE8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2ECFE0u, 0x2ECFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFE8u;
label_2ecfe8:
    // 0x2ecfe8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ecfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ecfec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecff0: 0x0  nop
    ctx->pc = 0x2ecff0u;
    // NOP
    // 0x2ecff4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ecff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecff8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2ecff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ecffc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ecffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ed000: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x2ed000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed004: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2ED004u;
    SET_GPR_U32(ctx, 31, 0x2ED00Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2ED004u, 0x2ED00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED00Cu;
label_2ed00c:
    // 0x2ed00c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2ed00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2ed010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ed010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed014: 0x0  nop
    ctx->pc = 0x2ed014u;
    // NOP
    // 0x2ed018: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed01c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2ed01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ed020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ed020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed024: 0x0  nop
    ctx->pc = 0x2ed024u;
    // NOP
    // 0x2ed028: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ed028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ed02c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ed02cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed030: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x2ED030u;
    {
        const bool branch_taken_0x2ed030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed030) {
            ctx->pc = 0x2ED4C8u;
            goto label_2ed4c8;
        }
    }
    ctx->pc = 0x2ED038u;
label_2ed038:
    // 0x2ed038: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed03c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2ED03Cu;
    {
        const bool branch_taken_0x2ed03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed03c) {
            ctx->pc = 0x2ED154u;
            goto label_2ed154;
        }
    }
    ctx->pc = 0x2ED044u;
    // 0x2ed044: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ed044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ed048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed04c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed050: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ed050u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed054: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ED054u;
    SET_GPR_U32(ctx, 31, 0x2ED05Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ED054u, 0x2ED05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED05Cu;
label_2ed05c:
    // 0x2ed05c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed060: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ed064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed06c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed070: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ed070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed074: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed078: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed07c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed07cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed080: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ed080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed088: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed08c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ed08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed098: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed09c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ed09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed0a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0a8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ed0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0b4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ed0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0c0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ed0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0cc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ed0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0d8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ed0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0e4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ed0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0ec: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ED0F0u;
    SET_GPR_U32(ctx, 31, 0x2ED0F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ED0F0u, 0x2ED0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0F8u;
label_2ed0f8:
    // 0x2ed0f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0fc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ed0fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ed100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed104: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ed104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed108: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed10c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed110: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED110u;
    {
        const bool branch_taken_0x2ed110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed110) {
            ctx->pc = 0x2ED124u;
            goto label_2ed124;
        }
    }
    ctx->pc = 0x2ED118u;
    // 0x2ed118: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ed118u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed11c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED11Cu;
    {
        const bool branch_taken_0x2ed11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed11c) {
            ctx->pc = 0x2ED140u;
            goto label_2ed140;
        }
    }
    ctx->pc = 0x2ED124u;
label_2ed124:
    // 0x2ed124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed128: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ed128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed12c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed130: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ed130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed134: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2ed134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ed138: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2ed138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed13c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2ed13cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ed140:
    // 0x2ed140: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ed140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ed144: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2ed144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ed148: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed14c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2ED14Cu;
    {
        const bool branch_taken_0x2ed14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed14c) {
            ctx->pc = 0x2ED288u;
            goto label_2ed288;
        }
    }
    ctx->pc = 0x2ED154u;
label_2ed154:
    // 0x2ed154: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2ed154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed158: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ed15c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ed15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ed160: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ed160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ed164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed16c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed170: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed174: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed178: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed17c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ed17cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed180: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ed184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed188: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed18c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ED18Cu;
    SET_GPR_U32(ctx, 31, 0x2ED194u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ED18Cu, 0x2ED194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED194u;
label_2ed194:
    // 0x2ed194: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed198: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ed19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed1a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1a8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ed1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed1b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1b8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ed1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1c4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ed1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed1cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1d4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ed1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1e0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ed1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1ec: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ed1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ed1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed200: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed204: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ed204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed208: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed20c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed20cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed210: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ed210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed21c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ed21cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed224: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ed224u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed228: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ED228u;
    SET_GPR_U32(ctx, 31, 0x2ED230u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ED228u, 0x2ED230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED230u;
label_2ed230:
    // 0x2ed230: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed234: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ed234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ed238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed23c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ed23cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed240: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed244: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed248: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED248u;
    {
        const bool branch_taken_0x2ed248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed248) {
            ctx->pc = 0x2ED25Cu;
            goto label_2ed25c;
        }
    }
    ctx->pc = 0x2ED250u;
    // 0x2ed250: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ed250u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED254u;
    {
        const bool branch_taken_0x2ed254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed254) {
            ctx->pc = 0x2ED278u;
            goto label_2ed278;
        }
    }
    ctx->pc = 0x2ED25Cu;
label_2ed25c:
    // 0x2ed25c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed260: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ed260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed264: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed268: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ed268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed26c: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2ed26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ed270: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2ed270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ed274: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2ed274u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ed278:
    // 0x2ed278: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ed27c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2ed27cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ed280: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2ed280u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed284: 0x0  nop
    ctx->pc = 0x2ed284u;
    // NOP
label_2ed288:
    // 0x2ed288: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed28c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed290: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2ED290u;
    {
        const bool branch_taken_0x2ed290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed290) {
            ctx->pc = 0x2ED4A0u;
            goto label_2ed4a0;
        }
    }
    ctx->pc = 0x2ED298u;
    // 0x2ed298: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ed298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ed29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2a0: 0x0  nop
    ctx->pc = 0x2ed2a0u;
    // NOP
    // 0x2ed2a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ed2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ed2a8: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ed2ac: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ed2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ed2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2b4: 0x0  nop
    ctx->pc = 0x2ed2b4u;
    // NOP
    // 0x2ed2b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ed2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ed2bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ed2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2c4: 0x0  nop
    ctx->pc = 0x2ed2c4u;
    // NOP
    // 0x2ed2c8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ed2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ed2cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ed2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2d4: 0x0  nop
    ctx->pc = 0x2ed2d4u;
    // NOP
    // 0x2ed2d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ed2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ed2dc: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2ed2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2ed2e0: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2ed2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2ed2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2e8: 0x0  nop
    ctx->pc = 0x2ed2e8u;
    // NOP
    // 0x2ed2ec: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ed2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ed2f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED2F0u;
    SET_GPR_U32(ctx, 31, 0x2ED2F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED2F0u, 0x2ED2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2F8u;
label_2ed2f8:
    // 0x2ed2f8: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2ed2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed2fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed300: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ed300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ed304: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED304u;
    SET_GPR_U32(ctx, 31, 0x2ED30Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED304u, 0x2ED30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED30Cu;
label_2ed30c:
    // 0x2ed30c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2ed30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed314: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ed314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ed318: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED318u;
    SET_GPR_U32(ctx, 31, 0x2ED320u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED318u, 0x2ED320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED320u;
label_2ed320:
    // 0x2ed320: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2ed320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed328: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ed328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ed32c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2ed32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed330: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2ED330u;
    SET_GPR_U32(ctx, 31, 0x2ED338u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2ED330u, 0x2ED338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED338u;
label_2ed338:
    // 0x2ed338: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ed33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed340: 0x0  nop
    ctx->pc = 0x2ed340u;
    // NOP
    // 0x2ed344: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ed344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed348: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2ed348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed350: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ed350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ed354: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ed354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ed358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed35c: 0x0  nop
    ctx->pc = 0x2ed35cu;
    // NOP
    // 0x2ed360: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ed360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ed364: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2ed364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed368: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2ED368u;
    SET_GPR_U32(ctx, 31, 0x2ED370u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2ED368u, 0x2ED370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED370u;
label_2ed370:
    // 0x2ed370: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ed370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ed374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed378: 0x0  nop
    ctx->pc = 0x2ed378u;
    // NOP
    // 0x2ed37c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ed37cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed380: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ed380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed388: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ed388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ed38c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ed390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed394: 0x0  nop
    ctx->pc = 0x2ed394u;
    // NOP
    // 0x2ed398: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ed398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ed39c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ed39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ed3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3a4: 0x0  nop
    ctx->pc = 0x2ed3a4u;
    // NOP
    // 0x2ed3a8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ed3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ed3ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ed3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ed3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3b4: 0x0  nop
    ctx->pc = 0x2ed3b4u;
    // NOP
    // 0x2ed3b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ed3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ed3bc: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2ed3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2ed3c0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2ed3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2ed3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3c8: 0x0  nop
    ctx->pc = 0x2ed3c8u;
    // NOP
    // 0x2ed3cc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ed3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ed3d0: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2ed3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2ed3d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2ed3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2ed3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3dc: 0x0  nop
    ctx->pc = 0x2ed3dcu;
    // NOP
    // 0x2ed3e0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ed3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ed3e4: 0x3c024357  lui         $v0, 0x4357
    ctx->pc = 0x2ed3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17239 << 16));
    // 0x2ed3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3ec: 0x0  nop
    ctx->pc = 0x2ed3ecu;
    // NOP
    // 0x2ed3f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ed3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ed3f4: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2ed3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2ed3f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ed3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ed3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed400: 0x0  nop
    ctx->pc = 0x2ed400u;
    // NOP
    // 0x2ed404: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ed404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ed408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed40c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ed410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ed410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed41c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed420: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ed420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ed424: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed428: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ed428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ed42c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ed42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed430: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed438: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ed438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ed43c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ed43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ed440: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ed440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ed444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed448: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ed448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ed44c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed450: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2ed450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ed454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed458: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ed458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ed45c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED45Cu;
    SET_GPR_U32(ctx, 31, 0x2ED464u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED45Cu, 0x2ED464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED464u;
label_2ed464:
    // 0x2ed464: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ed464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ed468: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ed468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ed46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed470: 0x0  nop
    ctx->pc = 0x2ed470u;
    // NOP
    // 0x2ed474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed478: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ed478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ed47c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED47Cu;
    SET_GPR_U32(ctx, 31, 0x2ED484u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED47Cu, 0x2ED484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED484u;
label_2ed484:
    // 0x2ed484: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ed484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ed488: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ed488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ed48c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ed48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed490: 0x0  nop
    ctx->pc = 0x2ed490u;
    // NOP
    // 0x2ed494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed498: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ed498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ed49c: 0x0  nop
    ctx->pc = 0x2ed49cu;
    // NOP
label_2ed4a0:
    // 0x2ed4a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ed4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ed4a4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2ed4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed4a8: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2ed4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2ed4ac: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2ed4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2ed4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed4b4: 0x0  nop
    ctx->pc = 0x2ed4b4u;
    // NOP
    // 0x2ed4b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed4b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed4bc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ed4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ed4c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2ed4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ed4c4: 0x0  nop
    ctx->pc = 0x2ed4c4u;
    // NOP
label_2ed4c8:
    // 0x2ed4c8: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x2ed4c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ed4cc: 0x1460feda  bnez        $v1, . + 4 + (-0x126 << 2)
    ctx->pc = 0x2ED4CCu;
    {
        const bool branch_taken_0x2ed4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4cc) {
            ctx->pc = 0x2ED038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed038;
        }
    }
    ctx->pc = 0x2ED4D4u;
    // 0x2ed4d4: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2ed4d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed4d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ed4d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed4dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ed4dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed4e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ed4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ed4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed4f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2ed4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ed4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED504u;
}
