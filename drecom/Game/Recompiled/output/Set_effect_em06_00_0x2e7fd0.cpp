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

// Function: Set_effect_em06_00
// Address: 0x2e7fd0 - 0x2e8bb8
void Set_effect_em06_00_0x2e7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em06_00_0x2e7fd0");
#endif

    switch (ctx->pc) {
        case 0x2e8054u: goto label_2e8054;
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8130u: goto label_2e8130;
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8224u: goto label_2e8224;
        case 0x2e8248u: goto label_2e8248;
        case 0x2e8284u: goto label_2e8284;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83d4u: goto label_2e83d4;
        case 0x2e843cu: goto label_2e843c;
        case 0x2e847cu: goto label_2e847c;
        case 0x2e8518u: goto label_2e8518;
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e8610u: goto label_2e8610;
        case 0x2e8634u: goto label_2e8634;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e8750u: goto label_2e8750;
        case 0x2e8770u: goto label_2e8770;
        case 0x2e87d4u: goto label_2e87d4;
        case 0x2e8814u: goto label_2e8814;
        case 0x2e88b0u: goto label_2e88b0;
        case 0x2e8970u: goto label_2e8970;
        case 0x2e8994u: goto label_2e8994;
        case 0x2e89b8u: goto label_2e89b8;
        case 0x2e89dcu: goto label_2e89dc;
        case 0x2e8a18u: goto label_2e8a18;
        case 0x2e8a48u: goto label_2e8a48;
        case 0x2e8abcu: goto label_2e8abc;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8b14u: goto label_2e8b14;
        case 0x2e8b34u: goto label_2e8b34;
        default: break;
    }

    ctx->pc = 0x2e7fd0u;

    // 0x2e7fd0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e7fd4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2e7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2e7fd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e7fdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e7fe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e7fe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e7fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e7fe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e7fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e7fec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7ffc: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2e7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2e8000: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x2e8000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x2e8004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8008: 0x0  nop
    ctx->pc = 0x2e8008u;
    // NOP
    // 0x2e800c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e8010: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x2e8014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8018: 0x0  nop
    ctx->pc = 0x2e8018u;
    // NOP
    // 0x2e801c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e8020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8024: 0x0  nop
    ctx->pc = 0x2e8024u;
    // NOP
    // 0x2e8028: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e8028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e802c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e802cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e8030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8034: 0x0  nop
    ctx->pc = 0x2e8034u;
    // NOP
    // 0x2e8038: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e8038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e803c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e803cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8040: 0x0  nop
    ctx->pc = 0x2e8040u;
    // NOP
    // 0x2e8044: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e8044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8048: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e8048u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e804c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2E804Cu;
    {
        const bool branch_taken_0x2e804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e804c) {
            ctx->pc = 0x2E8418u;
            goto label_2e8418;
        }
    }
    ctx->pc = 0x2E8054u;
label_2e8054:
    // 0x2e8054: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e8054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e8058: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e8058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e805c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e8060: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e8064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8068: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e8068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e806c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e8070: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e8070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e8074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e807c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e807cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8080: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8088: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e808c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E808Cu;
    SET_GPR_U32(ctx, 31, 0x2E8094u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E808Cu, 0x2E8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8094u;
label_2e8094:
    // 0x2e8094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8098: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e809c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e80a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80a4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80a8: 0xa062013a  sb          $v0, 0x13A($v1)
    ctx->pc = 0x2e80a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e80ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e80b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80b4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80b8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2e80b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e80bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80c0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80c4: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2e80c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e80cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80d0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80d4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2e80d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e80d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80e0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e80e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80ec: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e80ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e80f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8104: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e8104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e810c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8110: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e8110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8118: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e811c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e811cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8120: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8124: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8128: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E8128u;
    SET_GPR_U32(ctx, 31, 0x2E8130u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E8128u, 0x2E8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8130u;
label_2e8130:
    // 0x2e8130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8134: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e8134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e8138: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e813c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8140: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8144: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8148: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8148u;
    {
        const bool branch_taken_0x2e8148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8148) {
            ctx->pc = 0x2E815Cu;
            goto label_2e815c;
        }
    }
    ctx->pc = 0x2E8150u;
    // 0x2e8150: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e8150u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8154: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8154u;
    {
        const bool branch_taken_0x2e8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8154) {
            ctx->pc = 0x2E8178u;
            goto label_2e8178;
        }
    }
    ctx->pc = 0x2E815Cu;
label_2e815c:
    // 0x2e815c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8160: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8168: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e816c: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2e816cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e8170: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2e8170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e8174: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2e8174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e8178:
    // 0x2e8178: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e817c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2e8180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8184: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8188: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e818c: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2E818Cu;
    {
        const bool branch_taken_0x2e818c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e818c) {
            ctx->pc = 0x2E83F0u;
            goto label_2e83f0;
        }
    }
    ctx->pc = 0x2E8194u;
    // 0x2e8194: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e8194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e8198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e819c: 0x0  nop
    ctx->pc = 0x2e819cu;
    // NOP
    // 0x2e81a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e81a4: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x2e81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x2e81a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81ac: 0x0  nop
    ctx->pc = 0x2e81acu;
    // NOP
    // 0x2e81b0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e81b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e81b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e81b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81bc: 0x0  nop
    ctx->pc = 0x2e81bcu;
    // NOP
    // 0x2e81c0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e81c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e81c4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e81c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81cc: 0x0  nop
    ctx->pc = 0x2e81ccu;
    // NOP
    // 0x2e81d0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e81d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e81d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E81D4u;
    SET_GPR_U32(ctx, 31, 0x2E81DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E81D4u, 0x2E81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81DCu;
label_2e81dc:
    // 0x2e81dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e81e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e81e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e81e4: 0x0  nop
    ctx->pc = 0x2e81e4u;
    // NOP
    // 0x2e81e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e81e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e81ec: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e81f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e81f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e81f4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e81f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E81F8u;
    SET_GPR_U32(ctx, 31, 0x2E8200u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E81F8u, 0x2E8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8208: 0x0  nop
    ctx->pc = 0x2e8208u;
    // NOP
    // 0x2e820c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e820cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8210: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8218: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e821c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E821Cu;
    SET_GPR_U32(ctx, 31, 0x2E8224u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E821Cu, 0x2E8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8224u;
label_2e8224:
    // 0x2e8224: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e822c: 0x0  nop
    ctx->pc = 0x2e822cu;
    // NOP
    // 0x2e8230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8234: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e823c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8240: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8240u;
    SET_GPR_U32(ctx, 31, 0x2E8248u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8240u, 0x2E8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8248u;
label_2e8248:
    // 0x2e8248: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e824c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8250: 0x0  nop
    ctx->pc = 0x2e8250u;
    // NOP
    // 0x2e8254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8258: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e825c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e825cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8260: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8264: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2e8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2e8268: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2e8268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2e826c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8270: 0x0  nop
    ctx->pc = 0x2e8270u;
    // NOP
    // 0x2e8274: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8278: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e827c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E827Cu;
    SET_GPR_U32(ctx, 31, 0x2E8284u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E827Cu, 0x2E8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8284u;
label_2e8284:
    // 0x2e8284: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e8284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e8288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e828c: 0x0  nop
    ctx->pc = 0x2e828cu;
    // NOP
    // 0x2e8290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8294: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e829c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e829cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82a0: 0x0  nop
    ctx->pc = 0x2e82a0u;
    // NOP
    // 0x2e82a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e82a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e82a8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e82ac: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E82ACu;
    SET_GPR_U32(ctx, 31, 0x2E82B4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E82ACu, 0x2E82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82B4u;
label_2e82b4:
    // 0x2e82b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e82b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e82bc: 0x0  nop
    ctx->pc = 0x2e82bcu;
    // NOP
    // 0x2e82c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e82c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e82c4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e82c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82d0: 0x0  nop
    ctx->pc = 0x2e82d0u;
    // NOP
    // 0x2e82d4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e82d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e82dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82e0: 0x0  nop
    ctx->pc = 0x2e82e0u;
    // NOP
    // 0x2e82e4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e82e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e82e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e82ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82f0: 0x0  nop
    ctx->pc = 0x2e82f0u;
    // NOP
    // 0x2e82f4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e82f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e82f8: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e82fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e82fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8304: 0x0  nop
    ctx->pc = 0x2e8304u;
    // NOP
    // 0x2e8308: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e830c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8310: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8318: 0x0  nop
    ctx->pc = 0x2e8318u;
    // NOP
    // 0x2e831c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e8320: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8328: 0x0  nop
    ctx->pc = 0x2e8328u;
    // NOP
    // 0x2e832c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e832cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8330: 0x3c024081  lui         $v0, 0x4081
    ctx->pc = 0x2e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16513 << 16));
    // 0x2e8334: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e833c: 0x0  nop
    ctx->pc = 0x2e833cu;
    // NOP
    // 0x2e8340: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8344: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8348: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2e8348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2e834c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8350: 0x0  nop
    ctx->pc = 0x2e8350u;
    // NOP
    // 0x2e8354: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8358: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e835c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e8360: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e8360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e8364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e8364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e836c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e8370: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e8374: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e8378: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e837c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e8380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8388: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e8388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e838c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e8390: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e8390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8394: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e8398: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e8398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e839c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e83a0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e83a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e83a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e83a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e83a8: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e83a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e83ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E83ACu;
    SET_GPR_U32(ctx, 31, 0x2E83B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E83ACu, 0x2E83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83B4u;
label_2e83b4:
    // 0x2e83b4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e83b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e83bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e83c0: 0x0  nop
    ctx->pc = 0x2e83c0u;
    // NOP
    // 0x2e83c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e83c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e83c8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e83c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e83cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E83CCu;
    SET_GPR_U32(ctx, 31, 0x2E83D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E83CCu, 0x2E83D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83D4u;
label_2e83d4:
    // 0x2e83d4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e83d8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e83dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e83dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e83e0: 0x0  nop
    ctx->pc = 0x2e83e0u;
    // NOP
    // 0x2e83e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e83e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e83e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e83e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e83ec: 0x0  nop
    ctx->pc = 0x2e83ecu;
    // NOP
label_2e83f0:
    // 0x2e83f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e83f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e83f4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e83f8: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2e83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2e83fc: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2e83fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2e8400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8404: 0x0  nop
    ctx->pc = 0x2e8404u;
    // NOP
    // 0x2e8408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e8408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e840c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8410: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e8414: 0x0  nop
    ctx->pc = 0x2e8414u;
    // NOP
label_2e8418:
    // 0x2e8418: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x2e8418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e841c: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2E841Cu;
    {
        const bool branch_taken_0x2e841c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e841c) {
            ctx->pc = 0x2E8054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8054;
        }
    }
    ctx->pc = 0x2E8424u;
    // 0x2e8424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8428: 0x0  nop
    ctx->pc = 0x2e8428u;
    // NOP
    // 0x2e842c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e842cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8430: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e8430u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8434: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2E8434u;
    {
        const bool branch_taken_0x2e8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8434) {
            ctx->pc = 0x2E87B0u;
            goto label_2e87b0;
        }
    }
    ctx->pc = 0x2E843Cu;
label_2e843c:
    // 0x2e843c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e8440: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e8444: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e8444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e8448: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e844c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8450: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e8450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e8454: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e8454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e8458: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e845c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e8460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e8464: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e8464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8468: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e846c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e846cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8470: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e8474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E8474u;
    SET_GPR_U32(ctx, 31, 0x2E847Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E8474u, 0x2E847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E847Cu;
label_2e847c:
    // 0x2e847c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e847cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8480: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e8484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8488: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e848c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e848cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8490: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e8490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e8494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8498: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e849c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84a0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e84a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e84a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84ac: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e84acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e84b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84bc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e84bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e84c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84c8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e84c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84d4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e84d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84e0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e84e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84ec: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84f8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e84f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8504: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e8504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e850c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E8510u;
    SET_GPR_U32(ctx, 31, 0x2E8518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E8510u, 0x2E8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8518u;
label_2e8518:
    // 0x2e8518: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e851c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e851cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e8520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8524: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e8524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8528: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e852c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8530: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8530u;
    {
        const bool branch_taken_0x2e8530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8530) {
            ctx->pc = 0x2E8544u;
            goto label_2e8544;
        }
    }
    ctx->pc = 0x2E8538u;
    // 0x2e8538: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e8538u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e853c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E853Cu;
    {
        const bool branch_taken_0x2e853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e853c) {
            ctx->pc = 0x2E8560u;
            goto label_2e8560;
        }
    }
    ctx->pc = 0x2E8544u;
label_2e8544:
    // 0x2e8544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8548: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8548u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e854c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8550: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8554: 0x24770118  addiu       $s7, $v1, 0x118
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e8558: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x2e8558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e855c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2e855cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e8560:
    // 0x2e8560: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e8564: 0x247ea610  addiu       $fp, $v1, -0x59F0
    ctx->pc = 0x2e8564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8568: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x2e8568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e856c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8570: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8574: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2E8574u;
    {
        const bool branch_taken_0x2e8574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8574) {
            ctx->pc = 0x2E8788u;
            goto label_2e8788;
        }
    }
    ctx->pc = 0x2E857Cu;
    // 0x2e857c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2e857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2e8580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8584: 0x0  nop
    ctx->pc = 0x2e8584u;
    // NOP
    // 0x2e8588: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e858c: 0x3c0241f9  lui         $v0, 0x41F9
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16889 << 16));
    // 0x2e8590: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8598: 0x0  nop
    ctx->pc = 0x2e8598u;
    // NOP
    // 0x2e859c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e85a0: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2e85a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e85a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e85a8: 0x0  nop
    ctx->pc = 0x2e85a8u;
    // NOP
    // 0x2e85ac: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e85acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e85b0: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2e85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2e85b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e85b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e85b8: 0x0  nop
    ctx->pc = 0x2e85b8u;
    // NOP
    // 0x2e85bc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e85bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e85c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E85C0u;
    SET_GPR_U32(ctx, 31, 0x2E85C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E85C0u, 0x2E85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85C8u;
label_2e85c8:
    // 0x2e85c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e85cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e85ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e85d0: 0x0  nop
    ctx->pc = 0x2e85d0u;
    // NOP
    // 0x2e85d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e85d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e85d8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e85dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e85dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e85e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e85e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e85e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E85E4u;
    SET_GPR_U32(ctx, 31, 0x2E85ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E85E4u, 0x2E85ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85ECu;
label_2e85ec:
    // 0x2e85ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e85f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e85f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e85f4: 0x0  nop
    ctx->pc = 0x2e85f4u;
    // NOP
    // 0x2e85f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e85f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e85fc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8604: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8608: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8608u;
    SET_GPR_U32(ctx, 31, 0x2E8610u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8608u, 0x2E8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8610u;
label_2e8610:
    // 0x2e8610: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8618: 0x0  nop
    ctx->pc = 0x2e8618u;
    // NOP
    // 0x2e861c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e861cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8620: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8628: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e862c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E862Cu;
    SET_GPR_U32(ctx, 31, 0x2E8634u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E862Cu, 0x2E8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8634u;
label_2e8634:
    // 0x2e8634: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e8634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e8638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e863c: 0x0  nop
    ctx->pc = 0x2e863cu;
    // NOP
    // 0x2e8640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8644: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e864c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8650: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e8654: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e865c: 0x0  nop
    ctx->pc = 0x2e865cu;
    // NOP
    // 0x2e8660: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8664: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8668: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E8668u;
    SET_GPR_U32(ctx, 31, 0x2E8670u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E8668u, 0x2E8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8670u;
label_2e8670:
    // 0x2e8670: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2e8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2e8674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8678: 0x0  nop
    ctx->pc = 0x2e8678u;
    // NOP
    // 0x2e867c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e867cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8680: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8684: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e8688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e868c: 0x0  nop
    ctx->pc = 0x2e868cu;
    // NOP
    // 0x2e8690: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e8690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e8694: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8698: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E8698u;
    SET_GPR_U32(ctx, 31, 0x2E86A0u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E8698u, 0x2E86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86A0u;
label_2e86a0:
    // 0x2e86a0: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2e86a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e86a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e86a8: 0x0  nop
    ctx->pc = 0x2e86a8u;
    // NOP
    // 0x2e86ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e86acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e86b0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e86b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e86b4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e86b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86bc: 0x0  nop
    ctx->pc = 0x2e86bcu;
    // NOP
    // 0x2e86c0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e86c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e86c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e86c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86cc: 0x0  nop
    ctx->pc = 0x2e86ccu;
    // NOP
    // 0x2e86d0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e86d4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e86d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86dc: 0x0  nop
    ctx->pc = 0x2e86dcu;
    // NOP
    // 0x2e86e0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e86e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e86e4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e86e8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e86ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86f0: 0x0  nop
    ctx->pc = 0x2e86f0u;
    // NOP
    // 0x2e86f4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e86f8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e86fc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e86fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e8700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8704: 0x0  nop
    ctx->pc = 0x2e8704u;
    // NOP
    // 0x2e8708: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e8708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e870c: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2e870cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8710: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e8710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e8714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8718: 0x0  nop
    ctx->pc = 0x2e8718u;
    // NOP
    // 0x2e871c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8720: 0x3c024092  lui         $v0, 0x4092
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16530 << 16));
    // 0x2e8724: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2e8724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2e8728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e872c: 0x0  nop
    ctx->pc = 0x2e872cu;
    // NOP
    // 0x2e8730: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8734: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8738: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2e8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2e873c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8740: 0x0  nop
    ctx->pc = 0x2e8740u;
    // NOP
    // 0x2e8744: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8748: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8748u;
    SET_GPR_U32(ctx, 31, 0x2E8750u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8748u, 0x2E8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8750u;
label_2e8750:
    // 0x2e8750: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8754: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e875c: 0x0  nop
    ctx->pc = 0x2e875cu;
    // NOP
    // 0x2e8760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8764: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e8764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e8768: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8768u;
    SET_GPR_U32(ctx, 31, 0x2E8770u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8768u, 0x2E8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8770u;
label_2e8770:
    // 0x2e8770: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e8774: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e8774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e8778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e8778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e877c: 0x0  nop
    ctx->pc = 0x2e877cu;
    // NOP
    // 0x2e8780: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8784: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2e8788:
    // 0x2e8788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e878c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8790: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2e8790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2e8794: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2e8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2e8798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e879c: 0x0  nop
    ctx->pc = 0x2e879cu;
    // NOP
    // 0x2e87a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e87a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e87a4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e87a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e87a8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e87ac: 0x0  nop
    ctx->pc = 0x2e87acu;
    // NOP
label_2e87b0:
    // 0x2e87b0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x2e87b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e87b4: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2E87B4u;
    {
        const bool branch_taken_0x2e87b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e87b4) {
            ctx->pc = 0x2E843Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e843c;
        }
    }
    ctx->pc = 0x2E87BCu;
    // 0x2e87bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e87bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e87c0: 0x0  nop
    ctx->pc = 0x2e87c0u;
    // NOP
    // 0x2e87c4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e87c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e87c8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e87c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e87cc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2E87CCu;
    {
        const bool branch_taken_0x2e87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87cc) {
            ctx->pc = 0x2E8B78u;
            goto label_2e8b78;
        }
    }
    ctx->pc = 0x2E87D4u;
label_2e87d4:
    // 0x2e87d4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e87d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e87dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e87e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e87e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e87e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e87e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e87ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e87ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e87f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e87f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e87f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e87fc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e87fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8800: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e8804: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e8804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8808: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e880c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E880Cu;
    SET_GPR_U32(ctx, 31, 0x2E8814u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E880Cu, 0x2E8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8814u;
label_2e8814:
    // 0x2e8814: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8818: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e881c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8820: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8824: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8828: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e8828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e882c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8834: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8838: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e8838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e883c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8840: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8844: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e8844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e884c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8850: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8854: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e8854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e885c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e885cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8860: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e8860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8868: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e886c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e886cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8870: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8874: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8878: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e8878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e887c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8880: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8884: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e8884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8888: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e888c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8890: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e8890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8894: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8898: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e889c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e889cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e88a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88a4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e88a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E88A8u;
    SET_GPR_U32(ctx, 31, 0x2E88B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E88A8u, 0x2E88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88B0u;
label_2e88b0:
    // 0x2e88b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88b4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e88b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e88b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88bc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e88c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e88c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e88c8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E88C8u;
    {
        const bool branch_taken_0x2e88c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e88c8) {
            ctx->pc = 0x2E88DCu;
            goto label_2e88dc;
        }
    }
    ctx->pc = 0x2E88D0u;
    // 0x2e88d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e88d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e88d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E88D4u;
    {
        const bool branch_taken_0x2e88d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88d4) {
            ctx->pc = 0x2E8900u;
            goto label_2e8900;
        }
    }
    ctx->pc = 0x2E88DCu;
label_2e88dc:
    // 0x2e88dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88e0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88e8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88ec: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2e88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e88f0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2e88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2e88f4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e88f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2e88f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e88fc: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2e88fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e8900:
    // 0x2e8900: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e8904: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2e8904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8908: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2e8908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2e890c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e8910: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e8910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8914: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8918: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e891c: 0x1203008c  beq         $s0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2E891Cu;
    {
        const bool branch_taken_0x2e891c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e891c) {
            ctx->pc = 0x2E8B50u;
            goto label_2e8b50;
        }
    }
    ctx->pc = 0x2E8924u;
    // 0x2e8924: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e8924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e8928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e892c: 0x0  nop
    ctx->pc = 0x2e892cu;
    // NOP
    // 0x2e8930: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e8934: 0x3c0241e9  lui         $v0, 0x41E9
    ctx->pc = 0x2e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16873 << 16));
    // 0x2e8938: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e893c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e893cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8940: 0x0  nop
    ctx->pc = 0x2e8940u;
    // NOP
    // 0x2e8944: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8948: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e894c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e894cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8950: 0x0  nop
    ctx->pc = 0x2e8950u;
    // NOP
    // 0x2e8954: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8958: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e8958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e895c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e895cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8960: 0x0  nop
    ctx->pc = 0x2e8960u;
    // NOP
    // 0x2e8964: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8968: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8968u;
    SET_GPR_U32(ctx, 31, 0x2E8970u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8968u, 0x2E8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8970u;
label_2e8970:
    // 0x2e8970: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8978: 0x0  nop
    ctx->pc = 0x2e8978u;
    // NOP
    // 0x2e897c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e897cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8980: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8988: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e898c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E898Cu;
    SET_GPR_U32(ctx, 31, 0x2E8994u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E898Cu, 0x2E8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8994u;
label_2e8994:
    // 0x2e8994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e899c: 0x0  nop
    ctx->pc = 0x2e899cu;
    // NOP
    // 0x2e89a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89a4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89ac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e89b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E89B0u;
    SET_GPR_U32(ctx, 31, 0x2E89B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E89B0u, 0x2E89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89B8u;
label_2e89b8:
    // 0x2e89b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e89bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e89bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e89c0: 0x0  nop
    ctx->pc = 0x2e89c0u;
    // NOP
    // 0x2e89c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89c8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e89d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e89d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E89D4u;
    SET_GPR_U32(ctx, 31, 0x2E89DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E89D4u, 0x2E89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89DCu;
label_2e89dc:
    // 0x2e89dc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e89e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e89e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e89e4: 0x0  nop
    ctx->pc = 0x2e89e4u;
    // NOP
    // 0x2e89e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e89e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e89ec: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e89ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e89f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e89f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e89f4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e89f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e89f8: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e89fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e89fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a04: 0x0  nop
    ctx->pc = 0x2e8a04u;
    // NOP
    // 0x2e8a08: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8a0c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8a10: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E8A10u;
    SET_GPR_U32(ctx, 31, 0x2E8A18u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E8A10u, 0x2E8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A18u;
label_2e8a18:
    // 0x2e8a18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8a20: 0x0  nop
    ctx->pc = 0x2e8a20u;
    // NOP
    // 0x2e8a24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8a28: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8a2c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a34: 0x0  nop
    ctx->pc = 0x2e8a34u;
    // NOP
    // 0x2e8a38: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e8a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e8a3c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8a40: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E8A40u;
    SET_GPR_U32(ctx, 31, 0x2E8A48u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E8A40u, 0x2E8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A48u;
label_2e8a48:
    // 0x2e8a48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e8a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8a50: 0x0  nop
    ctx->pc = 0x2e8a50u;
    // NOP
    // 0x2e8a54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8a58: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e8a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e8a5c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a64: 0x0  nop
    ctx->pc = 0x2e8a64u;
    // NOP
    // 0x2e8a68: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e8a6c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e8a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a74: 0x0  nop
    ctx->pc = 0x2e8a74u;
    // NOP
    // 0x2e8a78: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e8a7c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a84: 0x0  nop
    ctx->pc = 0x2e8a84u;
    // NOP
    // 0x2e8a88: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e8a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e8a8c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8a90: 0x3444c28f  ori         $a0, $v0, 0xC28F
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8a94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e8a94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8a98: 0x0  nop
    ctx->pc = 0x2e8a98u;
    // NOP
    // 0x2e8a9c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e8aa0: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8aa4: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x2e8aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8aac: 0x0  nop
    ctx->pc = 0x2e8aacu;
    // NOP
    // 0x2e8ab0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e8ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e8ab4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8AB4u;
    SET_GPR_U32(ctx, 31, 0x2E8ABCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8AB4u, 0x2E8ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8ABCu;
label_2e8abc:
    // 0x2e8abc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e8abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e8ac0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2E8AC0u;
    SET_GPR_U32(ctx, 31, 0x2E8AC8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2E8AC0u, 0x2E8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2e8acc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e8accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8ad0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e8ad4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2e8ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8adc: 0x0  nop
    ctx->pc = 0x2e8adcu;
    // NOP
    // 0x2e8ae0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e8ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8ae4: 0x3c074081  lui         $a3, 0x4081
    ctx->pc = 0x2e8ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16513 << 16));
    // 0x2e8ae8: 0x34e2c6a8  ori         $v0, $a3, 0xC6A8
    ctx->pc = 0x2e8ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)50856);
    // 0x2e8aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8af0: 0x0  nop
    ctx->pc = 0x2e8af0u;
    // NOP
    // 0x2e8af4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8af8: 0x3c063f77  lui         $a2, 0x3F77
    ctx->pc = 0x2e8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8afc: 0x34c40a3d  ori         $a0, $a2, 0xA3D
    ctx->pc = 0x2e8afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2621);
    // 0x2e8b00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e8b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8b04: 0x0  nop
    ctx->pc = 0x2e8b04u;
    // NOP
    // 0x2e8b08: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8B0Cu, 0x2E8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B14u;
label_2e8b14:
    // 0x2e8b14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8b18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8b1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8b20: 0x0  nop
    ctx->pc = 0x2e8b20u;
    // NOP
    // 0x2e8b24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b28: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e8b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e8b2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8B2Cu, 0x2E8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B34u;
label_2e8b34:
    // 0x2e8b34: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2e8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2e8b38: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2e8b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2e8b3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e8b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8b40: 0x0  nop
    ctx->pc = 0x2e8b40u;
    // NOP
    // 0x2e8b44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b48: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e8b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e8b4c: 0x0  nop
    ctx->pc = 0x2e8b4cu;
    // NOP
label_2e8b50:
    // 0x2e8b50: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e8b54: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2e8b54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2e8b58: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e8b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8b5c: 0x3c043fa0  lui         $a0, 0x3FA0
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16288 << 16));
    // 0x2e8b60: 0x3483d845  ori         $v1, $a0, 0xD845
    ctx->pc = 0x2e8b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55365);
    // 0x2e8b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8b68: 0x0  nop
    ctx->pc = 0x2e8b68u;
    // NOP
    // 0x2e8b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b70: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e8b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8b74: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2e8b78:
    // 0x2e8b78: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x2e8b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e8b7c: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x2E8B7Cu;
    {
        const bool branch_taken_0x2e8b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b7c) {
            ctx->pc = 0x2E87D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e87d4;
        }
    }
    ctx->pc = 0x2E8B84u;
    // 0x2e8b84: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2e8b84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e8b88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e8b88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8b8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e8b8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8b90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e8b90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8b94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e8b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8b98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e8b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8b9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8bac: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2e8bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e8bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8BB8u;
}
