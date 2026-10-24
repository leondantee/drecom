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

// Function: entry_002ff73c
// Address: 0x2ff73c - 0x2ff984
void entry_002ff73c_0x2ff73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff73c_0x2ff73c");
#endif

    switch (ctx->pc) {
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff980u: goto label_2ff980;
        default: break;
    }

    ctx->pc = 0x2ff73cu;

    // 0x2ff73c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff740: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ff744: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ff744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff748: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ff748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ff74c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x2ff74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x2ff750: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x2ff750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ff754: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff758: 0x3c0646ab  lui         $a2, 0x46AB
    ctx->pc = 0x2ff758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18091 << 16));
    // 0x2ff75c: 0x34c4e000  ori         $a0, $a2, 0xE000
    ctx->pc = 0x2ff75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x2ff760: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2ff760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff764: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2ff764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff768: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff76c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2ff76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2ff770: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ff774: 0x24671b40  addiu       $a3, $v1, 0x1B40
    ctx->pc = 0x2ff774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x2ff778: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ff778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff77c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2ff77cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff780: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2FF780u;
    SET_GPR_U32(ctx, 31, 0x2FF788u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2FF780u, 0x2FF788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF788u;
label_2ff788:
    // 0x2ff788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ff788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff78c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF78Cu;
    SET_GPR_U32(ctx, 31, 0x2FF794u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF78Cu, 0x2FF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF794u;
label_2ff794:
    // 0x2ff794: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ff794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff79c: 0x0  nop
    ctx->pc = 0x2ff79cu;
    // NOP
    // 0x2ff7a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff7a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff7a8: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff7ac: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2ff7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ff7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff7b4: 0x0  nop
    ctx->pc = 0x2ff7b4u;
    // NOP
    // 0x2ff7b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff7bc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF7BCu;
    SET_GPR_U32(ctx, 31, 0x2FF7C4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF7BCu, 0x2FF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7C4u;
label_2ff7c4:
    // 0x2ff7c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ff7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff7c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff7cc: 0x0  nop
    ctx->pc = 0x2ff7ccu;
    // NOP
    // 0x2ff7d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff7d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff7d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff7e0: 0x0  nop
    ctx->pc = 0x2ff7e0u;
    // NOP
    // 0x2ff7e4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff7e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF7E8u;
    SET_GPR_U32(ctx, 31, 0x2FF7F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF7E8u, 0x2FF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7F0u;
label_2ff7f0:
    // 0x2ff7f0: 0x3c0744bb  lui         $a3, 0x44BB
    ctx->pc = 0x2ff7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17595 << 16));
    // 0x2ff7f4: 0x34e38000  ori         $v1, $a3, 0x8000
    ctx->pc = 0x2ff7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2ff7f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff7fc: 0x0  nop
    ctx->pc = 0x2ff7fcu;
    // NOP
    // 0x2ff800: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff804: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff808: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x2ff808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x2ff80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff810: 0x0  nop
    ctx->pc = 0x2ff810u;
    // NOP
    // 0x2ff814: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff818: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF818u;
    SET_GPR_U32(ctx, 31, 0x2FF820u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF818u, 0x2FF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF820u;
label_2ff820:
    // 0x2ff820: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2ff820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2ff824: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2ff824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ff828: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ff828u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff82c: 0x0  nop
    ctx->pc = 0x2ff82cu;
    // NOP
    // 0x2ff830: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff834: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff838: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff83c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff840: 0x0  nop
    ctx->pc = 0x2ff840u;
    // NOP
    // 0x2ff844: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff848: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff84c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2ff84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff850: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ff850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ff854: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff858: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ff858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ff85c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ff85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff860: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x2ff860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ff864: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2ff864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff868: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ff868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff86c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff874: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff878: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff87c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff880: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2ff880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff884: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2ff884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x2ff888: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff88c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff890: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff894: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff898: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff89c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff8a0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ff8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff8a4: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2ff8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ff8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff8b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ff8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ff8b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff8b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff8bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff8c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ff8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ff8c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ff8c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff8c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8cc: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x2ff8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff8d0: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff8d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff8dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff8e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff8e4: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x2ff8e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff8e8: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x2ff8e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2ff8ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff8f0: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff8f4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff8f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff8fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff900: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff908: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ff908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff90c: 0x1233825  or          $a3, $t1, $v1
    ctx->pc = 0x2ff90cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2ff910: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff914: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF914u;
    SET_GPR_U32(ctx, 31, 0x2FF91Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF914u, 0x2FF91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF91Cu;
label_2ff91c:
    // 0x2ff91c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff91cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff920: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF920u;
    SET_GPR_U32(ctx, 31, 0x2FF928u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF920u, 0x2FF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF928u;
label_2ff928:
    // 0x2ff928: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ff928u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff92c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2ff92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff930: 0x34820011  ori         $v0, $a0, 0x11
    ctx->pc = 0x2ff930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2ff934: 0x2022826  xor         $a1, $s0, $v0
    ctx->pc = 0x2ff934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2ff938: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x2ff938u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ff93c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff940: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ff944: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ff944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff948: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ff948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ff94c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff950: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x2ff950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x2ff954: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2ff954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2ff958: 0xe24824  and         $t1, $a3, $v0
    ctx->pc = 0x2ff958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2ff95c: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ff95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff960: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff964: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ff964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff968: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2ff968u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2ff96c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF96Cu;
    SET_GPR_U32(ctx, 31, 0x2FF974u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF96Cu, 0x2FF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF974u;
label_2ff974:
    // 0x2ff974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff978: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF978u;
    SET_GPR_U32(ctx, 31, 0x2FF980u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF978u, 0x2FF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF980u;
label_2ff980:
    // 0x2ff980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2ff984u;
}
