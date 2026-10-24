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

// Function: Em18_R0_init
// Address: 0x2d96d0 - 0x2d9de8
void Em18_R0_init_0x2d96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R0_init_0x2d96d0");
#endif

    switch (ctx->pc) {
        case 0x2d9748u: goto label_2d9748;
        case 0x2d97d8u: goto label_2d97d8;
        case 0x2d97ecu: goto label_2d97ec;
        case 0x2d9810u: goto label_2d9810;
        case 0x2d9824u: goto label_2d9824;
        case 0x2d9848u: goto label_2d9848;
        case 0x2d9860u: goto label_2d9860;
        case 0x2d9884u: goto label_2d9884;
        case 0x2d989cu: goto label_2d989c;
        case 0x2d98acu: goto label_2d98ac;
        case 0x2d98d8u: goto label_2d98d8;
        case 0x2d9904u: goto label_2d9904;
        case 0x2d9928u: goto label_2d9928;
        case 0x2d9954u: goto label_2d9954;
        case 0x2d997cu: goto label_2d997c;
        case 0x2d99d0u: goto label_2d99d0;
        case 0x2d9a14u: goto label_2d9a14;
        case 0x2d9a24u: goto label_2d9a24;
        case 0x2d9a38u: goto label_2d9a38;
        case 0x2d9a4cu: goto label_2d9a4c;
        case 0x2d9a5cu: goto label_2d9a5c;
        case 0x2d9a80u: goto label_2d9a80;
        case 0x2d9aa4u: goto label_2d9aa4;
        case 0x2d9ac4u: goto label_2d9ac4;
        case 0x2d9ad8u: goto label_2d9ad8;
        case 0x2d9af0u: goto label_2d9af0;
        case 0x2d9b0cu: goto label_2d9b0c;
        case 0x2d9b28u: goto label_2d9b28;
        case 0x2d9b44u: goto label_2d9b44;
        case 0x2d9b50u: goto label_2d9b50;
        case 0x2d9b8cu: goto label_2d9b8c;
        case 0x2d9bfcu: goto label_2d9bfc;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9cf4u: goto label_2d9cf4;
        case 0x2d9d64u: goto label_2d9d64;
        default: break;
    }

    ctx->pc = 0x2d96d0u;

    // 0x2d96d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d96d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2d96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2d96d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d96d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d96dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d96dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d96e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d96e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d96e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d96e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d96ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d96f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d96f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d96f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d96fc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2d96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x2d9700: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9704: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2d9704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2d9708: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2d9708u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2d970c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9710: 0x247610b0  addiu       $s6, $v1, 0x10B0
    ctx->pc = 0x2d9710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2d9714: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2d9714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2d9718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d9718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d971c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9720: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2d9720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2d9724: 0x3c044467  lui         $a0, 0x4467
    ctx->pc = 0x2d9724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17511 << 16));
    // 0x2d9728: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2d9728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2d972c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d972cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9730: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9734: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x2d9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x2d9738: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x2d9738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2d973c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d973cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9740: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x2D9740u;
    SET_GPR_U32(ctx, 31, 0x2D9748u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x2D9740u, 0x2D9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9748u;
label_2d9748:
    // 0x2d9748: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2d9748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2d974c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d974cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9750: 0x0  nop
    ctx->pc = 0x2d9750u;
    // NOP
    // 0x2d9754: 0xe6c000d0  swc1        $f0, 0xD0($s6)
    ctx->pc = 0x2d9754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 208), bits); }
    // 0x2d9758: 0xe6c000d4  swc1        $f0, 0xD4($s6)
    ctx->pc = 0x2d9758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 212), bits); }
    // 0x2d975c: 0x3c0443e7  lui         $a0, 0x43E7
    ctx->pc = 0x2d975cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17383 << 16));
    // 0x2d9760: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2d9760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2d9764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d9764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9768: 0x0  nop
    ctx->pc = 0x2d9768u;
    // NOP
    // 0x2d976c: 0xe6c000d8  swc1        $f0, 0xD8($s6)
    ctx->pc = 0x2d976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 216), bits); }
    // 0x2d9770: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2d9770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2d9774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d9774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9778: 0x0  nop
    ctx->pc = 0x2d9778u;
    // NOP
    // 0x2d977c: 0xe6c000e4  swc1        $f0, 0xE4($s6)
    ctx->pc = 0x2d977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 228), bits); }
    // 0x2d9780: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9784: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x2d9784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d9788: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2d9788u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2d978c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x2d978cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x2d9790: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9794: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x2d9794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2d9798: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x2d9798u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x2d979c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d979cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d97a0: 0x246489e0  addiu       $a0, $v1, -0x7620
    ctx->pc = 0x2d97a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
    // 0x2d97a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97a8: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x2d97a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x2d97ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d97b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97b4: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x2d97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x2d97b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d97bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97c0: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x2d97c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d97c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97c8: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2d97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2d97cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d97ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d97d0: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2D97D0u;
    SET_GPR_U32(ctx, 31, 0x2D97D8u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2D97D0u, 0x2D97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97D8u;
label_2d97d8:
    // 0x2d97d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97dc: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x2d97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x2d97e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d97e4: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2D97E4u;
    SET_GPR_U32(ctx, 31, 0x2D97ECu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2D97E4u, 0x2D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97ECu;
label_2d97ec:
    // 0x2d97ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d97f4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d97f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d97f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d97f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d97fc: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d97fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9800: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2d9800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2d9804: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d9804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d9808: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D9808u;
    SET_GPR_U32(ctx, 31, 0x2D9810u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D9808u, 0x2D9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9810u;
label_2d9810:
    // 0x2d9810: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2d9810u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d9814: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x2d9814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2d9818: 0x27c50080  addiu       $a1, $fp, 0x80
    ctx->pc = 0x2d9818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x2d981c: 0xc0757b8  jal         func_1D5EE0
    ctx->pc = 0x2D981Cu;
    SET_GPR_U32(ctx, 31, 0x2D9824u);
    ctx->pc = 0x1D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5EE0u, 0x2D981Cu, 0x2D9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9824u;
label_2d9824:
    // 0x2d9824: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9828: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d982c: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d982cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d9830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9834: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d9834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9838: 0x2464024c  addiu       $a0, $v1, 0x24C
    ctx->pc = 0x2d9838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 588));
    // 0x2d983c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d983cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d9840: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D9840u;
    SET_GPR_U32(ctx, 31, 0x2D9848u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D9840u, 0x2D9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9848u;
label_2d9848:
    // 0x2d9848: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2d9848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2d984c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2d984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d9850: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2d9850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d9854: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2d9854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d9858: 0xc075844  jal         func_1D6110
    ctx->pc = 0x2D9858u;
    SET_GPR_U32(ctx, 31, 0x2D9860u);
    ctx->pc = 0x1D6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6110u, 0x2D9858u, 0x2D9860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9860u;
label_2d9860:
    // 0x2d9860: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9864: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9868: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d9868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d986c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9870: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d9870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9874: 0x24640254  addiu       $a0, $v1, 0x254
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
    // 0x2d9878: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d9878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d987c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D987Cu;
    SET_GPR_U32(ctx, 31, 0x2D9884u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D987Cu, 0x2D9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9884u;
label_2d9884:
    // 0x2d9884: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2d9884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2d9888: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2d9888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d988c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2d988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d9890: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2d9890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d9894: 0xc0758c8  jal         func_1D6320
    ctx->pc = 0x2D9894u;
    SET_GPR_U32(ctx, 31, 0x2D989Cu);
    ctx->pc = 0x1D6320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6320u, 0x2D9894u, 0x2D989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D989Cu;
label_2d989c:
    // 0x2d989c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2d989cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d98a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d98a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d98a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D98A4u;
    {
        const bool branch_taken_0x2d98a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98a4) {
            ctx->pc = 0x2D9910u;
            goto label_2d9910;
        }
    }
    ctx->pc = 0x2D98ACu;
label_2d98ac:
    // 0x2d98ac: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2d98acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d98b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d98b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d98b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d98bc: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d98bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d98c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d98c4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d98c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d98c8: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2d98cc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d98d0: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D98D0u;
    SET_GPR_U32(ctx, 31, 0x2D98D8u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D98D0u, 0x2D98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98D8u;
label_2d98d8:
    // 0x2d98d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2d98d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d98dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d98dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d98e0: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x2d98e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d98e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d98e8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d98e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d98ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d98ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d98f0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d98f4: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2d98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2d98f8: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2d98f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d98fc: 0xc0759c4  jal         func_1D6710
    ctx->pc = 0x2D98FCu;
    SET_GPR_U32(ctx, 31, 0x2D9904u);
    ctx->pc = 0x1D6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6710u, 0x2D98FCu, 0x2D9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9904u;
label_2d9904:
    // 0x2d9904: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d9908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d990c: 0x0  nop
    ctx->pc = 0x2d990cu;
    // NOP
label_2d9910:
    // 0x2d9910: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d9914: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D9914u;
    {
        const bool branch_taken_0x2d9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9914) {
            ctx->pc = 0x2D98ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d98ac;
        }
    }
    ctx->pc = 0x2D991Cu;
    // 0x2d991c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d991cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9920: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D9920u;
    {
        const bool branch_taken_0x2d9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9920) {
            ctx->pc = 0x2D99B8u;
            goto label_2d99b8;
        }
    }
    ctx->pc = 0x2D9928u;
label_2d9928:
    // 0x2d9928: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d992c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9938: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d9938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d993c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9940: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d9940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9944: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2d9944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2d9948: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d994c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D994Cu;
    SET_GPR_U32(ctx, 31, 0x2D9954u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D994Cu, 0x2D9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9954u;
label_2d9954:
    // 0x2d9954: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2d9954u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d9958: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d9958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d995c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x2d995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d9960: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d9964: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d9964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d9968: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d996c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9970: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2d9970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d9974: 0xc0759c4  jal         func_1D6710
    ctx->pc = 0x2D9974u;
    SET_GPR_U32(ctx, 31, 0x2D997Cu);
    ctx->pc = 0x1D6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6710u, 0x2D9974u, 0x2D997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D997Cu;
label_2d997c:
    // 0x2d997c: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x2d997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9980: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x2d9980u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x2d9984: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2d9984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d9988: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d998c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d9990: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9994: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9998: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x2d999c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d99a0: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x2d99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x2d99a4: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x2d99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d99a8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x2d99a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x2d99ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d99b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d99b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d99b4: 0x0  nop
    ctx->pc = 0x2d99b4u;
    // NOP
label_2d99b8:
    // 0x2d99b8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2d99b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d99bc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D9928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9928;
        }
    }
    ctx->pc = 0x2D99C4u;
    // 0x2d99c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d99c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d99c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D99C8u;
    {
        const bool branch_taken_0x2d99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99c8) {
            ctx->pc = 0x2D9A88u;
            goto label_2d9a88;
        }
    }
    ctx->pc = 0x2D99D0u;
label_2d99d0:
    // 0x2d99d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d99d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d99d8: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x2d99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
    // 0x2d99dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d99e0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d99e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d99e4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d99e8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2d99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2d99ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d99f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d99f4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d99f8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2d99f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d99fc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d9a00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9a04: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a08: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2d9a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2d9a0c: 0xc05d428  jal         func_1750A0
    ctx->pc = 0x2D9A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A14u);
    ctx->pc = 0x1750A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A0u, 0x2D9A0Cu, 0x2D9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A14u;
label_2d9a14:
    // 0x2d9a14: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a18: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x2d9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2d9a1c: 0xc0960d0  jal         func_258340
    ctx->pc = 0x2D9A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A24u);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x2D9A1Cu, 0x2D9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A24u;
label_2d9a24:
    // 0x2d9a24: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2d9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d9a2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d9a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9a30: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9A30u;
    SET_GPR_U32(ctx, 31, 0x2D9A38u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9A30u, 0x2D9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A38u;
label_2d9a38:
    // 0x2d9a38: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d9a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9a44: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9A44u;
    SET_GPR_U32(ctx, 31, 0x2D9A4Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9A44u, 0x2D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A4Cu;
label_2d9a4c:
    // 0x2d9a4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d9a54: 0xc09620c  jal         func_258830
    ctx->pc = 0x2D9A54u;
    SET_GPR_U32(ctx, 31, 0x2D9A5Cu);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x2D9A54u, 0x2D9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A5Cu;
label_2d9a5c:
    // 0x2d9a5c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9a60: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d9a64: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d9a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d9a68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9a6c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9a70: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2d9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2d9a74: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2d9a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d9a78: 0xc096410  jal         func_259040
    ctx->pc = 0x2D9A78u;
    SET_GPR_U32(ctx, 31, 0x2D9A80u);
    ctx->pc = 0x259040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259040u, 0x2D9A78u, 0x2D9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9a84: 0x0  nop
    ctx->pc = 0x2d9a84u;
    // NOP
label_2d9a88:
    // 0x2d9a88: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2d9a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d9a8c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D9A8Cu;
    {
        const bool branch_taken_0x2d9a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a8c) {
            ctx->pc = 0x2D99D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d99d0;
        }
    }
    ctx->pc = 0x2D9A94u;
    // 0x2d9a94: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a98: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d9a9c: 0xc096290  jal         func_258A40
    ctx->pc = 0x2D9A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D9AA4u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x2D9A9Cu, 0x2D9AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AA4u;
label_2d9aa4:
    // 0x2d9aa4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9aa8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9aac: 0x24530d80  addiu       $s3, $v0, 0xD80
    ctx->pc = 0x2d9aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x2d9ab0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9ab8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d9ab8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9abc: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9ABCu;
    SET_GPR_U32(ctx, 31, 0x2D9AC4u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9ABCu, 0x2D9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AC4u;
label_2d9ac4:
    // 0x2d9ac4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ac8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9ad0: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9AD0u;
    SET_GPR_U32(ctx, 31, 0x2D9AD8u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9AD0u, 0x2D9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AD8u;
label_2d9ad8:
    // 0x2d9ad8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9adc: 0x8c530058  lw          $s3, 0x58($v0)
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9ae0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ae4: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9ae8: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9AE8u;
    SET_GPR_U32(ctx, 31, 0x2D9AF0u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9AE8u, 0x2D9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AF0u;
label_2d9af0:
    // 0x2d9af0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2d9af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9af4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d9af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d9af8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2d9af8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9afc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b00: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2d9b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d9b04: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9B04u;
    SET_GPR_U32(ctx, 31, 0x2D9B0Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9B04u, 0x2D9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B0Cu;
label_2d9b0c:
    // 0x2d9b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b10: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9b14: 0x24530990  addiu       $s3, $v0, 0x990
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2d9b18: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9b1c: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9b20: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9B20u;
    SET_GPR_U32(ctx, 31, 0x2D9B28u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9B20u, 0x2D9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B28u;
label_2d9b28:
    // 0x2d9b28: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2d9b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9b2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d9b30: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2d9b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9b34: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b38: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2d9b3c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B44u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9B3Cu, 0x2D9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B44u;
label_2d9b44:
    // 0x2d9b44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d9b44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9b48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9B48u;
    {
        const bool branch_taken_0x2d9b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b48) {
            ctx->pc = 0x2D9B98u;
            goto label_2d9b98;
        }
    }
    ctx->pc = 0x2D9B50u;
label_2d9b50:
    // 0x2d9b50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d9b54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9b58: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2d9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
    // 0x2d9b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9b60: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9b64: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b68: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2d9b6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d9b70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d9b74: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d9b78: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2d9b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9b7c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9b80: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9b84: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9B84u;
    SET_GPR_U32(ctx, 31, 0x2D9B8Cu);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9B84u, 0x2D9B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B8Cu;
label_2d9b8c:
    // 0x2d9b8c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2d9b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9b94: 0x0  nop
    ctx->pc = 0x2d9b94u;
    // NOP
label_2d9b98:
    // 0x2d9b98: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d9b9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D9B9Cu;
    {
        const bool branch_taken_0x2d9b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b9c) {
            ctx->pc = 0x2D9B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9b50;
        }
    }
    ctx->pc = 0x2D9BA4u;
    // 0x2d9ba4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9ba8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d9bac: 0x24573390  addiu       $s7, $v0, 0x3390
    ctx->pc = 0x2d9bacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2d9bb0: 0x96e20140  lhu         $v0, 0x140($s7)
    ctx->pc = 0x2d9bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 320)));
    // 0x2d9bb4: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x2d9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x2d9bb8: 0xa6e20140  sh          $v0, 0x140($s7)
    ctx->pc = 0x2d9bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9bbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9bc4: 0x0  nop
    ctx->pc = 0x2d9bc4u;
    // NOP
    // 0x2d9bc8: 0xe6e00128  swc1        $f0, 0x128($s7)
    ctx->pc = 0x2d9bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 296), bits); }
    // 0x2d9bcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9bd4: 0x0  nop
    ctx->pc = 0x2d9bd4u;
    // NOP
    // 0x2d9bd8: 0xe6e0012c  swc1        $f0, 0x12C($s7)
    ctx->pc = 0x2d9bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 300), bits); }
    // 0x2d9bdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9be4: 0x0  nop
    ctx->pc = 0x2d9be4u;
    // NOP
    // 0x2d9be8: 0xe6e00130  swc1        $f0, 0x130($s7)
    ctx->pc = 0x2d9be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 304), bits); }
    // 0x2d9bec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9bf0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2d9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d9bf4: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9BF4u;
    SET_GPR_U32(ctx, 31, 0x2D9BFCu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9BF4u, 0x2D9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BFCu;
label_2d9bfc:
    // 0x2d9bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c00: 0x0  nop
    ctx->pc = 0x2d9c00u;
    // NOP
    // 0x2d9c04: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2d9c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2d9c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c10: 0x0  nop
    ctx->pc = 0x2d9c10u;
    // NOP
    // 0x2d9c14: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x2d9c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x2d9c18: 0xa24000d2  sb          $zero, 0xD2($s2)
    ctx->pc = 0x2d9c18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 210), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c1c: 0xa24000ce  sb          $zero, 0xCE($s2)
    ctx->pc = 0x2d9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c20: 0xa24000d5  sb          $zero, 0xD5($s2)
    ctx->pc = 0x2d9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c24: 0xa24000d6  sb          $zero, 0xD6($s2)
    ctx->pc = 0x2d9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c28: 0xa24000d8  sb          $zero, 0xD8($s2)
    ctx->pc = 0x2d9c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c2c: 0xa24000d9  sb          $zero, 0xD9($s2)
    ctx->pc = 0x2d9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c34: 0x0  nop
    ctx->pc = 0x2d9c34u;
    // NOP
    // 0x2d9c38: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x2d9c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x2d9c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c40: 0x0  nop
    ctx->pc = 0x2d9c40u;
    // NOP
    // 0x2d9c44: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x2d9c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x2d9c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c4c: 0x0  nop
    ctx->pc = 0x2d9c4cu;
    // NOP
    // 0x2d9c50: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x2d9c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2d9c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c58: 0x0  nop
    ctx->pc = 0x2d9c58u;
    // NOP
    // 0x2d9c5c: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x2d9c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2d9c60: 0xa24000db  sb          $zero, 0xDB($s2)
    ctx->pc = 0x2d9c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c64: 0xa24000da  sb          $zero, 0xDA($s2)
    ctx->pc = 0x2d9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 218), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c68: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2d9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x2d9c6c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9c70: 0x24438b50  addiu       $v1, $v0, -0x74B0
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937424));
    // 0x2d9c74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c78: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x2d9c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x2d9c7c: 0xa64000c0  sh          $zero, 0xC0($s2)
    ctx->pc = 0x2d9c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9c80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9c84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c88: 0xa0431218  sb          $v1, 0x1218($v0)
    ctx->pc = 0x2d9c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9c8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c90: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d9c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9c94: 0x24451214  addiu       $a1, $v0, 0x1214
    ctx->pc = 0x2d9c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4628));
    // 0x2d9c98: 0xc06299c  jal         func_18A670
    ctx->pc = 0x2D9C98u;
    SET_GPR_U32(ctx, 31, 0x2D9CA0u);
    ctx->pc = 0x18A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A670u, 0x2D9C98u, 0x2D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CA0u;
label_2d9ca0:
    // 0x2d9ca0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9ca8: 0x0  nop
    ctx->pc = 0x2d9ca8u;
    // NOP
    // 0x2d9cac: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x2d9cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x2d9cb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cb8: 0x0  nop
    ctx->pc = 0x2d9cb8u;
    // NOP
    // 0x2d9cbc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2d9cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2d9cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cc4: 0x0  nop
    ctx->pc = 0x2d9cc4u;
    // NOP
    // 0x2d9cc8: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2d9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2d9ccc: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2d9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2d9cd0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2d9cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2d9cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cd8: 0x0  nop
    ctx->pc = 0x2d9cd8u;
    // NOP
    // 0x2d9cdc: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2d9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2d9ce0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2d9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2d9ce4: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2d9ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2d9ce8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2d9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d9cec: 0xc05da88  jal         func_176A20
    ctx->pc = 0x2D9CECu;
    SET_GPR_U32(ctx, 31, 0x2D9CF4u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x2D9CECu, 0x2D9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CF4u;
label_2d9cf4:
    // 0x2d9cf4: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2d9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x2d9cf8: 0xa24000dd  sb          $zero, 0xDD($s2)
    ctx->pc = 0x2d9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9cfc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d00: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x2d9d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2d9d04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d9d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d9d08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d9d0c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9D0Cu;
    {
        const bool branch_taken_0x2d9d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d0c) {
            ctx->pc = 0x2D9D5Cu;
            goto label_2d9d5c;
        }
    }
    ctx->pc = 0x2D9D14u;
    // 0x2d9d14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9d18: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d9d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d9d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d24: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d28: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x2d9d28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9d2c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d9d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d3c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d9d44: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9d48: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d4c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2d9d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9d50: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2d9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x2d9d54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9D54u;
    {
        const bool branch_taken_0x2d9d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d54) {
            ctx->pc = 0x2D9DB4u;
            goto label_2d9db4;
        }
    }
    ctx->pc = 0x2D9D5Cu;
label_2d9d5c:
    // 0x2d9d5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9D5Cu, 0x2D9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D64u;
label_2d9d64:
    // 0x2d9d64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d9d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9d68: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d9d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2d9d6c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9d70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d9d74: 0x246389c0  addiu       $v1, $v1, -0x7640
    ctx->pc = 0x2d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937024));
    // 0x2d9d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d9d7c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9d80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d84: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2d9d84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d8c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d90: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d9d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9d94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d98: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d9d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d9c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9da0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d9da0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9da4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9da8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d9da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9dac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9db0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d9db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d9db4:
    // 0x2d9db4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2d9db4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d9db8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d9db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9dbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d9dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9dc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d9dc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9dc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9dc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9dcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9ddc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2d9ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9DE8u;
}
