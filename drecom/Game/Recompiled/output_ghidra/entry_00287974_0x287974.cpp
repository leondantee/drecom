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

// Function: entry_00287974
// Address: 0x287974 - 0x287b7c
void entry_00287974_0x287974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287974_0x287974");
#endif

    switch (ctx->pc) {
        case 0x287a28u: goto label_287a28;
        case 0x287a64u: goto label_287a64;
        case 0x287a94u: goto label_287a94;
        case 0x287ac4u: goto label_287ac4;
        default: break;
    }

    ctx->pc = 0x287974u;

    // 0x287974: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x287974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287978: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x287978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28797c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28797cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287980: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287984: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x287984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x287988: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x287988u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28798c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x28798cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287990: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x287990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287994: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x287994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x287998: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x287998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x28799c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2879a0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2879a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2879a4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2879a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2879a8: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2879a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x2879ac: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2879acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2879b0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2879b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2879b4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2879b4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2879b8: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2879bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2879c0: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x2879c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2879c4: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x2879c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879c8: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x2879c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2879cc: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x2879ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2879d0: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2879d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x2879d4: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2879d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2879dc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2879dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2879e0: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x2879e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879e4: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x2879e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2879e8: 0x3c33023  subu        $a2, $fp, $v1
    ctx->pc = 0x2879e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2879ec: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x2879ecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2879f0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2879f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2879f4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2879f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2879f8: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x2879f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2879fc: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x2879fcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287a00: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x287a04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x287a04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a08: 0x0  nop
    ctx->pc = 0x287a08u;
    // NOP
    // 0x287a0c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287a0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287a10: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x287a10u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287a14: 0x0  nop
    ctx->pc = 0x287a14u;
    // NOP
    // 0x287a18: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287a1c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287a1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287a20: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A20u;
    SET_GPR_U32(ctx, 31, 0x287A28u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A20u, 0x287A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A28u;
label_287a28:
    // 0x287a28: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x287a28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a2c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287a30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287a34: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287a38: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287a38u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287a3c: 0x3c084420  lui         $t0, 0x4420
    ctx->pc = 0x287a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17440 << 16));
    // 0x287a40: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x287a40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a44: 0x0  nop
    ctx->pc = 0x287a44u;
    // NOP
    // 0x287a48: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287a4c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x287a4cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287a50: 0x0  nop
    ctx->pc = 0x287a50u;
    // NOP
    // 0x287a54: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287a58: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287a58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287a5c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A5Cu;
    SET_GPR_U32(ctx, 31, 0x287A64u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A5Cu, 0x287A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A64u;
label_287a64:
    // 0x287a64: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x287a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a68: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x287a68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287a6c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x287a6cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287a70: 0x0  nop
    ctx->pc = 0x287a70u;
    // NOP
    // 0x287a74: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287a78: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287a7c: 0x34c8cccd  ori         $t0, $a2, 0xCCCD
    ctx->pc = 0x287a7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287a80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x287a80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a84: 0x0  nop
    ctx->pc = 0x287a84u;
    // NOP
    // 0x287a88: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287a8c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287A8Cu;
    SET_GPR_U32(ctx, 31, 0x287A94u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287A8Cu, 0x287A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A94u;
label_287a94:
    // 0x287a94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287a94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287a98: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x287a98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287a9c: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x287a9cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287aa0: 0x0  nop
    ctx->pc = 0x287aa0u;
    // NOP
    // 0x287aa4: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287aa8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x287aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x287aac: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x287aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x287ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287ab4: 0x0  nop
    ctx->pc = 0x287ab4u;
    // NOP
    // 0x287ab8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287ab8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287abc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287ABCu;
    SET_GPR_U32(ctx, 31, 0x287AC4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287ABCu, 0x287AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AC4u;
label_287ac4:
    // 0x287ac4: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287ac4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287ac8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x287ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x287acc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x287accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x287ad0: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x287ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x287ad4: 0x34c72b16  ori         $a3, $a2, 0x2B16
    ctx->pc = 0x287ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x287ad8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x287ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x287adc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x287adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x287ae0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x287ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x287ae4: 0x34670040  ori         $a3, $v1, 0x40
    ctx->pc = 0x287ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x287ae8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x287ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x287aec: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x287aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287af0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x287af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x287af4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287af8: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x287afc: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x287afcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x287b00: 0x674025  or          $t0, $v1, $a3
    ctx->pc = 0x287b00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x287b04: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x287b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x287b08: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x287b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x287b0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287b10: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x287b14: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x287b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287b18: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x287b18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x287b1c: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x287b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x287b20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x287b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x287b24: 0x260a0020  addiu       $t2, $s0, 0x20
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x287b28: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x287b28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x287b2c: 0x82475dea  lb          $a3, 0x5DEA($s2)
    ctx->pc = 0x287b2cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x287b30: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x287b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x287b34: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x287b34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x287b38: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x287b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x287b3c: 0x16e9000f  bne         $s7, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x287B3Cu;
    {
        const bool branch_taken_0x287b3c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 9));
        if (branch_taken_0x287b3c) {
            ctx->pc = 0x287B7Cu;
            return;
        }
    }
    ctx->pc = 0x287B44u;
    // 0x287b44: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287b48: 0x64c00  sll         $t1, $a2, 16
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287b4c: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x287b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287b50: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x287b54: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x287b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287b58: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x287b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x287b5c: 0x1264025  or          $t0, $t1, $a2
    ctx->pc = 0x287b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x287b60: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x287b60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x287b64: 0x95e00  sll         $t3, $t1, 24
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x287b68: 0x1681825  or          $v1, $t3, $t0
    ctx->pc = 0x287b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x287b6c: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x287b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287b70: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x287b70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x287b74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x287B74u;
    {
        const bool branch_taken_0x287b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b74) {
            ctx->pc = 0x287C10u;
            return;
        }
    }
    ctx->pc = 0x287B7Cu;
}
