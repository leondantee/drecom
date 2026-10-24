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

// Function: entry_002869c8
// Address: 0x2869c8 - 0x286bd0
void entry_002869c8_0x2869c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002869c8_0x2869c8");
#endif

    switch (ctx->pc) {
        case 0x286ac0u: goto label_286ac0;
        case 0x286afcu: goto label_286afc;
        case 0x286b2cu: goto label_286b2c;
        case 0x286b5cu: goto label_286b5c;
        default: break;
    }

    ctx->pc = 0x2869c8u;

    // 0x2869c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2869cc: 0x24625f98  addiu       $v0, $v1, 0x5F98
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24472));
    // 0x2869d0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2869d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2869d4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2869d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2869d8: 0x24c261a0  addiu       $v0, $a2, 0x61A0
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24992));
    // 0x2869dc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2869dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2869e0: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2869e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2869e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2869e8: 0x1033023  subu        $a2, $t0, $v1
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2869ec: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x2869ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x2869f0: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2869f4: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x2869f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2869f8: 0x1471823  subu        $v1, $t2, $a3
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2869fc: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2869fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x286a00: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286a04: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x286a08: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x286a08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a0c: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286a10: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x286a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x286a14: 0x70e0f628  paddub      $fp, $a3, $zero
    ctx->pc = 0x286a14u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286a18: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x286a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286a1c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x286a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a20: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x286a20u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x286a24: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x286a24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286a28: 0x70c04e28  paddub      $t1, $a2, $zero
    ctx->pc = 0x286a28u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a2c: 0x2695821  addu        $t3, $s3, $t1
    ctx->pc = 0x286a2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286a30: 0x7160ae28  paddub      $s5, $t3, $zero
    ctx->pc = 0x286a30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x286a34: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286a38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x286a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a3c: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x286a40: 0x71004e28  paddub      $t1, $t0, $zero
    ctx->pc = 0x286a40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286a44: 0x71205628  paddub      $t2, $t1, $zero
    ctx->pc = 0x286a44u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x286a48: 0x3ca6021  addu        $t4, $fp, $t2
    ctx->pc = 0x286a48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 10)));
    // 0x286a4c: 0xafac0130  sw          $t4, 0x130($sp)
    ctx->pc = 0x286a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 12));
    // 0x286a50: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a58: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x286a58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x286a5c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x286a5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286a60: 0x70e05e28  paddub      $t3, $a3, $zero
    ctx->pc = 0x286a60u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286a64: 0x26b3023  subu        $a2, $s3, $t3
    ctx->pc = 0x286a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x286a68: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x286a68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286a6c: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a74: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x286a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x286a78: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x286a78u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286a7c: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x286a7cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x286a80: 0x3c91823  subu        $v1, $fp, $t1
    ctx->pc = 0x286a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x286a84: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286a84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286a88: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x286a8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x286a8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286a90: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x286a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286a94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x286a94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x286a98: 0x3c094420  lui         $t1, 0x4420
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17440 << 16));
    // 0x286a9c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x286a9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286aa0: 0x0  nop
    ctx->pc = 0x286aa0u;
    // NOP
    // 0x286aa4: 0x46006082  mul.s       $f2, $f12, $f0
    ctx->pc = 0x286aa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x286aa8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x286aa8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286aac: 0x0  nop
    ctx->pc = 0x286aacu;
    // NOP
    // 0x286ab0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286ab4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286ab4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286ab8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286AB8u;
    SET_GPR_U32(ctx, 31, 0x286AC0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286AB8u, 0x286AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AC0u;
label_286ac0:
    // 0x286ac0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x286ac0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ac4: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x286ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x286ac8: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x286ac8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286acc: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x286accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286ad0: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x286ad0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x286ad4: 0x3c074420  lui         $a3, 0x4420
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17440 << 16));
    // 0x286ad8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x286ad8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286adc: 0x0  nop
    ctx->pc = 0x286adcu;
    // NOP
    // 0x286ae0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x286ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286ae4: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x286ae4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286ae8: 0x0  nop
    ctx->pc = 0x286ae8u;
    // NOP
    // 0x286aec: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286af0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286af0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286af4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286AF4u;
    SET_GPR_U32(ctx, 31, 0x286AFCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286AF4u, 0x286AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AFCu;
label_286afc:
    // 0x286afc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x286afcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b00: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x286b00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286b04: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x286b04u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286b08: 0x0  nop
    ctx->pc = 0x286b08u;
    // NOP
    // 0x286b0c: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x286b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286b10: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x286b14: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x286b14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x286b18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x286b18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b1c: 0x0  nop
    ctx->pc = 0x286b1cu;
    // NOP
    // 0x286b20: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x286b20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286b24: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286B24u;
    SET_GPR_U32(ctx, 31, 0x286B2Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286B24u, 0x286B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B2Cu;
label_286b2c:
    // 0x286b2c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x286b2cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b30: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x286b30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x286b34: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x286b34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b38: 0x0  nop
    ctx->pc = 0x286b38u;
    // NOP
    // 0x286b3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286b40: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x286b44: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x286b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x286b48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x286b48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b4c: 0x0  nop
    ctx->pc = 0x286b4cu;
    // NOP
    // 0x286b50: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x286b50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286b54: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286B54u;
    SET_GPR_U32(ctx, 31, 0x286B5Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286B54u, 0x286B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B5Cu;
label_286b5c:
    // 0x286b5c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x286b5cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286b60: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x286b64: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x286b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x286b68: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x286b6c: 0x34662b16  ori         $a2, $v1, 0x2B16
    ctx->pc = 0x286b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x286b70: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x286b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x286b74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x286b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x286b78: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286b7c: 0x35070040  ori         $a3, $t0, 0x40
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x286b80: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x286b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x286b84: 0x824b5dea  lb          $t3, 0x5DEA($s2)
    ctx->pc = 0x286b84u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x286b88: 0xb163c  dsll32      $v0, $t3, 24
    ctx->pc = 0x286b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 24));
    // 0x286b8c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x286b8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x286b90: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286B90u;
    {
        const bool branch_taken_0x286b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286b90) {
            ctx->pc = 0x286BD0u;
            return;
        }
    }
    ctx->pc = 0x286B98u;
    // 0x286b98: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x286b9c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x286b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286ba0: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x286ba4: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x286ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x286ba8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286bac: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x286bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286bb0: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x286bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x286bb4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x286bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x286bb8: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x286bbc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x286bc0: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x286bc4: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x286bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x286bc8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x286BC8u;
    {
        const bool branch_taken_0x286bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286bc8) {
            ctx->pc = 0x286C60u;
            return;
        }
    }
    ctx->pc = 0x286BD0u;
}
