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

// Function: entry_0024d6c4
// Address: 0x24d6c4 - 0x24d878
void entry_0024d6c4_0x24d6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d6c4_0x24d6c4");
#endif

    switch (ctx->pc) {
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d858u: goto label_24d858;
        case 0x24d864u: goto label_24d864;
        default: break;
    }

    ctx->pc = 0x24d6c4u;

    // 0x24d6c4: 0xc067654  jal         func_19D950
    ctx->pc = 0x24D6C4u;
    SET_GPR_U32(ctx, 31, 0x24D6CCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24D6C4u, 0x24D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6CCu;
label_24d6cc:
    // 0x24d6cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24d6d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d6d4: 0x0  nop
    ctx->pc = 0x24d6d4u;
    // NOP
    // 0x24d6d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d6dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24d6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24d6e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x24D6E0u;
    SET_GPR_U32(ctx, 31, 0x24D6E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24D6E0u, 0x24D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6E8u;
label_24d6e8:
    // 0x24d6e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24d6ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d6f0: 0x0  nop
    ctx->pc = 0x24d6f0u;
    // NOP
    // 0x24d6f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d6f8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24d6fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d700: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24d704: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24d704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d708: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d70c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24d710: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d714: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d71c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24d720: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d724: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d72c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d730: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24d734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d738: 0x0  nop
    ctx->pc = 0x24d738u;
    // NOP
    // 0x24d73c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d740: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x24d744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d748: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d74c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24d74cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d750: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24d754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d758: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d75c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24d75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24d760: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24d764: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d768: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24d76c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d770: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d774: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d778: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d77c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d798: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d79c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d7a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d7b8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24d7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d7bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d7c0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24d7c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d7dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d7e4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24d7e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d7ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d7f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d7f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d7f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d7fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d800: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24d800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d808: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d81c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d824: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d82c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d830: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d834: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24d838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d83c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24d840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d844: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d848: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24d848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24d84c: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x24d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24d850: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D850u;
    SET_GPR_U32(ctx, 31, 0x24D858u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D850u, 0x24D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D858u;
label_24d858:
    // 0x24d858: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d85c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D85Cu;
    SET_GPR_U32(ctx, 31, 0x24D864u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D85Cu, 0x24D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D864u;
label_24d864:
    // 0x24d864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24d868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d86c: 0x0  nop
    ctx->pc = 0x24d86cu;
    // NOP
    // 0x24d870: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24d874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24d878u;
}
