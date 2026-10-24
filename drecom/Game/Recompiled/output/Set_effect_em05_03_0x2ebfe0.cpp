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

// Function: Set_effect_em05_03
// Address: 0x2ebfe0 - 0x2ecfa0
void Set_effect_em05_03_0x2ebfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_03_0x2ebfe0");
#endif

    switch (ctx->pc) {
        case 0x2ec064u: goto label_2ec064;
        case 0x2ec0a4u: goto label_2ec0a4;
        case 0x2ec140u: goto label_2ec140;
        case 0x2ec210u: goto label_2ec210;
        case 0x2ec240u: goto label_2ec240;
        case 0x2ec33cu: goto label_2ec33c;
        case 0x2ec35cu: goto label_2ec35c;
        case 0x2ec3c4u: goto label_2ec3c4;
        case 0x2ec404u: goto label_2ec404;
        case 0x2ec4a0u: goto label_2ec4a0;
        case 0x2ec55cu: goto label_2ec55c;
        case 0x2ec580u: goto label_2ec580;
        case 0x2ec5a4u: goto label_2ec5a4;
        case 0x2ec5c8u: goto label_2ec5c8;
        case 0x2ec604u: goto label_2ec604;
        case 0x2ec634u: goto label_2ec634;
        case 0x2ec6e0u: goto label_2ec6e0;
        case 0x2ec700u: goto label_2ec700;
        case 0x2ec764u: goto label_2ec764;
        case 0x2ec7a4u: goto label_2ec7a4;
        case 0x2ec840u: goto label_2ec840;
        case 0x2ec918u: goto label_2ec918;
        case 0x2ec948u: goto label_2ec948;
        case 0x2ec9bcu: goto label_2ec9bc;
        case 0x2ec9c8u: goto label_2ec9c8;
        case 0x2eca10u: goto label_2eca10;
        case 0x2eca30u: goto label_2eca30;
        case 0x2eca94u: goto label_2eca94;
        case 0x2ecb40u: goto label_2ecb40;
        case 0x2ecb78u: goto label_2ecb78;
        case 0x2ecc04u: goto label_2ecc04;
        case 0x2ecc9cu: goto label_2ecc9c;
        case 0x2ecdb8u: goto label_2ecdb8;
        case 0x2ecddcu: goto label_2ecddc;
        case 0x2ece00u: goto label_2ece00;
        case 0x2ece28u: goto label_2ece28;
        case 0x2ece58u: goto label_2ece58;
        case 0x2ecf00u: goto label_2ecf00;
        case 0x2ecf20u: goto label_2ecf20;
        default: break;
    }

    ctx->pc = 0x2ebfe0u;

    // 0x2ebfe0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ebfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2ebfe4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2ebfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2ebfe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ebfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ebfec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ebfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ebff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ebff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ebff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ebff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ebff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ebff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ebffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ebffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ec000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ec000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ec004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ec004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ec008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec00c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2ec00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2ec010: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x2ec010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x2ec014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec018: 0x0  nop
    ctx->pc = 0x2ec018u;
    // NOP
    // 0x2ec01c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ec01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ec020: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x2ec020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x2ec024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec028: 0x0  nop
    ctx->pc = 0x2ec028u;
    // NOP
    // 0x2ec02c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2ec02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ec030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec034: 0x0  nop
    ctx->pc = 0x2ec034u;
    // NOP
    // 0x2ec038: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ec038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ec03c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ec03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec044: 0x0  nop
    ctx->pc = 0x2ec044u;
    // NOP
    // 0x2ec048: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2ec048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ec04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec050: 0x0  nop
    ctx->pc = 0x2ec050u;
    // NOP
    // 0x2ec054: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec058: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ec058u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec05c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2EC05Cu;
    {
        const bool branch_taken_0x2ec05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec05c) {
            ctx->pc = 0x2EC3A0u;
            goto label_2ec3a0;
        }
    }
    ctx->pc = 0x2EC064u;
label_2ec064:
    // 0x2ec064: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ec064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec068: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ec068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec06c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ec070: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ec074: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ec074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec078: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ec078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ec07c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ec07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ec080: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ec080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec084: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ec084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ec088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ec088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ec08c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2ec08cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ec090: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec098: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec09c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC09Cu;
    SET_GPR_U32(ctx, 31, 0x2EC0A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC09Cu, 0x2EC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0A4u;
label_2ec0a4:
    // 0x2ec0a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec0ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec0b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec0bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ec0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec0c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0c8: 0xa044011d  sb          $a0, 0x11D($v0)
    ctx->pc = 0x2ec0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ec0cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec0dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec0e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec0f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec108: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec10c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec114: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec118: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec11c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec11cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec120: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec128: 0x8c33a618  lw          $s3, -0x59E8($at)
    ctx->pc = 0x2ec128u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec12c: 0xa260013f  sb          $zero, 0x13F($s3)
    ctx->pc = 0x2ec12cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec134: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC138u;
    SET_GPR_U32(ctx, 31, 0x2EC140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC138u, 0x2EC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC140u;
label_2ec140:
    // 0x2ec140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec144: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec14c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec150: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec154: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec158: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC158u;
    {
        const bool branch_taken_0x2ec158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec158) {
            ctx->pc = 0x2EC16Cu;
            goto label_2ec16c;
        }
    }
    ctx->pc = 0x2EC160u;
    // 0x2ec160: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ec160u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC164u;
    {
        const bool branch_taken_0x2ec164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec164) {
            ctx->pc = 0x2EC188u;
            goto label_2ec188;
        }
    }
    ctx->pc = 0x2EC16Cu;
label_2ec16c:
    // 0x2ec16c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec170: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec174: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec178: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec17c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2ec17cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec180: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2ec180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ec184: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2ec184u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ec188:
    // 0x2ec188: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec18c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec190: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2ec190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2ec194: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ec198: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec19c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec1a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec1a4: 0x12030074  beq         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x2EC1A4u;
    {
        const bool branch_taken_0x2ec1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec1a4) {
            ctx->pc = 0x2EC378u;
            goto label_2ec378;
        }
    }
    ctx->pc = 0x2EC1ACu;
    // 0x2ec1ac: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1b4: 0x0  nop
    ctx->pc = 0x2ec1b4u;
    // NOP
    // 0x2ec1b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec1bc: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ec1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ec1c0: 0x34523333  ori         $s2, $v0, 0x3333
    ctx->pc = 0x2ec1c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ec1c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2ec1c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1c8: 0x0  nop
    ctx->pc = 0x2ec1c8u;
    // NOP
    // 0x2ec1cc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec1d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1d8: 0x0  nop
    ctx->pc = 0x2ec1d8u;
    // NOP
    // 0x2ec1dc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec1e0: 0x3c124300  lui         $s2, 0x4300
    ctx->pc = 0x2ec1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec1e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2ec1e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1e8: 0x0  nop
    ctx->pc = 0x2ec1e8u;
    // NOP
    // 0x2ec1ec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec1f0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec1f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1fc: 0x0  nop
    ctx->pc = 0x2ec1fcu;
    // NOP
    // 0x2ec200: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec204: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec208: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC208u;
    SET_GPR_U32(ctx, 31, 0x2EC210u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC208u, 0x2EC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC210u;
label_2ec210:
    // 0x2ec210: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ec210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ec214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec218: 0x0  nop
    ctx->pc = 0x2ec218u;
    // NOP
    // 0x2ec21c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec220: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec224: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec22c: 0x0  nop
    ctx->pc = 0x2ec22cu;
    // NOP
    // 0x2ec230: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec234: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec238: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC238u;
    SET_GPR_U32(ctx, 31, 0x2EC240u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC238u, 0x2EC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC240u;
label_2ec240:
    // 0x2ec240: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ec244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec248: 0x0  nop
    ctx->pc = 0x2ec248u;
    // NOP
    // 0x2ec24c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec250: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec254: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2ec254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec25c: 0x0  nop
    ctx->pc = 0x2ec25cu;
    // NOP
    // 0x2ec260: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec264: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2ec264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec268: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ec268u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec26c: 0x0  nop
    ctx->pc = 0x2ec26cu;
    // NOP
    // 0x2ec270: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec274: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec27c: 0x0  nop
    ctx->pc = 0x2ec27cu;
    // NOP
    // 0x2ec280: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec284: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec288: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x2ec288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec290: 0x0  nop
    ctx->pc = 0x2ec290u;
    // NOP
    // 0x2ec294: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec298: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ec298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec29c: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x2ec29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ec2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2a4: 0x0  nop
    ctx->pc = 0x2ec2a4u;
    // NOP
    // 0x2ec2a8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec2ac: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ec2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2b4: 0x0  nop
    ctx->pc = 0x2ec2b4u;
    // NOP
    // 0x2ec2b8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec2bc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2ec2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2c4: 0x0  nop
    ctx->pc = 0x2ec2c4u;
    // NOP
    // 0x2ec2c8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec2cc: 0x3c073f66  lui         $a3, 0x3F66
    ctx->pc = 0x2ec2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec2d0: 0x34e26666  ori         $v0, $a3, 0x6666
    ctx->pc = 0x2ec2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26214);
    // 0x2ec2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2d8: 0x0  nop
    ctx->pc = 0x2ec2d8u;
    // NOP
    // 0x2ec2dc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ec2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ec2e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec2e4: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2ec2e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x2ec2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ec2ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ec2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec2f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ec2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec2f8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ec2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ec2fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ec304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ec304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ec308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ec310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ec314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ec314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ec318: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec31c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ec320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ec324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec328: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x2ec328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ec32c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2ec32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ec330: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ec330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec334: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC334u;
    SET_GPR_U32(ctx, 31, 0x2EC33Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC334u, 0x2EC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC33Cu;
label_2ec33c:
    // 0x2ec33c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2ec33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2ec340: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2ec340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ec344: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ec344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec348: 0x0  nop
    ctx->pc = 0x2ec348u;
    // NOP
    // 0x2ec34c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec350: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ec350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ec354: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC354u;
    SET_GPR_U32(ctx, 31, 0x2EC35Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC354u, 0x2EC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC35Cu;
label_2ec35c:
    // 0x2ec35c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ec35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ec360: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ec360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ec364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec368: 0x0  nop
    ctx->pc = 0x2ec368u;
    // NOP
    // 0x2ec36c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec370: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ec370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ec374: 0x0  nop
    ctx->pc = 0x2ec374u;
    // NOP
label_2ec378:
    // 0x2ec378: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ec378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ec37c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2ec37cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ec380: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ec380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec384: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2ec384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2ec388: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2ec388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2ec38c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec38cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec390: 0x0  nop
    ctx->pc = 0x2ec390u;
    // NOP
    // 0x2ec394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ec394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec39c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ec39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2ec3a0:
    // 0x2ec3a0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2ec3a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ec3a4: 0x1460ff2f  bnez        $v1, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x2EC3A4u;
    {
        const bool branch_taken_0x2ec3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3a4) {
            ctx->pc = 0x2EC064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec064;
        }
    }
    ctx->pc = 0x2EC3ACu;
    // 0x2ec3ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec3b0: 0x0  nop
    ctx->pc = 0x2ec3b0u;
    // NOP
    // 0x2ec3b4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec3b8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ec3b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec3bc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2EC3BCu;
    {
        const bool branch_taken_0x2ec3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3bc) {
            ctx->pc = 0x2EC740u;
            goto label_2ec740;
        }
    }
    ctx->pc = 0x2EC3C4u;
label_2ec3c4:
    // 0x2ec3c4: 0x8fb700f0  lw          $s7, 0xF0($sp)
    ctx->pc = 0x2ec3c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec3c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2ec3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec3cc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ec3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ec3d0: 0x8ee30130  lw          $v1, 0x130($s7)
    ctx->pc = 0x2ec3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 304)));
    // 0x2ec3d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ec3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec3d8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x2ec3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ec3dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ec3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ec3e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ec3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec3e4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2ec3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2ec3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ec3ec: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ec3ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec3f0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec3f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec3f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec3fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC3FCu;
    SET_GPR_U32(ctx, 31, 0x2EC404u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC3FCu, 0x2EC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC404u;
label_2ec404:
    // 0x2ec404: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec408: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec40c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec410: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec414: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec418: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec41c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ec41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec420: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec424: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec424u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec428: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ec428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec42c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec430: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec434: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec43c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec440: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec440u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec444: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec448: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec44c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec44cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec450: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec454: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec458: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec45c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec45cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec460: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec464: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec468: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec46c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec470: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec474: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec478: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec47c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec480: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec488: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec48c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ec48cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec490: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec494: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec494u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec498: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC498u;
    SET_GPR_U32(ctx, 31, 0x2EC4A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC498u, 0x2EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4A0u;
label_2ec4a0:
    // 0x2ec4a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4a4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec4a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec4a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4ac: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec4b4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec4b8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC4B8u;
    {
        const bool branch_taken_0x2ec4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec4b8) {
            ctx->pc = 0x2EC4CCu;
            goto label_2ec4cc;
        }
    }
    ctx->pc = 0x2EC4C0u;
    // 0x2ec4c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ec4c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec4c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC4C4u;
    {
        const bool branch_taken_0x2ec4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4c4) {
            ctx->pc = 0x2EC4F0u;
            goto label_2ec4f0;
        }
    }
    ctx->pc = 0x2EC4CCu;
label_2ec4cc:
    // 0x2ec4cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4d0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4d8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4dc: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec4e0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2ec4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2ec4e4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2ec4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2ec4e8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ec4e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec4ec: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2ec4ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ec4f0:
    // 0x2ec4f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4f4: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec4f8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2ec4fc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ec500: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec504: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec508: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec50c: 0x12030082  beq         $s0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2EC50Cu;
    {
        const bool branch_taken_0x2ec50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec50c) {
            ctx->pc = 0x2EC718u;
            goto label_2ec718;
        }
    }
    ctx->pc = 0x2EC514u;
    // 0x2ec514: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x2ec514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x2ec518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec51c: 0x0  nop
    ctx->pc = 0x2ec51cu;
    // NOP
    // 0x2ec520: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec524: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2ec524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2ec528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec52c: 0x0  nop
    ctx->pc = 0x2ec52cu;
    // NOP
    // 0x2ec530: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec534: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ec538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec53c: 0x0  nop
    ctx->pc = 0x2ec53cu;
    // NOP
    // 0x2ec540: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec544: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ec544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec54c: 0x0  nop
    ctx->pc = 0x2ec54cu;
    // NOP
    // 0x2ec550: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec554: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC554u;
    SET_GPR_U32(ctx, 31, 0x2EC55Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC554u, 0x2EC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC55Cu;
label_2ec55c:
    // 0x2ec55c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec564: 0x0  nop
    ctx->pc = 0x2ec564u;
    // NOP
    // 0x2ec568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec56c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec574: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec578: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC578u;
    SET_GPR_U32(ctx, 31, 0x2EC580u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC578u, 0x2EC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC580u;
label_2ec580:
    // 0x2ec580: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec588: 0x0  nop
    ctx->pc = 0x2ec588u;
    // NOP
    // 0x2ec58c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec590: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec594: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec598: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec59c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC59Cu;
    SET_GPR_U32(ctx, 31, 0x2EC5A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC59Cu, 0x2EC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5A4u;
label_2ec5a4:
    // 0x2ec5a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec5ac: 0x0  nop
    ctx->pc = 0x2ec5acu;
    // NOP
    // 0x2ec5b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5b4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec5bc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec5c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC5C0u;
    SET_GPR_U32(ctx, 31, 0x2EC5C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC5C0u, 0x2EC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5C8u;
label_2ec5c8:
    // 0x2ec5c8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec5d0: 0x0  nop
    ctx->pc = 0x2ec5d0u;
    // NOP
    // 0x2ec5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5d8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec5e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec5e4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec5e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec5f0: 0x0  nop
    ctx->pc = 0x2ec5f0u;
    // NOP
    // 0x2ec5f4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec5f8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec5fc: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC5FCu;
    SET_GPR_U32(ctx, 31, 0x2EC604u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC5FCu, 0x2EC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC604u;
label_2ec604:
    // 0x2ec604: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ec608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec60c: 0x0  nop
    ctx->pc = 0x2ec60cu;
    // NOP
    // 0x2ec610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec614: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec618: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ec61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec620: 0x0  nop
    ctx->pc = 0x2ec620u;
    // NOP
    // 0x2ec624: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec628: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec62c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC62Cu;
    SET_GPR_U32(ctx, 31, 0x2EC634u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC62Cu, 0x2EC634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC634u;
label_2ec634:
    // 0x2ec634: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ec634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ec638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec63c: 0x0  nop
    ctx->pc = 0x2ec63cu;
    // NOP
    // 0x2ec640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec644: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec648: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec650: 0x0  nop
    ctx->pc = 0x2ec650u;
    // NOP
    // 0x2ec654: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec660: 0x0  nop
    ctx->pc = 0x2ec660u;
    // NOP
    // 0x2ec664: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec668: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec670: 0x0  nop
    ctx->pc = 0x2ec670u;
    // NOP
    // 0x2ec674: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec678: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec67c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec684: 0x0  nop
    ctx->pc = 0x2ec684u;
    // NOP
    // 0x2ec688: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec68c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec690: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec698: 0x0  nop
    ctx->pc = 0x2ec698u;
    // NOP
    // 0x2ec69c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec6a0: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2ec6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec6a4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ec6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6ac: 0x0  nop
    ctx->pc = 0x2ec6acu;
    // NOP
    // 0x2ec6b0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec6b4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2ec6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2ec6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6bc: 0x0  nop
    ctx->pc = 0x2ec6bcu;
    // NOP
    // 0x2ec6c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec6c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec6c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ec6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ec6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec6d0: 0x0  nop
    ctx->pc = 0x2ec6d0u;
    // NOP
    // 0x2ec6d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ec6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ec6d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC6D8u;
    SET_GPR_U32(ctx, 31, 0x2EC6E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC6D8u, 0x2EC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6E0u;
label_2ec6e0:
    // 0x2ec6e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ec6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ec6e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec6ec: 0x0  nop
    ctx->pc = 0x2ec6ecu;
    // NOP
    // 0x2ec6f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec6f4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ec6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ec6f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC6F8u;
    SET_GPR_U32(ctx, 31, 0x2EC700u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC6F8u, 0x2EC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC700u;
label_2ec700:
    // 0x2ec700: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ec700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ec704: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ec704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ec708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec70c: 0x0  nop
    ctx->pc = 0x2ec70cu;
    // NOP
    // 0x2ec710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec714: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ec714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2ec718:
    // 0x2ec718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ec718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ec71c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ec71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec720: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2ec720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2ec724: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2ec724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2ec728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec72c: 0x0  nop
    ctx->pc = 0x2ec72cu;
    // NOP
    // 0x2ec730: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ec730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec734: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec738: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ec738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2ec73c: 0x0  nop
    ctx->pc = 0x2ec73cu;
    // NOP
label_2ec740:
    // 0x2ec740: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2ec740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ec744: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x2EC744u;
    {
        const bool branch_taken_0x2ec744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec744) {
            ctx->pc = 0x2EC3C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec3c4;
        }
    }
    ctx->pc = 0x2EC74Cu;
    // 0x2ec74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec750: 0x0  nop
    ctx->pc = 0x2ec750u;
    // NOP
    // 0x2ec754: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec758: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ec758u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec75c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2EC75Cu;
    {
        const bool branch_taken_0x2ec75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec75c) {
            ctx->pc = 0x2ECA70u;
            goto label_2eca70;
        }
    }
    ctx->pc = 0x2EC764u;
label_2ec764:
    // 0x2ec764: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ec764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec768: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ec768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec76c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ec76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ec770: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ec770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ec774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec778: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ec778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ec77c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ec77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ec780: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ec780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ec784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ec788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ec78c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ec78cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ec790: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec794: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec798: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec79c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC79Cu;
    SET_GPR_U32(ctx, 31, 0x2EC7A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC79Cu, 0x2EC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7A4u;
label_2ec7a4:
    // 0x2ec7a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec7ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec7b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec7c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7c8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ec7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec7dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec804: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec808: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec80c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec810: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec814: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec818: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec81c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec81cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec820: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec828: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec82c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ec82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec834: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC838u;
    SET_GPR_U32(ctx, 31, 0x2EC840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC838u, 0x2EC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC840u;
label_2ec840:
    // 0x2ec840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec844: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec84c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec858: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC858u;
    {
        const bool branch_taken_0x2ec858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec858) {
            ctx->pc = 0x2EC86Cu;
            goto label_2ec86c;
        }
    }
    ctx->pc = 0x2EC860u;
    // 0x2ec860: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x2ec860u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec864: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC864u;
    {
        const bool branch_taken_0x2ec864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec864) {
            ctx->pc = 0x2EC890u;
            goto label_2ec890;
        }
    }
    ctx->pc = 0x2EC86Cu;
label_2ec86c:
    // 0x2ec86c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec870: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec878: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec87c: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ec87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec880: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2ec880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2ec884: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2ec884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2ec888: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ec888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec88c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2ec88cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ec890:
    // 0x2ec890: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec894: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec898: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2ec898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2ec89c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2ec89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ec8a0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec8a4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec8a8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec8ac: 0x12030066  beq         $s0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2EC8ACu;
    {
        const bool branch_taken_0x2ec8ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec8ac) {
            ctx->pc = 0x2ECA48u;
            goto label_2eca48;
        }
    }
    ctx->pc = 0x2EC8B4u;
    // 0x2ec8b4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8bc: 0x0  nop
    ctx->pc = 0x2ec8bcu;
    // NOP
    // 0x2ec8c0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec8c4: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ec8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ec8c8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ec8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ec8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8d0: 0x0  nop
    ctx->pc = 0x2ec8d0u;
    // NOP
    // 0x2ec8d4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec8d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8e0: 0x0  nop
    ctx->pc = 0x2ec8e0u;
    // NOP
    // 0x2ec8e4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec8e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ec8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8f0: 0x0  nop
    ctx->pc = 0x2ec8f0u;
    // NOP
    // 0x2ec8f4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec8f8: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec8fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec904: 0x0  nop
    ctx->pc = 0x2ec904u;
    // NOP
    // 0x2ec908: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec90c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec910: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC910u;
    SET_GPR_U32(ctx, 31, 0x2EC918u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC910u, 0x2EC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC918u;
label_2ec918:
    // 0x2ec918: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec91c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec920: 0x0  nop
    ctx->pc = 0x2ec920u;
    // NOP
    // 0x2ec924: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec928: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec92c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2ec92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2ec930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec934: 0x0  nop
    ctx->pc = 0x2ec934u;
    // NOP
    // 0x2ec938: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec93c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec940: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC940u;
    SET_GPR_U32(ctx, 31, 0x2EC948u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC940u, 0x2EC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC948u;
label_2ec948:
    // 0x2ec948: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec950: 0x0  nop
    ctx->pc = 0x2ec950u;
    // NOP
    // 0x2ec954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec958: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec95c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec964: 0x0  nop
    ctx->pc = 0x2ec964u;
    // NOP
    // 0x2ec968: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec96c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ec970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec974: 0x0  nop
    ctx->pc = 0x2ec974u;
    // NOP
    // 0x2ec978: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec97c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec984: 0x0  nop
    ctx->pc = 0x2ec984u;
    // NOP
    // 0x2ec988: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec98c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec990: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec998: 0x0  nop
    ctx->pc = 0x2ec998u;
    // NOP
    // 0x2ec99c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec9a0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec9a4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9ac: 0x0  nop
    ctx->pc = 0x2ec9acu;
    // NOP
    // 0x2ec9b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec9b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC9B4u;
    SET_GPR_U32(ctx, 31, 0x2EC9BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC9B4u, 0x2EC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ec9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec9c0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2EC9C0u;
    SET_GPR_U32(ctx, 31, 0x2EC9C8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2EC9C0u, 0x2EC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9C8u;
label_2ec9c8:
    // 0x2ec9c8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2ec9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2ec9cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec9d0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ec9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec9d4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2ec9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9dc: 0x0  nop
    ctx->pc = 0x2ec9dcu;
    // NOP
    // 0x2ec9e0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec9e4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ec9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec9e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9ec: 0x0  nop
    ctx->pc = 0x2ec9ecu;
    // NOP
    // 0x2ec9f0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec9f4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ec9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec9f8: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x2ec9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ec9fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca00: 0x0  nop
    ctx->pc = 0x2eca00u;
    // NOP
    // 0x2eca04: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eca08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECA08u;
    SET_GPR_U32(ctx, 31, 0x2ECA10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECA08u, 0x2ECA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA10u;
label_2eca10:
    // 0x2eca10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eca14: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2eca14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eca18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eca18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eca1c: 0x0  nop
    ctx->pc = 0x2eca1cu;
    // NOP
    // 0x2eca20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eca20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eca24: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eca28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECA28u;
    SET_GPR_U32(ctx, 31, 0x2ECA30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECA28u, 0x2ECA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA30u;
label_2eca30:
    // 0x2eca30: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2eca30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2eca34: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2eca34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2eca38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eca38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eca3c: 0x0  nop
    ctx->pc = 0x2eca3cu;
    // NOP
    // 0x2eca40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eca40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eca44: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2eca48:
    // 0x2eca48: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2eca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eca4c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2eca4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2eca50: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2eca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eca54: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2eca58: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2eca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2eca5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eca5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca60: 0x0  nop
    ctx->pc = 0x2eca60u;
    // NOP
    // 0x2eca64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eca64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eca68: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eca6c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2eca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2eca70:
    // 0x2eca70: 0x2a270008  slti        $a3, $s1, 0x8
    ctx->pc = 0x2eca70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eca74: 0x14e0ff3b  bnez        $a3, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x2ECA74u;
    {
        const bool branch_taken_0x2eca74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca74) {
            ctx->pc = 0x2EC764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec764;
        }
    }
    ctx->pc = 0x2ECA7Cu;
    // 0x2eca7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eca7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca80: 0x0  nop
    ctx->pc = 0x2eca80u;
    // NOP
    // 0x2eca84: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eca88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eca88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eca8c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2ECA8Cu;
    {
        const bool branch_taken_0x2eca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca8c) {
            ctx->pc = 0x2ECF60u;
            goto label_2ecf60;
        }
    }
    ctx->pc = 0x2ECA94u;
label_2eca94:
    // 0x2eca94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eca98: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2eca9c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x2eca9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ecaa0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2ecaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ecaa4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2ecaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecaa8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ecaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecaac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ecab0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecab4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ecab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecab8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ecab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ecabc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ecac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ecac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecac4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ecac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ecac8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ecac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ecacc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ecaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecad4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ecad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ecad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ecad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecadc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ecadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ecae0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2ecae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ecae4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecae8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecaec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ecaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ecaf0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ecaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ecaf4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecaf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecafc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ecb00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecb04: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ecb04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecb08: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x2ecb08u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecb0c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x2ecb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2ecb10: 0x7ea021  addu        $s4, $v1, $fp
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2ecb14: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x2ecb18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ecb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ecb1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ecb20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecb24: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ecb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ecb28: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2ecb28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecb2c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ecb30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECB30u;
    {
        const bool branch_taken_0x2ecb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb30) {
            ctx->pc = 0x2ECB70u;
            goto label_2ecb70;
        }
    }
    ctx->pc = 0x2ECB38u;
    // 0x2ecb38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECB38u;
    SET_GPR_U32(ctx, 31, 0x2ECB40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECB38u, 0x2ECB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB40u;
label_2ecb40:
    // 0x2ecb40: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2ecb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2ecb44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecb44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb48: 0x0  nop
    ctx->pc = 0x2ecb48u;
    // NOP
    // 0x2ecb4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecb4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecb50: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2ecb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2ecb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb58: 0x0  nop
    ctx->pc = 0x2ecb58u;
    // NOP
    // 0x2ecb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecb60: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ecb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ecb64: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2ecb64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ecb68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2ECB68u;
    {
        const bool branch_taken_0x2ecb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb68) {
            ctx->pc = 0x2ECBA8u;
            goto label_2ecba8;
        }
    }
    ctx->pc = 0x2ECB70u;
label_2ecb70:
    // 0x2ecb70: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECB70u;
    SET_GPR_U32(ctx, 31, 0x2ECB78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECB70u, 0x2ECB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB78u;
label_2ecb78:
    // 0x2ecb78: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ecb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ecb7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb80: 0x0  nop
    ctx->pc = 0x2ecb80u;
    // NOP
    // 0x2ecb84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecb88: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2ecb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb90: 0x0  nop
    ctx->pc = 0x2ecb90u;
    // NOP
    // 0x2ecb94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecb98: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ecb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ecb9c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ecb9cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ecba0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2ecba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ecba4: 0x0  nop
    ctx->pc = 0x2ecba4u;
    // NOP
label_2ecba8:
    // 0x2ecba8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2ecbac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ecbacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ecbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecbb4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2ecbb8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ecbbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecbc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecbc4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ecbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ecbc8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ecbcc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ecbd0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ecbd4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2ecbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecbdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ecbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecbe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ecbe4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ecbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ecbe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ecbec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ecbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ecbf0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ecbf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ecbf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ecbf8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ecbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ecbfc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ECBFCu;
    SET_GPR_U32(ctx, 31, 0x2ECC04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ECBFCu, 0x2ECC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC04u;
label_2ecc04:
    // 0x2ecc04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc08: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ecc0c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ecc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ecc10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc18: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ecc18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ecc1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ecc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecc20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc24: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc28: 0xa082011d  sb          $v0, 0x11D($a0)
    ctx->pc = 0x2ecc28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 285), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ecc2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc34: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ecc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc3c: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ecc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc40: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x2ecc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc4c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ecc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc58: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ecc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc64: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ecc64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc70: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ecc70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc7c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ecc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc88: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ecc88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc90: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ecc90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ECC94u;
    SET_GPR_U32(ctx, 31, 0x2ECC9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ECC94u, 0x2ECC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC9Cu;
label_2ecc9c:
    // 0x2ecc9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecca0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ecca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ecca4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecca8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ecca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eccacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eccb0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eccb4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECCB4u;
    {
        const bool branch_taken_0x2eccb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eccb4) {
            ctx->pc = 0x2ECCC8u;
            goto label_2eccc8;
        }
    }
    ctx->pc = 0x2ECCBCu;
    // 0x2eccbc: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2eccbcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eccc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ECCC0u;
    {
        const bool branch_taken_0x2eccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eccc0) {
            ctx->pc = 0x2ECCF0u;
            goto label_2eccf0;
        }
    }
    ctx->pc = 0x2ECCC8u;
label_2eccc8:
    // 0x2eccc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecccc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eccd4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccd8: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eccdc: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2eccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2ecce0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2ecce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2ecce4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ecce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecce8: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2ecce8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eccec: 0x0  nop
    ctx->pc = 0x2eccecu;
    // NOP
label_2eccf0:
    // 0x2eccf0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eccf4: 0x2464a610  addiu       $a0, $v1, -0x59F0
    ctx->pc = 0x2eccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eccf8: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2eccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2eccfc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ecd00: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecd04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ecd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ecd08: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2ecd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ecd0c: 0x1204008a  beq         $s0, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2ECD0Cu;
    {
        const bool branch_taken_0x2ecd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ecd0c) {
            ctx->pc = 0x2ECF38u;
            goto label_2ecf38;
        }
    }
    ctx->pc = 0x2ECD14u;
    // 0x2ecd14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ecd18: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ECD18u;
    {
        const bool branch_taken_0x2ecd18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ecd18) {
            ctx->pc = 0x2ECD6Cu;
            goto label_2ecd6c;
        }
    }
    ctx->pc = 0x2ECD20u;
    // 0x2ecd20: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd28: 0x0  nop
    ctx->pc = 0x2ecd28u;
    // NOP
    // 0x2ecd2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecd30: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd34: 0x34876666  ori         $a3, $a0, 0x6666
    ctx->pc = 0x2ecd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x2ecd38: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ecd38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd3c: 0x0  nop
    ctx->pc = 0x2ecd3cu;
    // NOP
    // 0x2ecd40: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecd44: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ecd48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd4c: 0x0  nop
    ctx->pc = 0x2ecd4cu;
    // NOP
    // 0x2ecd50: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ecd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ecd54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ecd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ecd58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd5c: 0x0  nop
    ctx->pc = 0x2ecd5cu;
    // NOP
    // 0x2ecd60: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ecd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ecd64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ECD64u;
    {
        const bool branch_taken_0x2ecd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd64) {
            ctx->pc = 0x2ECDB0u;
            goto label_2ecdb0;
        }
    }
    ctx->pc = 0x2ECD6Cu;
label_2ecd6c:
    // 0x2ecd6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ecd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ecd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd74: 0x0  nop
    ctx->pc = 0x2ecd74u;
    // NOP
    // 0x2ecd78: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecd7c: 0x3c0341f1  lui         $v1, 0x41F1
    ctx->pc = 0x2ecd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16881 << 16));
    // 0x2ecd80: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x2ecd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ecd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd88: 0x0  nop
    ctx->pc = 0x2ecd88u;
    // NOP
    // 0x2ecd8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecd90: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ecd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ecd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd98: 0x0  nop
    ctx->pc = 0x2ecd98u;
    // NOP
    // 0x2ecd9c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ecd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ecda0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ecda4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecda8: 0x0  nop
    ctx->pc = 0x2ecda8u;
    // NOP
    // 0x2ecdac: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ecdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2ecdb0:
    // 0x2ecdb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDB0u;
    SET_GPR_U32(ctx, 31, 0x2ECDB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDB0u, 0x2ECDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDB8u;
label_2ecdb8:
    // 0x2ecdb8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2ecdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2ecdbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecdbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecdc0: 0x0  nop
    ctx->pc = 0x2ecdc0u;
    // NOP
    // 0x2ecdc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecdc8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecdcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecdd0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecdd4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDD4u;
    SET_GPR_U32(ctx, 31, 0x2ECDDCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDD4u, 0x2ECDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDDCu;
label_2ecddc:
    // 0x2ecddc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ecddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ecde0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecde4: 0x0  nop
    ctx->pc = 0x2ecde4u;
    // NOP
    // 0x2ecde8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecdec: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecdf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecdf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecdf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecdf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDF8u;
    SET_GPR_U32(ctx, 31, 0x2ECE00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDF8u, 0x2ECE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE00u;
label_2ece00:
    // 0x2ece00: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ece00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ece04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece08: 0x0  nop
    ctx->pc = 0x2ece08u;
    // NOP
    // 0x2ece0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ece0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece10: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ece10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ece14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ece14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ece18: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ece18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ece1c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ece1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ece20: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2ECE20u;
    SET_GPR_U32(ctx, 31, 0x2ECE28u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2ECE20u, 0x2ECE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE28u;
label_2ece28:
    // 0x2ece28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece30: 0x0  nop
    ctx->pc = 0x2ece30u;
    // NOP
    // 0x2ece34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ece34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece38: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ece38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ece3c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ece3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ece40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece44: 0x0  nop
    ctx->pc = 0x2ece44u;
    // NOP
    // 0x2ece48: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ece48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ece4c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ece4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ece50: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2ECE50u;
    SET_GPR_U32(ctx, 31, 0x2ECE58u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2ECE50u, 0x2ECE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE58u;
label_2ece58:
    // 0x2ece58: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece60: 0x0  nop
    ctx->pc = 0x2ece60u;
    // NOP
    // 0x2ece64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ece64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece68: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ece68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ece6c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ece6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ece70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece74: 0x0  nop
    ctx->pc = 0x2ece74u;
    // NOP
    // 0x2ece78: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ece78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ece7c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece84: 0x0  nop
    ctx->pc = 0x2ece84u;
    // NOP
    // 0x2ece88: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ece88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ece8c: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2ece90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ece90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece94: 0x0  nop
    ctx->pc = 0x2ece94u;
    // NOP
    // 0x2ece98: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ece98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ece9c: 0x3c043f78  lui         $a0, 0x3F78
    ctx->pc = 0x2ece9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16248 << 16));
    // 0x2ecea0: 0x348251ec  ori         $v0, $a0, 0x51EC
    ctx->pc = 0x2ecea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20972);
    // 0x2ecea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecea8: 0x0  nop
    ctx->pc = 0x2ecea8u;
    // NOP
    // 0x2eceac: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eceb0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eceb4: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eceb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eceb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecebc: 0x0  nop
    ctx->pc = 0x2ecebcu;
    // NOP
    // 0x2ecec0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ecec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ecec4: 0x3c03c060  lui         $v1, 0xC060
    ctx->pc = 0x2ecec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49248 << 16));
    // 0x2ecec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ececc: 0x0  nop
    ctx->pc = 0x2ececcu;
    // NOP
    // 0x2eced0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eced4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2eced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eced8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ecedc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ecee0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ecee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2ecee4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2ecee8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2ecee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2eceec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eceecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecef0: 0x0  nop
    ctx->pc = 0x2ecef0u;
    // NOP
    // 0x2ecef4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ecef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ecef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECEF8u;
    SET_GPR_U32(ctx, 31, 0x2ECF00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECEF8u, 0x2ECF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF00u;
label_2ecf00:
    // 0x2ecf00: 0x3c153dcc  lui         $s5, 0x3DCC
    ctx->pc = 0x2ecf00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15820 << 16));
    // 0x2ecf04: 0x36a3cccd  ori         $v1, $s5, 0xCCCD
    ctx->pc = 0x2ecf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
    // 0x2ecf08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecf08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf0c: 0x0  nop
    ctx->pc = 0x2ecf0cu;
    // NOP
    // 0x2ecf10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ecf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ecf18: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECF18u;
    SET_GPR_U32(ctx, 31, 0x2ECF20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECF18u, 0x2ECF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF20u;
label_2ecf20:
    // 0x2ecf20: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ecf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ecf24: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ecf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ecf28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf2c: 0x0  nop
    ctx->pc = 0x2ecf2cu;
    // NOP
    // 0x2ecf30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ecf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2ecf38:
    // 0x2ecf38: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ecf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ecf3c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2ecf3cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ecf40: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ecf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecf44: 0x3c033ea0  lui         $v1, 0x3EA0
    ctx->pc = 0x2ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16032 << 16));
    // 0x2ecf48: 0x3470d845  ori         $s0, $v1, 0xD845
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ecf4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ecf4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecf50: 0x0  nop
    ctx->pc = 0x2ecf50u;
    // NOP
    // 0x2ecf54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf58: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ecf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ecf5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2ecf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2ecf60:
    // 0x2ecf60: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x2ecf60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2ecf64: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x2ECF64u;
    {
        const bool branch_taken_0x2ecf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf64) {
            ctx->pc = 0x2ECA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eca94;
        }
    }
    ctx->pc = 0x2ECF6Cu;
    // 0x2ecf6c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ecf70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ecf70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ecf74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ecf74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ecf78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ecf78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecf7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ecf7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecf80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ecf80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecf84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ecf84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecf88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ecf88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ecf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ecf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf94: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ecf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFA0u;
}
