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

// Function: entry_00155318
// Address: 0x155318 - 0x155428
void entry_00155318_0x155318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155318_0x155318");
#endif

    switch (ctx->pc) {
        case 0x1553acu: goto label_1553ac;
        case 0x1553b8u: goto label_1553b8;
        case 0x15541cu: goto label_15541c;
        default: break;
    }

    ctx->pc = 0x155318u;

    // 0x155318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15531c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155320: 0xa4431250  sh          $v1, 0x1250($v0)
    ctx->pc = 0x155320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x155324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155328: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x155328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15532c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x15532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155330: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155334: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x155334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x155338: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15533c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15533cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155340: 0x0  nop
    ctx->pc = 0x155340u;
    // NOP
    // 0x155344: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x155344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x155348: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x155348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x15534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155350: 0x0  nop
    ctx->pc = 0x155350u;
    // NOP
    // 0x155354: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x155354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x155358: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x15535c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155360: 0x0  nop
    ctx->pc = 0x155360u;
    // NOP
    // 0x155364: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x155364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x155368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15536c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15536cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155370: 0x0  nop
    ctx->pc = 0x155370u;
    // NOP
    // 0x155374: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x155374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x155378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15537c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x155380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x155380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x155384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x155388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x155388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15538c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x155390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155394: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x155394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155398: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x15539c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15539cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1553a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1553a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1553a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1553A4u;
    SET_GPR_U32(ctx, 31, 0x1553ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1553A4u, 0x1553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ACu;
label_1553ac:
    // 0x1553ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1553acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1553b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1553B0u;
    SET_GPR_U32(ctx, 31, 0x1553B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1553B0u, 0x1553B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553B8u;
label_1553b8:
    // 0x1553b8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1553bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553c0: 0x0  nop
    ctx->pc = 0x1553c0u;
    // NOP
    // 0x1553c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1553c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1553c8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1553cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553d0: 0x0  nop
    ctx->pc = 0x1553d0u;
    // NOP
    // 0x1553d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1553d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1553d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1553dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553e0: 0x0  nop
    ctx->pc = 0x1553e0u;
    // NOP
    // 0x1553e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1553e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1553e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1553ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1553ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1553f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1553f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1553f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1553f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1553f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1553f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1553fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1553fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x155400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155404: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x155404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155408: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x15540c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15540cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155410: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155414: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x155414u;
    SET_GPR_U32(ctx, 31, 0x15541Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x155414u, 0x15541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15541Cu;
label_15541c:
    // 0x15541c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15541cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x155420: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x155420u;
    SET_GPR_U32(ctx, 31, 0x155428u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x155420u, 0x155428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155428u;
}
