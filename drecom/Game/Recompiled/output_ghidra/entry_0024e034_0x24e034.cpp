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

// Function: entry_0024e034
// Address: 0x24e034 - 0x24e1e8
void entry_0024e034_0x24e034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024e034_0x24e034");
#endif

    switch (ctx->pc) {
        case 0x24e03cu: goto label_24e03c;
        case 0x24e058u: goto label_24e058;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1d4u: goto label_24e1d4;
        default: break;
    }

    ctx->pc = 0x24e034u;

    // 0x24e034: 0xc067654  jal         func_19D950
    ctx->pc = 0x24E034u;
    SET_GPR_U32(ctx, 31, 0x24E03Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24E034u, 0x24E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E03Cu;
label_24e03c:
    // 0x24e03c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24e040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e044: 0x0  nop
    ctx->pc = 0x24e044u;
    // NOP
    // 0x24e048: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e04c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24e04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24e050: 0xc067654  jal         func_19D950
    ctx->pc = 0x24E050u;
    SET_GPR_U32(ctx, 31, 0x24E058u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24E050u, 0x24E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E058u;
label_24e058:
    // 0x24e058: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24e05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e060: 0x0  nop
    ctx->pc = 0x24e060u;
    // NOP
    // 0x24e064: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e068: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24e06c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e070: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24e074: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24e074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e078: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e07c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24e080: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e084: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e08c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24e090: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e094: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e09c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24e09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e0a0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x24e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x24e0a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0a8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0ac: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24e0acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e0b0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24e0b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24e0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e0c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24e0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24e0c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e0c8: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x24e0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e0d0: 0x0  nop
    ctx->pc = 0x24e0d0u;
    // NOP
    // 0x24e0d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24e0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24e0d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24e0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24e0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e0e0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e0e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24e0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e0e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24e0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e0ec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e108: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e10c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24e110: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e114: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e118: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e11c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e128: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24e128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e12c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e130: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e134: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e13c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e14c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e150: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e154: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24e158: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e15c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e160: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e164: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e16c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e170: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24e170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e178: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e17c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e180: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e184: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e188: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e18c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e194: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24e194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e198: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24e19c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24e1a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24e1a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24e1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24e1a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24e1ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24e1b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24e1b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24e1b8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24e1b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24e1bc: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x24e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24e1c0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24E1C0u;
    SET_GPR_U32(ctx, 31, 0x24E1C8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24E1C0u, 0x24E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1C8u;
label_24e1c8:
    // 0x24e1c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24e1c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24e1cc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24E1CCu;
    SET_GPR_U32(ctx, 31, 0x24E1D4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24E1CCu, 0x24E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1D4u;
label_24e1d4:
    // 0x24e1d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24e1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1dc: 0x0  nop
    ctx->pc = 0x24e1dcu;
    // NOP
    // 0x24e1e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24e1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24e1e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24e1e8u;
}
