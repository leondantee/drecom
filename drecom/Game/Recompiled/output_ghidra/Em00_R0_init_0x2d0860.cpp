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

// Function: Em00_R0_init
// Address: 0x2d0860 - 0x2d1150
void Em00_R0_init_0x2d0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R0_init_0x2d0860");
#endif

    switch (ctx->pc) {
        case 0x2d0898u: goto label_2d0898;
        case 0x2d0b94u: goto label_2d0b94;
        case 0x2d0bf4u: goto label_2d0bf4;
        case 0x2d0e50u: goto label_2d0e50;
        case 0x2d1044u: goto label_2d1044;
        case 0x2d1054u: goto label_2d1054;
        case 0x2d1110u: goto label_2d1110;
        case 0x2d112cu: goto label_2d112c;
        default: break;
    }

    ctx->pc = 0x2d0860u;

    // 0x2d0860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d0864: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2d0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2d0868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d086c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d0870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d087c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2d087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2d0880: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0884: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x2d0884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2d0888: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2d0888u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2d088c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d088cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d0890: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x2D0890u;
    SET_GPR_U32(ctx, 31, 0x2D0898u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x2D0890u, 0x2D0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0898u;
label_2d0898:
    // 0x2d0898: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2d0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2d089c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d08a0: 0x0  nop
    ctx->pc = 0x2d08a0u;
    // NOP
    // 0x2d08a4: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2d08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2d08a8: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2d08a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2d08ac: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2d08b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d08b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d08b4: 0x0  nop
    ctx->pc = 0x2d08b4u;
    // NOP
    // 0x2d08b8: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x2d08b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x2d08bc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d08c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d08c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d08c4: 0x0  nop
    ctx->pc = 0x2d08c4u;
    // NOP
    // 0x2d08c8: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2d08c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x2d08cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d08d0: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d08d4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2d08d8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2d08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2d08dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d08e0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d08e4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2d08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2d08e8: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x2d08e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d08ec: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x2d08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2d08f0: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x2d08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x2d08f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d08f8: 0xac401330  sw          $zero, 0x1330($v0)
    ctx->pc = 0x2d08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x2d08fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0900: 0xac401338  sw          $zero, 0x1338($v0)
    ctx->pc = 0x2d0900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 0));
    // 0x2d0904: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0908: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d090c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0910: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0918: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2d0918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d091c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x2d091cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2d0920: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0924: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0928: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d092c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d092cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0934: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0938: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d093c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0940: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0944: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0948: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d0948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d094c: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x2d094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2d0950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0954: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0958: 0xac621350  sw          $v0, 0x1350($v1)
    ctx->pc = 0x2d0958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4944), GPR_U32(ctx, 2));
    // 0x2d095c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0960: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0964: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0968: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d096c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0970: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d0970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0974: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2d0974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0978: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d097c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0980: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0984: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d098c: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x2d098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0990: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x2d0990u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2d0994: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0998: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d099c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d099cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d09a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d09a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d09a4: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x2d09a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2d09a8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2d09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d09ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d09b0: 0xac431354  sw          $v1, 0x1354($v0)
    ctx->pc = 0x2d09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 3));
    // 0x2d09b4: 0x3c0246bb  lui         $v0, 0x46BB
    ctx->pc = 0x2d09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18107 << 16));
    // 0x2d09b8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x2d09b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2d09bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d09bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d09c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d09c4: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x2d09c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x2d09c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d09c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d09cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d09d0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2d09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2d09d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d09d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2d09dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d09e0: 0x24428360  addiu       $v0, $v0, -0x7CA0
    ctx->pc = 0x2d09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935392));
    // 0x2d09e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d09e8: 0xac821228  sw          $v0, 0x1228($a0)
    ctx->pc = 0x2d09e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4648), GPR_U32(ctx, 2));
    // 0x2d09ec: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x2d09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x2d09f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d09f4: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x2d09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x2d09f8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d09fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a00: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x2d0a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0a04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a08: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2d0a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2d0a0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0a10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0a14: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D0A14u;
    {
        const bool branch_taken_0x2d0a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0a14) {
            ctx->pc = 0x2D0B18u;
            goto label_2d0b18;
        }
    }
    ctx->pc = 0x2D0A1Cu;
    // 0x2d0a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a20: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D0A20u;
    {
        const bool branch_taken_0x2d0a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0a20) {
            ctx->pc = 0x2D0AA8u;
            goto label_2d0aa8;
        }
    }
    ctx->pc = 0x2D0A28u;
    // 0x2d0a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0A28u;
    {
        const bool branch_taken_0x2d0a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a28) {
            ctx->pc = 0x2D0A38u;
            goto label_2d0a38;
        }
    }
    ctx->pc = 0x2D0A30u;
    // 0x2d0a30: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2D0A30u;
    {
        const bool branch_taken_0x2d0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a30) {
            ctx->pc = 0x2D0B68u;
            goto label_2d0b68;
        }
    }
    ctx->pc = 0x2D0A38u;
label_2d0a38:
    // 0x2d0a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a4c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d0a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0a50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a54: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d0a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0a58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0a60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d0a68: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x2d0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x2d0a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a74: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0a78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a84: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x2d0a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x2d0a88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0a8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0a90: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2d0a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2d0a94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0a98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0a9c: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x2d0a9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2d0aa0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D0AA0u;
    {
        const bool branch_taken_0x2d0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0aa0) {
            ctx->pc = 0x2D0B68u;
            goto label_2d0b68;
        }
    }
    ctx->pc = 0x2D0AA8u;
label_2d0aa8:
    // 0x2d0aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0aac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ab0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0ab4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2d0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d0ab8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0abc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2d0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ac4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ac8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0acc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d0ad8: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x2d0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x2d0adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ae4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0ae8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0af0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0af4: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x2d0af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x2d0af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0afc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0b00: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2d0b00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2d0b04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0b08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0b0c: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x2d0b0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2d0b10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D0B10u;
    {
        const bool branch_taken_0x2d0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b10) {
            ctx->pc = 0x2D0B68u;
            goto label_2d0b68;
        }
    }
    ctx->pc = 0x2D0B18u;
label_2d0b18:
    // 0x2d0b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0b1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0b24: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d0b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d0b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0b30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d0b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0b38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0b40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d0b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d0b48: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x2d0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x2d0b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b54: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0b58: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b64: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x2d0b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
label_2d0b68:
    // 0x2d0b68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b6c: 0xac401334  sw          $zero, 0x1334($v0)
    ctx->pc = 0x2d0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4916), GPR_U32(ctx, 0));
    // 0x2d0b70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0b74: 0x24438330  addiu       $v1, $v0, -0x7CD0
    ctx->pc = 0x2d0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935344));
    // 0x2d0b78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b7c: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x2d0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x2d0b80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b84: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0b88: 0x244582d0  addiu       $a1, $v0, -0x7D30
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935248));
    // 0x2d0b8c: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x2D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0B94u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x2D0B8Cu, 0x2D0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x2d0b98: 0x26230ae8  addiu       $v1, $s1, 0xAE8
    ctx->pc = 0x2d0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2792));
    // 0x2d0b9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0ba0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2d0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2d0ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d0ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2d0ba8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2d0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bac: 0x24820ae8  addiu       $v0, $a0, 0xAE8
    ctx->pc = 0x2d0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x2d0bb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0bb4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x2d0bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d0bb8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x2d0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2d0bbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0bc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d0bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bc4: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x2d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0bcc: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0bd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d0bd8: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x2d0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2d0bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2d0be0: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x2d0be4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d0be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2d0be8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d0be8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d0bec: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2D0BECu;
    {
        const bool branch_taken_0x2d0bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bec) {
            ctx->pc = 0x2D1008u;
            goto label_2d1008;
        }
    }
    ctx->pc = 0x2D0BF4u;
label_2d0bf4:
    // 0x2d0bf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0bf8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0bfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c0c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2d0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0c10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c14: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2d0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c18: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2d0c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d0c1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c24: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2d0c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0c28: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2d0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0c2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c34: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0c38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c3c: 0x30441fff  andi        $a0, $v0, 0x1FFF
    ctx->pc = 0x2d0c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x2d0c40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0c44: 0x2443134c  addiu       $v1, $v0, 0x134C
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0c48: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0c4c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x2d0c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0c50: 0x11a0c0  sll         $s4, $s1, 3
    ctx->pc = 0x2d0c50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d0c54: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2d0c54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0c58: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2d0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2d0c5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2d0c60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c64: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0c74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d0c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0c78: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d0c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0c84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d0c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0c88: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d0c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d0c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0c90: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0c94: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0c98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d0c9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0ca0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0ca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0ca8: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x2d0ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2d0cac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0cb0: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0cb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0cbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0cc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0cc8: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x2d0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x2d0ccc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0cd0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0cd4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0cd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0ce4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0ce8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0cec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0cf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0cf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0cfc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0d00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0d08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0d10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d14: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2d0d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d0d18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0d1c: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0d20: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0d28: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0d2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d34: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d0d38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0d40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0d44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d50: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d58: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0d5c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0d60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0d68: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0d6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0d70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0d74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0d78: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0d78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0d7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0d80: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x2d0d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0d84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0d88: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0d8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0d90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0d94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0d98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0da0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2d0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2d0da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0da8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0dac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0db0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0dbc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d0dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d0dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0dd4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d0dd8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d0ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0de4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d0de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d0dec: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x2d0decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2d0df0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0df4: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0df8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0dfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0e00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0e04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e0c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2d0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2d0e10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d0e14: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2d0e14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2d0e18: 0x26428550  addiu       $v0, $s2, -0x7AB0
    ctx->pc = 0x2d0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935888));
    // 0x2d0e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0e24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d0e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e34: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d0e38: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e3c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d0e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d0e40: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x2d0e44: 0x3445010d  ori         $a1, $v0, 0x10D
    ctx->pc = 0x2d0e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2d0e48: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D0E48u;
    SET_GPR_U32(ctx, 31, 0x2D0E50u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D0E48u, 0x2D0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E50u;
label_2d0e50:
    // 0x2d0e50: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x2d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e54: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0e58: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2d0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e5c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2d0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2d0e60: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x2d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d0e64: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2d0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x2d0e68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e6c: 0x2445134c  addiu       $a1, $v0, 0x134C
    ctx->pc = 0x2d0e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0e70: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2d0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0e74: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2d0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d0e78: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0e7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d0e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0e84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0e88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d0e8c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D0E8Cu;
    {
        const bool branch_taken_0x2d0e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e8c) {
            ctx->pc = 0x2D0F58u;
            goto label_2d0f58;
        }
    }
    ctx->pc = 0x2D0E94u;
    // 0x2d0e94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e98: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0e9c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0ea0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0ea4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0ea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0eac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0eb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d0eb4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0eb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0ebc: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ec0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2d0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d0ec4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2d0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d0ec8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0ecc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0ed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ed4: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0ed8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0edc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0ee0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0ee4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0ee8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0eec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d0ef0: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0ef4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0ef8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0efc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d0f00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0f04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f08: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d0f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f10: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2d0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2d0f14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f18: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f1c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2d0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f20: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d0f24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0f34: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0f38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0f3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0f44: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2d0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d0f48: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f4c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2d0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2d0f50: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0F50u;
    {
        const bool branch_taken_0x2d0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f50) {
            ctx->pc = 0x2D1000u;
            goto label_2d1000;
        }
    }
    ctx->pc = 0x2D0F58u;
label_2d0f58:
    // 0x2d0f58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f5c: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0f68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f74: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0f78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d0f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0f7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d0f80: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2d0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d0f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0f88: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f90: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f94: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0f9c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fa8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0fac: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0fb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d0fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fb8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fbc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d0fc0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fc4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2d0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2d0fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0fcc: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0fd0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0fd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0fd8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fe4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0fe8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d0fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0fec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0ff0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2d0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d0ff4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0ff8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2d0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x2d0ffc: 0x0  nop
    ctx->pc = 0x2d0ffcu;
    // NOP
label_2d1000:
    // 0x2d1000: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1004: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2d1004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2d1008:
    // 0x2d1008: 0x2e020012  sltiu       $v0, $s0, 0x12
    ctx->pc = 0x2d1008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d100c: 0x1440fef9  bnez        $v0, . + 4 + (-0x107 << 2)
    ctx->pc = 0x2D100Cu;
    {
        const bool branch_taken_0x2d100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d100c) {
            ctx->pc = 0x2D0BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0bf4;
        }
    }
    ctx->pc = 0x2D1014u;
    // 0x2d1014: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2d1014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1018: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x2d1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2d101c: 0x245114d0  addiu       $s1, $v0, 0x14D0
    ctx->pc = 0x2d101cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2d1020: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2d1020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1024: 0x3462000a  ori         $v0, $v1, 0xA
    ctx->pc = 0x2d1024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2d1028: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2d1028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d102c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1030: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2d1030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1034: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d103c: 0xc096360  jal         func_258D80
    ctx->pc = 0x2D103Cu;
    SET_GPR_U32(ctx, 31, 0x2D1044u);
    ctx->pc = 0x258D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D80u, 0x2D103Cu, 0x2D1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1044u;
label_2d1044:
    // 0x2d1044: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d1044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d104c: 0xc096360  jal         func_258D80
    ctx->pc = 0x2D104Cu;
    SET_GPR_U32(ctx, 31, 0x2D1054u);
    ctx->pc = 0x258D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D80u, 0x2D104Cu, 0x2D1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1054u;
label_2d1054:
    // 0x2d1054: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d1054u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d1058: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d1058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d105c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1060: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1068: 0xa44301c0  sh          $v1, 0x1C0($v0)
    ctx->pc = 0x2d1068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d106c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1070: 0x2462134c  addiu       $v0, $v1, 0x134C
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d1074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1078: 0xa44001c2  sh          $zero, 0x1C2($v0)
    ctx->pc = 0x2d1078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d107c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1080: 0x2443134c  addiu       $v1, $v0, 0x134C
    ctx->pc = 0x2d1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1088: 0xac4001c8  sw          $zero, 0x1C8($v0)
    ctx->pc = 0x2d1088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 0));
    // 0x2d108c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1090: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d1094: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1098: 0x8ca401c8  lw          $a0, 0x1C8($a1)
    ctx->pc = 0x2d1098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 456)));
    // 0x2d109c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10a0: 0x2462134c  addiu       $v0, $v1, 0x134C
    ctx->pc = 0x2d10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d10a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d10a8: 0xac4401cc  sw          $a0, 0x1CC($v0)
    ctx->pc = 0x2d10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 4));
    // 0x2d10ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d10b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10b4: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d10b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d10bc: 0xac4301c4  sw          $v1, 0x1C4($v0)
    ctx->pc = 0x2d10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 3));
    // 0x2d10c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2d10c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2d10c4: 0x84248208  lh          $a0, -0x7DF8($at)
    ctx->pc = 0x2d10c4u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x398208u));
    // 0x2d10c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10cc: 0xa44410a6  sh          $a0, 0x10A6($v0)
    ctx->pc = 0x2d10ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d10d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d10d4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2d10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d10d8: 0x245114d0  addiu       $s1, $v0, 0x14D0
    ctx->pc = 0x2d10d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2d10dc: 0x8e340034  lw          $s4, 0x34($s1)
    ctx->pc = 0x2d10dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2d10e0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2d10e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d10e8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2d10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d10ec: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x2d10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2d10f0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2d10f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d10f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2d10f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2d10f8: 0xa42282e4  sh          $v0, -0x7D1C($at)
    ctx->pc = 0x2d10f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3982E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3982E4u, _value); } while (0);
    // 0x2d10fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1100: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2d1104: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d1108: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2D1108u;
    SET_GPR_U32(ctx, 31, 0x2D1110u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2D1108u, 0x2D1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1110u;
label_2d1110:
    // 0x2d1110: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d1114: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x2d1118: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x2d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2d111c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2d111cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d1120: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d1120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1124: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D1124u;
    SET_GPR_U32(ctx, 31, 0x2D112Cu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D1124u, 0x2D112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D112Cu;
label_2d112c:
    // 0x2d112c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2d112cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d1130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d113c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d113cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1144: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d1144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d1148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1150u;
}
