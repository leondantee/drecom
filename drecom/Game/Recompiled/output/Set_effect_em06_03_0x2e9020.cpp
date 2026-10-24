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

// Function: Set_effect_em06_03
// Address: 0x2e9020 - 0x2e9ad8
void Set_effect_em06_03_0x2e9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em06_03_0x2e9020");
#endif

    switch (ctx->pc) {
        case 0x2e90a4u: goto label_2e90a4;
        case 0x2e90e4u: goto label_2e90e4;
        case 0x2e9180u: goto label_2e9180;
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e9434u: goto label_2e9434;
        case 0x2e94d0u: goto label_2e94d0;
        case 0x2e9580u: goto label_2e9580;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e9868u: goto label_2e9868;
        case 0x2e9940u: goto label_2e9940;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e99e4u: goto label_2e99e4;
        case 0x2e99f0u: goto label_2e99f0;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a58u: goto label_2e9a58;
        default: break;
    }

    ctx->pc = 0x2e9020u;

    // 0x2e9020: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e9020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e9024: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2e9024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2e9028: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e9028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e902c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e9030: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e9034: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e9034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e9038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e9038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e903c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e9040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e9044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e904c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2e904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2e9050: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x2e9050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x2e9054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9058: 0x0  nop
    ctx->pc = 0x2e9058u;
    // NOP
    // 0x2e905c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e9060: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x2e9060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x2e9064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9068: 0x0  nop
    ctx->pc = 0x2e9068u;
    // NOP
    // 0x2e906c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e9070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9074: 0x0  nop
    ctx->pc = 0x2e9074u;
    // NOP
    // 0x2e9078: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e9078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e907c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9084: 0x0  nop
    ctx->pc = 0x2e9084u;
    // NOP
    // 0x2e9088: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e9088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e908c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e908cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9090: 0x0  nop
    ctx->pc = 0x2e9090u;
    // NOP
    // 0x2e9094: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e9094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9098: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9098u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e909c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2E909Cu;
    {
        const bool branch_taken_0x2e909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e909c) {
            ctx->pc = 0x2E93D0u;
            goto label_2e93d0;
        }
    }
    ctx->pc = 0x2E90A4u;
label_2e90a4:
    // 0x2e90a4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e90a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e90ac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2e90acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e90b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2e90b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e90b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2e90b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e90bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e90bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e90c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e90c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e90c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e90c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e90c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e90c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e90cc: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2e90ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e90d0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e90d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e90d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e90d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e90dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E90DCu;
    SET_GPR_U32(ctx, 31, 0x2E90E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E90DCu, 0x2E90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90E4u;
label_2e90e4:
    // 0x2e90e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e90e8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e90e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e90ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e90f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e90f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e90f8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e90f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e90fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9108: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e910c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e910cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9114: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e911c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9120: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9124: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9128: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e912c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e912cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9130: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9134: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9138: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e913c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e913cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9144: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9148: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e914c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9150: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9154: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e9154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9158: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e915c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e915cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9160: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9168: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e916c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9170: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9174: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9178: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9178u;
    SET_GPR_U32(ctx, 31, 0x2E9180u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9178u, 0x2E9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9180u;
label_2e9180:
    // 0x2e9180: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9184: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e9184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e918c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9190: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9194: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9198: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9198u;
    {
        const bool branch_taken_0x2e9198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9198) {
            ctx->pc = 0x2E91ACu;
            goto label_2e91ac;
        }
    }
    ctx->pc = 0x2E91A0u;
    // 0x2e91a0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e91a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e91a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E91A4u;
    {
        const bool branch_taken_0x2e91a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91a4) {
            ctx->pc = 0x2E91C8u;
            goto label_2e91c8;
        }
    }
    ctx->pc = 0x2E91ACu;
label_2e91ac:
    // 0x2e91ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e91acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e91b0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e91b8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91bc: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2e91bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e91c0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2e91c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e91c4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2e91c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e91c8:
    // 0x2e91c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e91cc: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e91d0: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2e91d0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e91d8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e91d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e91dc: 0x12030072  beq         $s0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E91DCu;
    {
        const bool branch_taken_0x2e91dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e91dc) {
            ctx->pc = 0x2E93A8u;
            goto label_2e93a8;
        }
    }
    ctx->pc = 0x2E91E4u;
    // 0x2e91e4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e91e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e91e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e91ec: 0x0  nop
    ctx->pc = 0x2e91ecu;
    // NOP
    // 0x2e91f0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e91f4: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x2e91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e91fc: 0x0  nop
    ctx->pc = 0x2e91fcu;
    // NOP
    // 0x2e9200: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9204: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e920c: 0x0  nop
    ctx->pc = 0x2e920cu;
    // NOP
    // 0x2e9210: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9214: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e9218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e921c: 0x0  nop
    ctx->pc = 0x2e921cu;
    // NOP
    // 0x2e9220: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9224: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e9228: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e922c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e922cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9230: 0x0  nop
    ctx->pc = 0x2e9230u;
    // NOP
    // 0x2e9234: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9238: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e923c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E923Cu;
    SET_GPR_U32(ctx, 31, 0x2E9244u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E923Cu, 0x2E9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9244u;
label_2e9244:
    // 0x2e9244: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e9248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e924c: 0x0  nop
    ctx->pc = 0x2e924cu;
    // NOP
    // 0x2e9250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9254: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9258: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9260: 0x0  nop
    ctx->pc = 0x2e9260u;
    // NOP
    // 0x2e9264: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9268: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e926c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E926Cu;
    SET_GPR_U32(ctx, 31, 0x2E9274u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E926Cu, 0x2E9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9274u;
label_2e9274:
    // 0x2e9274: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e9278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e927c: 0x0  nop
    ctx->pc = 0x2e927cu;
    // NOP
    // 0x2e9280: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9284: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9288: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e928c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9290: 0x0  nop
    ctx->pc = 0x2e9290u;
    // NOP
    // 0x2e9294: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92a0: 0x0  nop
    ctx->pc = 0x2e92a0u;
    // NOP
    // 0x2e92a4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e92a8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e92ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92b0: 0x0  nop
    ctx->pc = 0x2e92b0u;
    // NOP
    // 0x2e92b4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e92b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e92b8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e92bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e92bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e92c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92c4: 0x0  nop
    ctx->pc = 0x2e92c4u;
    // NOP
    // 0x2e92c8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e92c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e92cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e92d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e92d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e92d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92d8: 0x0  nop
    ctx->pc = 0x2e92d8u;
    // NOP
    // 0x2e92dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e92dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e92e0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e92e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92e8: 0x0  nop
    ctx->pc = 0x2e92e8u;
    // NOP
    // 0x2e92ec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e92ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e92f0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e92f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92f8: 0x0  nop
    ctx->pc = 0x2e92f8u;
    // NOP
    // 0x2e92fc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9300: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2e9300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9304: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2e9304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2e9308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e930c: 0x0  nop
    ctx->pc = 0x2e930cu;
    // NOP
    // 0x2e9310: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9314: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9318: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e931c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9320: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e932c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2e932cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e9330: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9334: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9338: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e9338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e933c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9344: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e9344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e9348: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e934c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e9350: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9354: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e9354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e9358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e935c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e9360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9364: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e9364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9368: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9368u;
    SET_GPR_U32(ctx, 31, 0x2E9370u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9368u, 0x2E9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9370u;
label_2e9370:
    // 0x2e9370: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9374: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e937c: 0x0  nop
    ctx->pc = 0x2e937cu;
    // NOP
    // 0x2e9380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9384: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9388: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9388u;
    SET_GPR_U32(ctx, 31, 0x2E9390u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9388u, 0x2E9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9390u;
label_2e9390:
    // 0x2e9390: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9394: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e939c: 0x0  nop
    ctx->pc = 0x2e939cu;
    // NOP
    // 0x2e93a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e93a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e93a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e93a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2e93a8:
    // 0x2e93a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e93a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e93ac: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e93acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e93b0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2e93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2e93b4: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2e93b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2e93b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e93b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93bc: 0x0  nop
    ctx->pc = 0x2e93bcu;
    // NOP
    // 0x2e93c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e93c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e93c4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e93c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e93c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e93c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e93cc: 0x0  nop
    ctx->pc = 0x2e93ccu;
    // NOP
label_2e93d0:
    // 0x2e93d0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2e93d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e93d4: 0x1460ff33  bnez        $v1, . + 4 + (-0xCD << 2)
    ctx->pc = 0x2E93D4u;
    {
        const bool branch_taken_0x2e93d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e93d4) {
            ctx->pc = 0x2E90A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e90a4;
        }
    }
    ctx->pc = 0x2E93DCu;
    // 0x2e93dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e93dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93e0: 0x0  nop
    ctx->pc = 0x2e93e0u;
    // NOP
    // 0x2e93e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e93e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e93e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e93e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e93ec: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2E93ECu;
    {
        const bool branch_taken_0x2e93ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93ec) {
            ctx->pc = 0x2E9768u;
            goto label_2e9768;
        }
    }
    ctx->pc = 0x2E93F4u;
label_2e93f4:
    // 0x2e93f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e93f8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e93fc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9400: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e9404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9408: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e940c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e9410: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9414: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e941c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e941cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9420: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9424: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9424u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9428: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e942c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E942Cu;
    SET_GPR_U32(ctx, 31, 0x2E9434u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E942Cu, 0x2E9434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9434u;
label_2e9434:
    // 0x2e9434: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9438: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e943c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9440: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9444: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9448: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e944c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9450: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9454: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9458: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e945c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9460: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9464: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e946c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9470: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9474: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9478: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e947c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e947cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9480: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9488: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e948c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e948cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9490: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9494: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9498: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e949c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94a4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e94a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94b0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e94b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94bc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e94bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94c4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E94C8u;
    SET_GPR_U32(ctx, 31, 0x2E94D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E94C8u, 0x2E94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94D0u;
label_2e94d0:
    // 0x2e94d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94d4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e94d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e94d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94dc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e94e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e94e4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e94e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e94e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E94E8u;
    {
        const bool branch_taken_0x2e94e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e94e8) {
            ctx->pc = 0x2E94FCu;
            goto label_2e94fc;
        }
    }
    ctx->pc = 0x2E94F0u;
    // 0x2e94f0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e94f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e94f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E94F4u;
    {
        const bool branch_taken_0x2e94f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94f4) {
            ctx->pc = 0x2E9518u;
            goto label_2e9518;
        }
    }
    ctx->pc = 0x2E94FCu;
label_2e94fc:
    // 0x2e94fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9500: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e9500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9504: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9508: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e9508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e950c: 0x24770118  addiu       $s7, $v1, 0x118
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e9510: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x2e9510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e9514: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2e9514u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e9518:
    // 0x2e9518: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e951c: 0x247ea610  addiu       $fp, $v1, -0x59F0
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e9520: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9524: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9528: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e952c: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2E952Cu;
    {
        const bool branch_taken_0x2e952c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e952c) {
            ctx->pc = 0x2E9740u;
            goto label_2e9740;
        }
    }
    ctx->pc = 0x2E9534u;
    // 0x2e9534: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2e9534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2e9538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e953c: 0x0  nop
    ctx->pc = 0x2e953cu;
    // NOP
    // 0x2e9540: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9544: 0x3c0241f9  lui         $v0, 0x41F9
    ctx->pc = 0x2e9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16889 << 16));
    // 0x2e9548: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e954c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e954cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9550: 0x0  nop
    ctx->pc = 0x2e9550u;
    // NOP
    // 0x2e9554: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9558: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2e9558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2e955c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e955cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9560: 0x0  nop
    ctx->pc = 0x2e9560u;
    // NOP
    // 0x2e9564: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9568: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2e9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2e956c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e956cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9570: 0x0  nop
    ctx->pc = 0x2e9570u;
    // NOP
    // 0x2e9574: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9578: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9578u;
    SET_GPR_U32(ctx, 31, 0x2E9580u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9578u, 0x2E9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9580u;
label_2e9580:
    // 0x2e9580: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9588: 0x0  nop
    ctx->pc = 0x2e9588u;
    // NOP
    // 0x2e958c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e958cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9590: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9598: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e959c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E959Cu;
    SET_GPR_U32(ctx, 31, 0x2E95A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E959Cu, 0x2E95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95A4u;
label_2e95a4:
    // 0x2e95a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e95a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95ac: 0x0  nop
    ctx->pc = 0x2e95acu;
    // NOP
    // 0x2e95b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95b4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e95b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e95b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e95b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e95bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e95bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e95c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E95C0u;
    SET_GPR_U32(ctx, 31, 0x2E95C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E95C0u, 0x2E95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95C8u;
label_2e95c8:
    // 0x2e95c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e95cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95d0: 0x0  nop
    ctx->pc = 0x2e95d0u;
    // NOP
    // 0x2e95d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95d8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e95d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e95dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e95dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e95e0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e95e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e95e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E95E4u;
    SET_GPR_U32(ctx, 31, 0x2E95ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E95E4u, 0x2E95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95ECu;
label_2e95ec:
    // 0x2e95ec: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e95f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e95f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e95f4: 0x0  nop
    ctx->pc = 0x2e95f4u;
    // NOP
    // 0x2e95f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e95f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e95fc: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9604: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9608: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e960c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e9610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9614: 0x0  nop
    ctx->pc = 0x2e9614u;
    // NOP
    // 0x2e9618: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e961c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9620: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9620u;
    SET_GPR_U32(ctx, 31, 0x2E9628u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9620u, 0x2E9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9628u;
label_2e9628:
    // 0x2e9628: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2e9628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2e962c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9630: 0x0  nop
    ctx->pc = 0x2e9630u;
    // NOP
    // 0x2e9634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9638: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e963c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9644: 0x0  nop
    ctx->pc = 0x2e9644u;
    // NOP
    // 0x2e9648: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e964c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9650: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9650u;
    SET_GPR_U32(ctx, 31, 0x2E9658u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9650u, 0x2E9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9658u;
label_2e9658:
    // 0x2e9658: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2e965c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9660: 0x0  nop
    ctx->pc = 0x2e9660u;
    // NOP
    // 0x2e9664: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9668: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e966c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9674: 0x0  nop
    ctx->pc = 0x2e9674u;
    // NOP
    // 0x2e9678: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e967c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9684: 0x0  nop
    ctx->pc = 0x2e9684u;
    // NOP
    // 0x2e9688: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e9688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e968c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9694: 0x0  nop
    ctx->pc = 0x2e9694u;
    // NOP
    // 0x2e9698: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e9698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e969c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e96a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e96a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e96a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96a8: 0x0  nop
    ctx->pc = 0x2e96a8u;
    // NOP
    // 0x2e96ac: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e96acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e96b0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e96b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e96b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96bc: 0x0  nop
    ctx->pc = 0x2e96bcu;
    // NOP
    // 0x2e96c0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e96c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e96c4: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2e96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e96c8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e96cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96d0: 0x0  nop
    ctx->pc = 0x2e96d0u;
    // NOP
    // 0x2e96d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e96d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e96d8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e96dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96e0: 0x0  nop
    ctx->pc = 0x2e96e0u;
    // NOP
    // 0x2e96e4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e96e8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2e96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2e96ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2e96ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2e96f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e96f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e96f4: 0x0  nop
    ctx->pc = 0x2e96f4u;
    // NOP
    // 0x2e96f8: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e96f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e96fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E96FCu;
    SET_GPR_U32(ctx, 31, 0x2E9704u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E96FCu, 0x2E9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9704u;
label_2e9704:
    // 0x2e9704: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9708: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e970c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e970cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9710: 0x0  nop
    ctx->pc = 0x2e9710u;
    // NOP
    // 0x2e9714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9718: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e971c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E971Cu;
    SET_GPR_U32(ctx, 31, 0x2E9724u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E971Cu, 0x2E9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9724u;
label_2e9724:
    // 0x2e9724: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9728: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e972c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e972cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9730: 0x0  nop
    ctx->pc = 0x2e9730u;
    // NOP
    // 0x2e9734: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9738: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e973c: 0x0  nop
    ctx->pc = 0x2e973cu;
    // NOP
label_2e9740:
    // 0x2e9740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9744: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e9744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9748: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2e9748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2e974c: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2e974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2e9750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9754: 0x0  nop
    ctx->pc = 0x2e9754u;
    // NOP
    // 0x2e9758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e975c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9760: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e9760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e9764: 0x0  nop
    ctx->pc = 0x2e9764u;
    // NOP
label_2e9768:
    // 0x2e9768: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2e9768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e976c: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2E976Cu;
    {
        const bool branch_taken_0x2e976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e976c) {
            ctx->pc = 0x2E93F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e93f4;
        }
    }
    ctx->pc = 0x2E9774u;
    // 0x2e9774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9778: 0x0  nop
    ctx->pc = 0x2e9778u;
    // NOP
    // 0x2e977c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9780: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9780u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9784: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2E9784u;
    {
        const bool branch_taken_0x2e9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9784) {
            ctx->pc = 0x2E9A98u;
            goto label_2e9a98;
        }
    }
    ctx->pc = 0x2E978Cu;
label_2e978c:
    // 0x2e978c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e9790: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e9794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9798: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e979c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e97a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e97a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e97a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e97a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e97ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e97acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e97b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e97b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e97b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e97b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e97b8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e97bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e97bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e97c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e97c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e97c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E97C4u;
    SET_GPR_U32(ctx, 31, 0x2E97CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E97C4u, 0x2E97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97CCu;
label_2e97cc:
    // 0x2e97cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97d0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e97d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e97d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97e0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e97e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e97e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e97e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97f0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e97f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e97f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97fc: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e97fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9804: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9808: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e980c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e980cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9810: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9814: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9818: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e981c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9820: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9824: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9828: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e982c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e982cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9830: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9834: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9838: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e983c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e983cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9844: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9848: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e984c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9850: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9854: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e9854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e985c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e985cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9860: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9860u;
    SET_GPR_U32(ctx, 31, 0x2E9868u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9860u, 0x2E9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9868u;
label_2e9868:
    // 0x2e9868: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e986c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e986cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9870: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9874: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e9874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9878: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e987c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9880: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9894u;
            goto label_2e9894;
        }
    }
    ctx->pc = 0x2E9888u;
    // 0x2e9888: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e9888u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e988c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E988Cu;
    {
        const bool branch_taken_0x2e988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e988c) {
            ctx->pc = 0x2E98B8u;
            goto label_2e98b8;
        }
    }
    ctx->pc = 0x2E9894u;
label_2e9894:
    // 0x2e9894: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9898: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e9898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e989c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e989cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e98a0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e98a4: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2e98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e98a8: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2e98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2e98ac: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e98acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e98b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2e98b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e98b4: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2e98b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e98b8:
    // 0x2e98b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e98bc: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e98c0: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2e98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2e98c4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e98c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e98cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e98d0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e98d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e98d4: 0x12030066  beq         $s0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E98D4u;
    {
        const bool branch_taken_0x2e98d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e98d4) {
            ctx->pc = 0x2E9A70u;
            goto label_2e9a70;
        }
    }
    ctx->pc = 0x2E98DCu;
    // 0x2e98dc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e98e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e98e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e98e4: 0x0  nop
    ctx->pc = 0x2e98e4u;
    // NOP
    // 0x2e98e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e98e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e98ec: 0x3c0241e9  lui         $v0, 0x41E9
    ctx->pc = 0x2e98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16873 << 16));
    // 0x2e98f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e98f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e98f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e98f8: 0x0  nop
    ctx->pc = 0x2e98f8u;
    // NOP
    // 0x2e98fc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9900: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e9900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e9904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9908: 0x0  nop
    ctx->pc = 0x2e9908u;
    // NOP
    // 0x2e990c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9910: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9918: 0x0  nop
    ctx->pc = 0x2e9918u;
    // NOP
    // 0x2e991c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9920: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e9924: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e9928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e992c: 0x0  nop
    ctx->pc = 0x2e992cu;
    // NOP
    // 0x2e9930: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9934: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9938: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9938u;
    SET_GPR_U32(ctx, 31, 0x2E9940u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9938u, 0x2E9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9940u;
label_2e9940:
    // 0x2e9940: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9948: 0x0  nop
    ctx->pc = 0x2e9948u;
    // NOP
    // 0x2e994c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e994cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9950: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9954: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e9958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e995c: 0x0  nop
    ctx->pc = 0x2e995cu;
    // NOP
    // 0x2e9960: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9964: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9968: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9968u;
    SET_GPR_U32(ctx, 31, 0x2E9970u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9968u, 0x2E9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9970u;
label_2e9970:
    // 0x2e9970: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9978: 0x0  nop
    ctx->pc = 0x2e9978u;
    // NOP
    // 0x2e997c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e997cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9980: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9984: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e998c: 0x0  nop
    ctx->pc = 0x2e998cu;
    // NOP
    // 0x2e9990: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9994: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e9998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e999c: 0x0  nop
    ctx->pc = 0x2e999cu;
    // NOP
    // 0x2e99a0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e99a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e99a4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e99a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99ac: 0x0  nop
    ctx->pc = 0x2e99acu;
    // NOP
    // 0x2e99b0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e99b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e99b4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e99b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e99b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e99bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99c0: 0x0  nop
    ctx->pc = 0x2e99c0u;
    // NOP
    // 0x2e99c4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e99c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e99c8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e99cc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e99ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e99d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99d4: 0x0  nop
    ctx->pc = 0x2e99d4u;
    // NOP
    // 0x2e99d8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e99d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e99dc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E99DCu;
    SET_GPR_U32(ctx, 31, 0x2E99E4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E99DCu, 0x2E99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99E4u;
label_2e99e4:
    // 0x2e99e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e99e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e99e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2E99E8u;
    SET_GPR_U32(ctx, 31, 0x2E99F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2E99E8u, 0x2E99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99F0u;
label_2e99f0:
    // 0x2e99f0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2e99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2e99f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e99f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e99f8: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e99fc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e9a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a04: 0x0  nop
    ctx->pc = 0x2e9a04u;
    // NOP
    // 0x2e9a08: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e9a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e9a0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a14: 0x0  nop
    ctx->pc = 0x2e9a14u;
    // NOP
    // 0x2e9a18: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9a1c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9a20: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2e9a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2e9a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a28: 0x0  nop
    ctx->pc = 0x2e9a28u;
    // NOP
    // 0x2e9a2c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9a30: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9A30u;
    SET_GPR_U32(ctx, 31, 0x2E9A38u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9A30u, 0x2E9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9a3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9a40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9a44: 0x0  nop
    ctx->pc = 0x2e9a44u;
    // NOP
    // 0x2e9a48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a4c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9a50: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9A50u;
    SET_GPR_U32(ctx, 31, 0x2E9A58u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9A50u, 0x2E9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A58u;
label_2e9a58:
    // 0x2e9a58: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9a5c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9a60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9a64: 0x0  nop
    ctx->pc = 0x2e9a64u;
    // NOP
    // 0x2e9a68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a6c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2e9a70:
    // 0x2e9a70: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2e9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9a74: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2e9a74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2e9a78: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9a7c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2e9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2e9a80: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2e9a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a88: 0x0  nop
    ctx->pc = 0x2e9a88u;
    // NOP
    // 0x2e9a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a90: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e9a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9a94: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e9a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2e9a98:
    // 0x2e9a98: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2e9a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e9a9c: 0x1460ff3b  bnez        $v1, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x2E9A9Cu;
    {
        const bool branch_taken_0x2e9a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a9c) {
            ctx->pc = 0x2E978Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e978c;
        }
    }
    ctx->pc = 0x2E9AA4u;
    // 0x2e9aa4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2e9aa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e9aa8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e9aa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e9aac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e9aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9ab0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e9ab0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9ab4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e9ab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9ab8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e9ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e9abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e9ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9acc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2e9accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e9ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9AD8u;
}
