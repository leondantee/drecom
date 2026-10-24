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

// Function: entry_002dc764
// Address: 0x2dc764 - 0x2dc89c
void entry_002dc764_0x2dc764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc764_0x2dc764");
#endif

    switch (ctx->pc) {
        case 0x2dc778u: goto label_2dc778;
        case 0x2dc784u: goto label_2dc784;
        case 0x2dc798u: goto label_2dc798;
        case 0x2dc7a4u: goto label_2dc7a4;
        case 0x2dc7c4u: goto label_2dc7c4;
        case 0x2dc7e0u: goto label_2dc7e0;
        case 0x2dc7fcu: goto label_2dc7fc;
        case 0x2dc890u: goto label_2dc890;
        default: break;
    }

    ctx->pc = 0x2dc764u;

    // 0x2dc764: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2dc764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc768: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2dc768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2dc76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc770: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC770u;
    SET_GPR_U32(ctx, 31, 0x2DC778u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC770u, 0x2DC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC778u;
label_2dc778:
    // 0x2dc778: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc77c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC77Cu;
    SET_GPR_U32(ctx, 31, 0x2DC784u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC77Cu, 0x2DC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC784u;
label_2dc784:
    // 0x2dc784: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2dc788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2dc78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc790: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC790u;
    SET_GPR_U32(ctx, 31, 0x2DC798u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC790u, 0x2DC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC798u;
label_2dc798:
    // 0x2dc798: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc79c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC79Cu;
    SET_GPR_U32(ctx, 31, 0x2DC7A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC79Cu, 0x2DC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7A4u;
label_2dc7a4:
    // 0x2dc7a4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc7a8: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x2dc7a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x2dc7ac: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2dc7acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2dc7b0: 0x31030040  andi        $v1, $t0, 0x40
    ctx->pc = 0x2dc7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x2dc7b4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2DC7B4u;
    {
        const bool branch_taken_0x2dc7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7b4) {
            ctx->pc = 0x2DC89Cu;
            return;
        }
    }
    ctx->pc = 0x2DC7BCu;
    // 0x2dc7bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2DC7BCu;
    SET_GPR_U32(ctx, 31, 0x2DC7C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2DC7BCu, 0x2DC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7C4u;
label_2dc7c4:
    // 0x2dc7c4: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2dc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc7c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc7cc: 0x0  nop
    ctx->pc = 0x2dc7ccu;
    // NOP
    // 0x2dc7d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc7d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2dc7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2dc7d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2DC7D8u;
    SET_GPR_U32(ctx, 31, 0x2DC7E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2DC7D8u, 0x2DC7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7E0u;
label_2dc7e0:
    // 0x2dc7e0: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x2dc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dc7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc7e8: 0x0  nop
    ctx->pc = 0x2dc7e8u;
    // NOP
    // 0x2dc7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc7f0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2dc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dc7f4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2DC7F4u;
    SET_GPR_U32(ctx, 31, 0x2DC7FCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2DC7F4u, 0x2DC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7FCu;
label_2dc7fc:
    // 0x2dc7fc: 0x3c0443e1  lui         $a0, 0x43E1
    ctx->pc = 0x2dc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17377 << 16));
    // 0x2dc800: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2dc800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc804: 0x0  nop
    ctx->pc = 0x2dc804u;
    // NOP
    // 0x2dc808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc80c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2dc80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dc810: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc818: 0x0  nop
    ctx->pc = 0x2dc818u;
    // NOP
    // 0x2dc81c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2dc81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2dc820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc824: 0x0  nop
    ctx->pc = 0x2dc824u;
    // NOP
    // 0x2dc828: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2dc828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2dc82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc830: 0x0  nop
    ctx->pc = 0x2dc830u;
    // NOP
    // 0x2dc834: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2dc834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2dc838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc83c: 0x0  nop
    ctx->pc = 0x2dc83cu;
    // NOP
    // 0x2dc840: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2dc840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2dc844: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2dc844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2dc848: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2dc848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2dc84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc850: 0x0  nop
    ctx->pc = 0x2dc850u;
    // NOP
    // 0x2dc854: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2dc854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2dc858: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2dc858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2dc85c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2dc85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dc860: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2dc860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2dc864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2dc864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc868: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2dc868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2dc86c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2dc86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc870: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dc870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dc874: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dc874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dc878: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc87c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2dc87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dc880: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dc880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dc884: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2dc884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dc888: 0xc086584  jal         func_219610
    ctx->pc = 0x2DC888u;
    SET_GPR_U32(ctx, 31, 0x2DC890u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x2DC888u, 0x2DC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC890u;
label_2dc890:
    // 0x2dc890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc894: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc898: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x2dc898u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2dc89cu;
}
