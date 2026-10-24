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

// Function: entry_002c7818
// Address: 0x2c7818 - 0x2c7988
void entry_002c7818_0x2c7818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7818_0x2c7818");
#endif

    switch (ctx->pc) {
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c797cu: goto label_2c797c;
        default: break;
    }

    ctx->pc = 0x2c7818u;

    // 0x2c7818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7818u;
    SET_GPR_U32(ctx, 31, 0x2C7820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7818u, 0x2C7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7820u;
label_2c7820:
    // 0x2c7820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7824: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c7824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c7828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c7828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c782c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c7830: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7834: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7838: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c7838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c783c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c7840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7844: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7848: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c7848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c784c: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2c784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2c7850: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c7850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c7854: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c785c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7860: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c7864: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2c7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7868: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c7868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c786c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c7870: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C7870u;
    SET_GPR_U32(ctx, 31, 0x2C7878u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C7870u, 0x2C7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7878u;
label_2c7878:
    // 0x2c7878: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c7878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c787c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7880: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c7880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7884: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c7884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7888: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c788c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C788Cu;
    SET_GPR_U32(ctx, 31, 0x2C7894u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C788Cu, 0x2C7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7894u;
label_2c7894:
    // 0x2c7894: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7898: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c789c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c78a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C78A0u;
    SET_GPR_U32(ctx, 31, 0x2C78A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C78A0u, 0x2C78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78A8u;
label_2c78a8:
    // 0x2c78a8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c78ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78b0: 0x0  nop
    ctx->pc = 0x2c78b0u;
    // NOP
    // 0x2c78b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c78b8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c78bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c78bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c78c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78c4: 0x0  nop
    ctx->pc = 0x2c78c4u;
    // NOP
    // 0x2c78c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c78c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c78cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c78d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78d4: 0x0  nop
    ctx->pc = 0x2c78d4u;
    // NOP
    // 0x2c78d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c78d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c78dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c78e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c78e4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c78e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c78e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c78ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c78ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c78f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c78f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c78f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c78f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c78fc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c78fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7900: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c7904: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7908: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c790c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C790Cu;
    SET_GPR_U32(ctx, 31, 0x2C7914u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C790Cu, 0x2C7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7914u;
label_2c7914:
    // 0x2c7914: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c7914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7918: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7918u;
    SET_GPR_U32(ctx, 31, 0x2C7920u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7918u, 0x2C7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7920u;
label_2c7920:
    // 0x2c7920: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2c7920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2c7924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7928: 0x0  nop
    ctx->pc = 0x2c7928u;
    // NOP
    // 0x2c792c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c792cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7930: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c7934: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c7938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c793c: 0x0  nop
    ctx->pc = 0x2c793cu;
    // NOP
    // 0x2c7940: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c7940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7948: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c794c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c7954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c7954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7958: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c795c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7964: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c7964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7968: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c796c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c796cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7974: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C7974u;
    SET_GPR_U32(ctx, 31, 0x2C797Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C7974u, 0x2C797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C797Cu;
label_2c797c:
    // 0x2c797c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c797cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7980: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7980u;
    SET_GPR_U32(ctx, 31, 0x2C7988u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7980u, 0x2C7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7988u;
}
