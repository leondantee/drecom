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

// Function: entry_002727f8
// Address: 0x2727f8 - 0x272960
void entry_002727f8_0x2727f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002727f8_0x2727f8");
#endif

    switch (ctx->pc) {
        case 0x2728a4u: goto label_2728a4;
        case 0x2728f0u: goto label_2728f0;
        case 0x272900u: goto label_272900;
        default: break;
    }

    ctx->pc = 0x2727f8u;

    // 0x2727f8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2727f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2727fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2727fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272800: 0x28410047  slti        $at, $v0, 0x47
    ctx->pc = 0x272800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x272804: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x272804u;
    {
        const bool branch_taken_0x272804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272804) {
            ctx->pc = 0x272960u;
            return;
        }
    }
    ctx->pc = 0x27280Cu;
    // 0x27280c: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x27280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x272810: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x272810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x272814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272818: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x27281c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272820: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x272820u;
    {
        const bool branch_taken_0x272820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272820) {
            ctx->pc = 0x272960u;
            return;
        }
    }
    ctx->pc = 0x272828u;
    // 0x272828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27282c: 0x0  nop
    ctx->pc = 0x27282cu;
    // NOP
    // 0x272830: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x272830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x272834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272838: 0x0  nop
    ctx->pc = 0x272838u;
    // NOP
    // 0x27283c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x272840: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x272840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x272844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272848: 0x0  nop
    ctx->pc = 0x272848u;
    // NOP
    // 0x27284c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x27284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x272850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272858: 0x0  nop
    ctx->pc = 0x272858u;
    // NOP
    // 0x27285c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x27285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x272860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272864: 0x0  nop
    ctx->pc = 0x272864u;
    // NOP
    // 0x272868: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x272868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27286c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27286cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272870: 0x0  nop
    ctx->pc = 0x272870u;
    // NOP
    // 0x272874: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272878: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x27287c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27287cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272880: 0x0  nop
    ctx->pc = 0x272880u;
    // NOP
    // 0x272884: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x272884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x272888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27288c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27288cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272890: 0x0  nop
    ctx->pc = 0x272890u;
    // NOP
    // 0x272894: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x272894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x272898: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x272898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27289c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27289Cu;
    SET_GPR_U32(ctx, 31, 0x2728A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27289Cu, 0x2728A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728A4u;
label_2728a4:
    // 0x2728a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2728a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2728a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2728a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2728ac: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x2728acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2728b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2728b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2728b4: 0x24479240  addiu       $a3, $v0, -0x6DC0
    ctx->pc = 0x2728b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x2728b8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2728b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2728bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2728bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2728c0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2728c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2728c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2728c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2728c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2728cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2728ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2728d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2728d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2728d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2728d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728dc: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2728dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2728e0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2728e4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2728e4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2728e8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2728E8u;
    SET_GPR_U32(ctx, 31, 0x2728F0u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2728E8u, 0x2728F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728F0u;
label_2728f0:
    // 0x2728f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2728f4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2728f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2728F8u;
    SET_GPR_U32(ctx, 31, 0x272900u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2728F8u, 0x272900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272900u;
label_272900:
    // 0x272900: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x272900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x272904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272908: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x272908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x27290c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x27290Cu;
    {
        const bool branch_taken_0x27290c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27290c) {
            ctx->pc = 0x272960u;
            return;
        }
    }
    ctx->pc = 0x272914u;
    // 0x272914: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x272914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x272918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27291c: 0x284100b4  slti        $at, $v0, 0xB4
    ctx->pc = 0x27291cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x272920: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x272920u;
    {
        const bool branch_taken_0x272920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272920) {
            ctx->pc = 0x272960u;
            return;
        }
    }
    ctx->pc = 0x272928u;
    // 0x272928: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x272928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x27292c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x27292cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272930: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x272930u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x272934: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x272934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27293c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27293Cu;
    {
        const bool branch_taken_0x27293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27293c) {
            ctx->pc = 0x272960u;
            return;
        }
    }
    ctx->pc = 0x272944u;
    // 0x272944: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x272948: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27294c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x27294cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x272950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272954: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x272954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272958: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x272958u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x27295c: 0x0  nop
    ctx->pc = 0x27295cu;
    // NOP
    ctx->pc = 0x272960u;
}
