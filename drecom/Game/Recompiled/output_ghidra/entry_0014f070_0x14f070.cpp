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

// Function: entry_0014f070
// Address: 0x14f070 - 0x14f220
void entry_0014f070_0x14f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f070_0x14f070");
#endif

    switch (ctx->pc) {
        case 0x14f0c8u: goto label_14f0c8;
        case 0x14f108u: goto label_14f108;
        case 0x14f148u: goto label_14f148;
        case 0x14f1a0u: goto label_14f1a0;
        case 0x14f1e0u: goto label_14f1e0;
        default: break;
    }

    ctx->pc = 0x14f070u;

    // 0x14f070: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x14f074: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14f078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f07c: 0x0  nop
    ctx->pc = 0x14f07cu;
    // NOP
    // 0x14f080: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14f080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14f084: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x14f088: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14f08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f090: 0x0  nop
    ctx->pc = 0x14f090u;
    // NOP
    // 0x14f094: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14f094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14f098: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14f09c: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14f0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0a4: 0x0  nop
    ctx->pc = 0x14f0a4u;
    // NOP
    // 0x14f0a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14f0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14f0ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0b4: 0x0  nop
    ctx->pc = 0x14f0b4u;
    // NOP
    // 0x14f0b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14f0bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f0c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x14F0C0u;
    SET_GPR_U32(ctx, 31, 0x14F0C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F0C0u, 0x14F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0C8u;
label_14f0c8:
    // 0x14f0c8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x14f0cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f0d0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f0d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14f0d8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f0dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f0e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f0e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14f0e8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f0ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f0f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f0f4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f0f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f0fc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f0fcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14f100: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x14F100u;
    SET_GPR_U32(ctx, 31, 0x14F108u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F100u, 0x14F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F108u;
label_14f108:
    // 0x14f108: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f10c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14f110: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14f114: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f11c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x14f120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f124: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f128: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f12c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f130: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f134: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f138: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f13c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f13cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14f140: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x14F140u;
    SET_GPR_U32(ctx, 31, 0x14F148u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F140u, 0x14F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F148u;
label_14f148:
    // 0x14f148: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x14f14c: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14f150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f154: 0x0  nop
    ctx->pc = 0x14f154u;
    // NOP
    // 0x14f158: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14f158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14f15c: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x14f160: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14f164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f168: 0x0  nop
    ctx->pc = 0x14f168u;
    // NOP
    // 0x14f16c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x14f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14f170: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14f174: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14f178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f17c: 0x0  nop
    ctx->pc = 0x14f17cu;
    // NOP
    // 0x14f180: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14f180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14f184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f18c: 0x0  nop
    ctx->pc = 0x14f18cu;
    // NOP
    // 0x14f190: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14f190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14f194: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f198: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x14F198u;
    SET_GPR_U32(ctx, 31, 0x14F1A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F198u, 0x14F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1A0u;
label_14f1a0:
    // 0x14f1a0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f1a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14f1a8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f1ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f1b0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14f1b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f1b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f1bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x14f1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f1c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f1c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f1cc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f1d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f1d4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f1d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14f1d8: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x14F1D8u;
    SET_GPR_U32(ctx, 31, 0x14F1E0u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F1D8u, 0x14F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1E0u;
label_14f1e0:
    // 0x14f1e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f1e4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x14f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x14f1e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f1ec: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f1f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14f1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14f1f4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x14f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x14f1f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14f1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14f1fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14f200: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x14f200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f204: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f208: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f20c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f210: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f214: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x14f214u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14f218: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x14F218u;
    SET_GPR_U32(ctx, 31, 0x14F220u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x14F218u, 0x14F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F220u;
}
