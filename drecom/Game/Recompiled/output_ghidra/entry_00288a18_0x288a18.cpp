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

// Function: entry_00288a18
// Address: 0x288a18 - 0x288c98
void entry_00288a18_0x288a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288a18_0x288a18");
#endif

    switch (ctx->pc) {
        case 0x288a6cu: goto label_288a6c;
        case 0x288b80u: goto label_288b80;
        case 0x288bc0u: goto label_288bc0;
        case 0x288bf0u: goto label_288bf0;
        case 0x288c20u: goto label_288c20;
        default: break;
    }

    ctx->pc = 0x288a18u;

    // 0x288a18: 0x2af60002  slti        $s6, $s7, 0x2
    ctx->pc = 0x288a18u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288a1c: 0x16c0ff3a  bnez        $s6, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x288A1Cu;
    {
        const bool branch_taken_0x288a1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x288a1c) {
            ctx->pc = 0x288708u;
            return;
        }
    }
    ctx->pc = 0x288A24u;
    // 0x288a24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288a28: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a2c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x288a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x288a30: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x288a34: 0x34e31043  ori         $v1, $a3, 0x1043
    ctx->pc = 0x288a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4163);
    // 0x288a38: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x288a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a3c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x288a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x288a40: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x288a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288a44: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x288a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x288a48: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x288a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x288a4c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a50: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x288a50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x288a54: 0x2656001c  addiu       $s6, $s2, 0x1C
    ctx->pc = 0x288a54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288a58: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x288a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x288a5c: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x288a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a60: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x288a60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288a64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x288A64u;
    SET_GPR_U32(ctx, 31, 0x288A6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x288A64u, 0x288A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A6Cu;
label_288a6c:
    // 0x288a6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288a6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288a70: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x288a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x288a74: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x288a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x288a78: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x288a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x288a7c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x288a80: 0x24c35fac  addiu       $v1, $a2, 0x5FAC
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24492));
    // 0x288a84: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x288a84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288a88: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x288a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x288a8c: 0x24e361a0  addiu       $v1, $a3, 0x61A0
    ctx->pc = 0x288a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24992));
    // 0x288a90: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x288a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x288a94: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x288a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288a98: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x288a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288a9c: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x288a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x288aa0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x288aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x288aa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x288aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288aa8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x288aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288aac: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x288aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x288ab0: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x288ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x288ab4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x288ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288ab8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x288ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288abc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x288abcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288ac0: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x288ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288ac4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x288ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x288ac8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x288ac8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288acc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x288accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288ad0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x288ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288ad4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x288ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x288ad8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288ad8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288adc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x288adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x288ae0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288ae0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288ae4: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288ae8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288aec: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x288aecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x288af0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288af4: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x288af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x288af8: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x288af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x288afc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x288b00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x288b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288b04: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x288b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x288b08: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x288b08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b0c: 0x2663023  subu        $a2, $s3, $a2
    ctx->pc = 0x288b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x288b10: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x288b10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x288b14: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x288b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x288b18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288b1c: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x288b1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
    // 0x288b20: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x288b20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b24: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x288b24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b28: 0x3c74023  subu        $t0, $fp, $a3
    ctx->pc = 0x288b28u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x288b2c: 0x7100f628  paddub      $fp, $t0, $zero
    ctx->pc = 0x288b2cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b30: 0x153023  negu        $a2, $s5
    ctx->pc = 0x288b30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x288b34: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x288b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x288b38: 0x131823  negu        $v1, $s3
    ctx->pc = 0x288b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x288b3c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288b3cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288b40: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x288b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x288b44: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x288b44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288b48: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x288b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288b50: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b54: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288b58: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x288b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x288b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x288b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288b60: 0x0  nop
    ctx->pc = 0x288b60u;
    // NOP
    // 0x288b64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288b68: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288b68u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288b6c: 0x0  nop
    ctx->pc = 0x288b6cu;
    // NOP
    // 0x288b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288b74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288b78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288B78u;
    SET_GPR_U32(ctx, 31, 0x288B80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288B78u, 0x288B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B80u;
label_288b80:
    // 0x288b80: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x288b80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288b84: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x288b84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288b88: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x288b8c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x288b8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288b90: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x288b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b94: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x288b94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288b98: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x288b9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288b9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288ba0: 0x0  nop
    ctx->pc = 0x288ba0u;
    // NOP
    // 0x288ba4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x288ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288ba8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288ba8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bac: 0x0  nop
    ctx->pc = 0x288bacu;
    // NOP
    // 0x288bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x288bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x288bb4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x288bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288bb8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288BB8u;
    SET_GPR_U32(ctx, 31, 0x288BC0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288BB8u, 0x288BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BC0u;
label_288bc0:
    // 0x288bc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288bc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288bc4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x288bc4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288bc8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x288bc8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bcc: 0x0  nop
    ctx->pc = 0x288bccu;
    // NOP
    // 0x288bd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x288bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288bd4: 0x3c083f4c  lui         $t0, 0x3F4C
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16204 << 16));
    // 0x288bd8: 0x3507cccd  ori         $a3, $t0, 0xCCCD
    ctx->pc = 0x288bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x288bdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x288bdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288be0: 0x0  nop
    ctx->pc = 0x288be0u;
    // NOP
    // 0x288be4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288be4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288be8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288BE8u;
    SET_GPR_U32(ctx, 31, 0x288BF0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288BE8u, 0x288BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BF0u;
label_288bf0:
    // 0x288bf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x288bf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288bf4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x288bf4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288bf8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x288bf8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bfc: 0x0  nop
    ctx->pc = 0x288bfcu;
    // NOP
    // 0x288c00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x288c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288c04: 0x3c093f4c  lui         $t1, 0x3F4C
    ctx->pc = 0x288c04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16204 << 16));
    // 0x288c08: 0x3526cccd  ori         $a2, $t1, 0xCCCD
    ctx->pc = 0x288c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)52429);
    // 0x288c0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x288c0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288c10: 0x0  nop
    ctx->pc = 0x288c10u;
    // NOP
    // 0x288c14: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x288c14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x288c18: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x288C18u;
    SET_GPR_U32(ctx, 31, 0x288C20u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x288C18u, 0x288C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C20u;
label_288c20:
    // 0x288c20: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x288c20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288c24: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x288c24u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288c28: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x288c28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x288c2c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x288c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x288c30: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x288c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x288c34: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x288c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x288c38: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x288c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x288c3c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288c40: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x288c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288c44: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x288c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x288c48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x288c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x288c4c: 0x82485dea  lb          $t0, 0x5DEA($s2)
    ctx->pc = 0x288c4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x288c50: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x288c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x288c54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x288c54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x288c58: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C98u;
            return;
        }
    }
    ctx->pc = 0x288C60u;
    // 0x288c60: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288c64: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x288c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288c68: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x288c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288c6c: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x288c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x288c70: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288c74: 0x1233025  or          $a2, $t1, $v1
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x288c78: 0x1464825  or          $t1, $t2, $a2
    ctx->pc = 0x288c78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x288c7c: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x288c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288c80: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x288c84: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x288c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x288c88: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288c8c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x288c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x288c90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x288C90u;
    {
        const bool branch_taken_0x288c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288c90) {
            ctx->pc = 0x288D28u;
            return;
        }
    }
    ctx->pc = 0x288C98u;
}
