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

// Function: entry_002ccfb4
// Address: 0x2ccfb4 - 0x2cd144
void entry_002ccfb4_0x2ccfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ccfb4_0x2ccfb4");
#endif

    switch (ctx->pc) {
        case 0x2ccfc0u: goto label_2ccfc0;
        case 0x2cd004u: goto label_2cd004;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd074u: goto label_2cd074;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd0e4u: goto label_2cd0e4;
        default: break;
    }

    ctx->pc = 0x2ccfb4u;

    // 0x2ccfb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ccfb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CCFB8u;
    SET_GPR_U32(ctx, 31, 0x2CCFC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CCFB8u, 0x2CCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFC0u;
label_2ccfc0:
    // 0x2ccfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ccfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ccfc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ccfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ccfcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ccfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ccfd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ccfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ccfd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ccfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ccfd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ccfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ccfdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ccfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ccfe0: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2ccfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2ccfe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfe8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ccfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ccff0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2ccff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2ccff4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2ccff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2ccff8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2ccff8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ccffc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CCFFCu;
    SET_GPR_U32(ctx, 31, 0x2CD004u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CCFFCu, 0x2CD004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD004u;
label_2cd004:
    // 0x2cd004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd008: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd00c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2cd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2cd010: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2cd010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2cd014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd018: 0x0  nop
    ctx->pc = 0x2cd018u;
    // NOP
    // 0x2cd01c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd01cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd020: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD020u;
    SET_GPR_U32(ctx, 31, 0x2CD028u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD020u, 0x2CD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD028u;
label_2cd028:
    // 0x2cd028: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd02c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd034: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd038: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd03c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd040: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd04c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd050: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2cd050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2cd054: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd058: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd05c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cd060: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2cd060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2cd064: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2cd064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd068: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2cd068u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd06c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CD06Cu;
    SET_GPR_U32(ctx, 31, 0x2CD074u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CD06Cu, 0x2CD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD074u;
label_2cd074:
    // 0x2cd074: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd078: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd07c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2cd080: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2cd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2cd084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd088: 0x0  nop
    ctx->pc = 0x2cd088u;
    // NOP
    // 0x2cd08c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd08cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd090: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD090u;
    SET_GPR_U32(ctx, 31, 0x2CD098u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD090u, 0x2CD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD098u;
label_2cd098:
    // 0x2cd098: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd09c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd0a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd0a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd0ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd0b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd0b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd0b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd0bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd0c0: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2cd0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0cc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cd0d0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2cd0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2cd0d4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2cd0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd0d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2cd0d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd0dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CD0DCu;
    SET_GPR_U32(ctx, 31, 0x2CD0E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CD0DCu, 0x2CD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0E4u;
label_2cd0e4:
    // 0x2cd0e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0e8: 0x247110b0  addiu       $s1, $v1, 0x10B0
    ctx->pc = 0x2cd0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2cd0ec: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2cd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2cd0f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2cd0f4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2cd0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2cd0f8: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x2cd0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x2cd0fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cd104: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cd104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cd108: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2cd108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2cd10c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cd110: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cd110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cd114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd118: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd11c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x2cd11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x2cd120: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2cd120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x2cd124: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2cd124u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd128: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2cd128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd12c: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2cd12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
    // 0x2cd130: 0x3c083fa6  lui         $t0, 0x3FA6
    ctx->pc = 0x2cd130u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16294 << 16));
    // 0x2cd134: 0x35076666  ori         $a3, $t0, 0x6666
    ctx->pc = 0x2cd134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x2cd138: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2cd138u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd13c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd140: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2cd140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    ctx->pc = 0x2cd144u;
}
