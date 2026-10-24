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

// Function: entry_00289ba0
// Address: 0x289ba0 - 0x289dc0
void entry_00289ba0_0x289ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289ba0_0x289ba0");
#endif

    switch (ctx->pc) {
        case 0x289c68u: goto label_289c68;
        case 0x289ca8u: goto label_289ca8;
        case 0x289cd8u: goto label_289cd8;
        case 0x289d04u: goto label_289d04;
        default: break;
    }

    ctx->pc = 0x289ba0u;

    // 0x289ba0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289ba4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x289ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289ba8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x289ba8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289bac: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x289bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x289bb0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x289bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x289bb4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x289bb4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289bb8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x289bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289bbc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289bc0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x289bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x289bc4: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x289bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x289bc8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x289bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289bcc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x289bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289bd0: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x289bd4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x289bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x289bd8: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x289bdc: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x289bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x289be0: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289be0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289be4: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x289be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289be8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289bec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x289becu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x289bf0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289bf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289bf4: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x289bf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289bf8: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x289bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x289bfc: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x289bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x289c00: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x289c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289c08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x289c0c: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x289c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x289c10: 0x3c83823  subu        $a3, $fp, $t0
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x289c14: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x289c14u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289c18: 0x153023  negu        $a2, $s5
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x289c1c: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x289c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x289c20: 0x131023  negu        $v0, $s3
    ctx->pc = 0x289c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x289c24: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x289c24u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289c28: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x289c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x289c2c: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x289c2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289c30: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x289c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x289c34: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x289c34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289c38: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x289c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289c3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x289c3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289c40: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x289c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c48: 0x0  nop
    ctx->pc = 0x289c48u;
    // NOP
    // 0x289c4c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x289c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x289c50: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289c50u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c54: 0x0  nop
    ctx->pc = 0x289c54u;
    // NOP
    // 0x289c58: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289c5c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x289c5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x289c60: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289C60u;
    SET_GPR_U32(ctx, 31, 0x289C68u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289C60u, 0x289C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C68u;
label_289c68:
    // 0x289c68: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289c68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289c6c: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x289c6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289c70: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x289c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x289c74: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289c74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c78: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x289c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289c7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x289c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x289c80: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x289c84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289c88: 0x0  nop
    ctx->pc = 0x289c88u;
    // NOP
    // 0x289c8c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x289c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289c90: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289c90u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289c94: 0x0  nop
    ctx->pc = 0x289c94u;
    // NOP
    // 0x289c98: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289c9c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x289c9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x289ca0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CA0u;
    SET_GPR_U32(ctx, 31, 0x289CA8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CA0u, 0x289CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CA8u;
label_289ca8:
    // 0x289ca8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x289ca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289cac: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x289cacu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x289cb0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x289cb0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289cb4: 0x0  nop
    ctx->pc = 0x289cb4u;
    // NOP
    // 0x289cb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289cbc: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x289cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x289cc0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x289cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x289cc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289cc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289cc8: 0x0  nop
    ctx->pc = 0x289cc8u;
    // NOP
    // 0x289ccc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x289cccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289cd0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CD0u;
    SET_GPR_U32(ctx, 31, 0x289CD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CD0u, 0x289CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CD8u;
label_289cd8:
    // 0x289cd8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x289cd8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289cdc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x289cdcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289ce0: 0x0  nop
    ctx->pc = 0x289ce0u;
    // NOP
    // 0x289ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289ce8: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x289ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x289cec: 0x3503cccd  ori         $v1, $t0, 0xCCCD
    ctx->pc = 0x289cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x289cf0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x289cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289cf4: 0x0  nop
    ctx->pc = 0x289cf4u;
    // NOP
    // 0x289cf8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x289cf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x289cfc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289CFCu;
    SET_GPR_U32(ctx, 31, 0x289D04u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289CFCu, 0x289D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D04u;
label_289d04:
    // 0x289d04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x289d04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289d08: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x289d08u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x289d0c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x289d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x289d10: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x289d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x289d14: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x289d18: 0x34662b16  ori         $a2, $v1, 0x2B16
    ctx->pc = 0x289d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x289d1c: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x289d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x289d20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x289d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x289d24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x289d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289d28: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x289d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x289d2c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x289d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x289d30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x289d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289d34: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x289d38: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x289d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289d3c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x289d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x289d40: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289d44: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x289d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x289d48: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x289d4c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x289d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x289d50: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x289d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289d54: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289d58: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289d5c: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x289d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x289d60: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x289d60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x289d64: 0xc81825  or          $v1, $a2, $t0
    ctx->pc = 0x289d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x289d68: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x289d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x289d70: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x289d70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x289d74: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x289d78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x289d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x289d7c: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x289d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x289d80: 0x16e8000f  bne         $s7, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x289D80u;
    {
        const bool branch_taken_0x289d80 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 8));
        if (branch_taken_0x289d80) {
            ctx->pc = 0x289DC0u;
            return;
        }
    }
    ctx->pc = 0x289D88u;
    // 0x289d88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289d8c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x289d90: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289d94: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x289d94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x289d98: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289d9c: 0x674825  or          $t1, $v1, $a3
    ctx->pc = 0x289d9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x289da0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x289da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x289da4: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x289da4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289da8: 0x93e00  sll         $a3, $t1, 24
    ctx->pc = 0x289da8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x289dac: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x289dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x289db0: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x289db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289db4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x289db4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x289db8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x289DB8u;
    {
        const bool branch_taken_0x289db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289db8) {
            ctx->pc = 0x289E50u;
            return;
        }
    }
    ctx->pc = 0x289DC0u;
}
