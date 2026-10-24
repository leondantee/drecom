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

// Function: entry_0036f088
// Address: 0x36f088 - 0x36f360
void entry_0036f088_0x36f088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036f088_0x36f088");
#endif

    switch (ctx->pc) {
        case 0x36f0e8u: goto label_36f0e8;
        case 0x36f17cu: goto label_36f17c;
        case 0x36f188u: goto label_36f188;
        case 0x36f200u: goto label_36f200;
        case 0x36f20cu: goto label_36f20c;
        case 0x36f23cu: goto label_36f23c;
        case 0x36f2d0u: goto label_36f2d0;
        case 0x36f2dcu: goto label_36f2dc;
        case 0x36f354u: goto label_36f354;
        default: break;
    }

    ctx->pc = 0x36f088u;

    // 0x36f088: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f08c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x36f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f090: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x36f090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x36f094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36f098: 0xa4620014  sh          $v0, 0x14($v1)
    ctx->pc = 0x36f098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x36f09c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f0a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f0a4: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x36f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x36f0a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36f0ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x36f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36f0b0: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x36F0B0u;
    {
        const bool branch_taken_0x36f0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f0b0) {
            ctx->pc = 0x36F360u;
            return;
        }
    }
    ctx->pc = 0x36F0B8u;
    // 0x36f0b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f0bc: 0x0  nop
    ctx->pc = 0x36f0bcu;
    // NOP
    // 0x36f0c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36f0c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f0c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f0cc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x36f0d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36f0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f0d8: 0x0  nop
    ctx->pc = 0x36f0d8u;
    // NOP
    // 0x36f0dc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36f0dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36f0e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36F0E0u;
    SET_GPR_U32(ctx, 31, 0x36F0E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36F0E0u, 0x36F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0E8u;
label_36f0e8:
    // 0x36f0e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36f0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36f0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f0f0: 0x0  nop
    ctx->pc = 0x36f0f0u;
    // NOP
    // 0x36f0f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36f0f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f100: 0x0  nop
    ctx->pc = 0x36f100u;
    // NOP
    // 0x36f104: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36f104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36f108: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x36f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x36f10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f110: 0x0  nop
    ctx->pc = 0x36f110u;
    // NOP
    // 0x36f114: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f118: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x36f118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x36f11c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f120: 0x0  nop
    ctx->pc = 0x36f120u;
    // NOP
    // 0x36f124: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f12c: 0x0  nop
    ctx->pc = 0x36f12cu;
    // NOP
    // 0x36f130: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f13c: 0x0  nop
    ctx->pc = 0x36f13cu;
    // NOP
    // 0x36f140: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f148: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36f14c: 0x244204c0  addiu       $v0, $v0, 0x4C0
    ctx->pc = 0x36f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x36f150: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36f154: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36f158: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36f15c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x36f160: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36f164: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f168: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
    // 0x36f16c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36f170: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36f174: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36F174u;
    SET_GPR_U32(ctx, 31, 0x36F17Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F174u, 0x36F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F17Cu;
label_36f17c:
    // 0x36f17c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f17cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36f180: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36F180u;
    SET_GPR_U32(ctx, 31, 0x36F188u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F180u, 0x36F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F188u;
label_36f188:
    // 0x36f188: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f190: 0x0  nop
    ctx->pc = 0x36f190u;
    // NOP
    // 0x36f194: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f198: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x36f19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f1a0: 0x0  nop
    ctx->pc = 0x36f1a0u;
    // NOP
    // 0x36f1a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f1a8: 0x3c02c2dc  lui         $v0, 0xC2DC
    ctx->pc = 0x36f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49884 << 16));
    // 0x36f1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f1b0: 0x0  nop
    ctx->pc = 0x36f1b0u;
    // NOP
    // 0x36f1b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f1b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f1c0: 0x0  nop
    ctx->pc = 0x36f1c0u;
    // NOP
    // 0x36f1c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f1c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f1cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36f1d0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x36f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x36f1d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36f1d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36f1dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36f1e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x36f1e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36f1e8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f1ec: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
    // 0x36f1f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36f1f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36f1f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36F1F8u;
    SET_GPR_U32(ctx, 31, 0x36F200u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F1F8u, 0x36F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F200u;
label_36f200:
    // 0x36f200: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f200u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36f204: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36F204u;
    SET_GPR_U32(ctx, 31, 0x36F20Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F204u, 0x36F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F20Cu;
label_36f20c:
    // 0x36f20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f210: 0x0  nop
    ctx->pc = 0x36f210u;
    // NOP
    // 0x36f214: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36f218: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f21c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f220: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x36f224: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36f228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f22c: 0x0  nop
    ctx->pc = 0x36f22cu;
    // NOP
    // 0x36f230: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x36f230u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36f234: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36F234u;
    SET_GPR_U32(ctx, 31, 0x36F23Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36F234u, 0x36F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F23Cu;
label_36f23c:
    // 0x36f23c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36f240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f244: 0x0  nop
    ctx->pc = 0x36f244u;
    // NOP
    // 0x36f248: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36f24c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f254: 0x0  nop
    ctx->pc = 0x36f254u;
    // NOP
    // 0x36f258: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36f258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36f25c: 0x3c02c3af  lui         $v0, 0xC3AF
    ctx->pc = 0x36f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50095 << 16));
    // 0x36f260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f264: 0x0  nop
    ctx->pc = 0x36f264u;
    // NOP
    // 0x36f268: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f26c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x36f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x36f270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f274: 0x0  nop
    ctx->pc = 0x36f274u;
    // NOP
    // 0x36f278: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f27c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f280: 0x0  nop
    ctx->pc = 0x36f280u;
    // NOP
    // 0x36f284: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f290: 0x0  nop
    ctx->pc = 0x36f290u;
    // NOP
    // 0x36f294: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f298: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f29c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36f2a0: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x36f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x36f2a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36f2a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36f2ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36f2b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x36f2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36f2b8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f2b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f2bc: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
    // 0x36f2c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36f2c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36f2c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36F2C8u;
    SET_GPR_U32(ctx, 31, 0x36F2D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F2C8u, 0x36F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2D0u;
label_36f2d0:
    // 0x36f2d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f2d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36f2d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36F2D4u;
    SET_GPR_U32(ctx, 31, 0x36F2DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F2D4u, 0x36F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2DCu;
label_36f2dc:
    // 0x36f2dc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x36f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x36f2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f2e4: 0x0  nop
    ctx->pc = 0x36f2e4u;
    // NOP
    // 0x36f2e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36f2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36f2ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x36f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x36f2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f2f4: 0x0  nop
    ctx->pc = 0x36f2f4u;
    // NOP
    // 0x36f2f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x36f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36f2fc: 0x3c02c2dc  lui         $v0, 0xC2DC
    ctx->pc = 0x36f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49884 << 16));
    // 0x36f300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f304: 0x0  nop
    ctx->pc = 0x36f304u;
    // NOP
    // 0x36f308: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36f30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f314: 0x0  nop
    ctx->pc = 0x36f314u;
    // NOP
    // 0x36f318: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x36f318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36f31c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36f320: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36f324: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x36f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x36f328: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x36f328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36f32c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36f32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36f330: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36f330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36f334: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x36f338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36f33c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x36f33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f340: 0x24041d03  addiu       $a0, $zero, 0x1D03
    ctx->pc = 0x36f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7427));
    // 0x36f344: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36f348: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36f348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36f34c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36F34Cu;
    SET_GPR_U32(ctx, 31, 0x36F354u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36F34Cu, 0x36F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F354u;
label_36f354:
    // 0x36f354: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36f354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36f358: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36F358u;
    SET_GPR_U32(ctx, 31, 0x36F360u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36F358u, 0x36F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F360u;
}
