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

// Function: entry_00287e7c
// Address: 0x287e7c - 0x28810c
void entry_00287e7c_0x287e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287e7c_0x287e7c");
#endif

    switch (ctx->pc) {
        case 0x287f58u: goto label_287f58;
        case 0x287f98u: goto label_287f98;
        case 0x287fc4u: goto label_287fc4;
        case 0x287ff0u: goto label_287ff0;
        default: break;
    }

    ctx->pc = 0x287e7cu;

    // 0x287e7c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287e80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x287e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x287e84: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x287e84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287e88: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287e8c: 0x8cd60004  lw          $s6, 0x4($a2)
    ctx->pc = 0x287e8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x287e90: 0x72c0f628  paddub      $fp, $s6, $zero
    ctx->pc = 0x287e90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x287e94: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x287e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287e98: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287e9c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x287e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287ea0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x287ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x287ea4: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x287ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287ea8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x287ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287eac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x287eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x287eb0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x287eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287eb4: 0xe23023  subu        $a2, $a3, $v0
    ctx->pc = 0x287eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x287eb8: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x287eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x287ebc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x287ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x287ec0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x287ec0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ec4: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x287ec4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x287ec8: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x287ec8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287ecc: 0x70e01e28  paddub      $v1, $a3, $zero
    ctx->pc = 0x287eccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x287ed0: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x287ed4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x287ed4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287ed8: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x287ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x287edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ee0: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x287ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x287ee4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x287ee4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287ee8: 0x3c73021  addu        $a2, $fp, $a3
    ctx->pc = 0x287ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x287eec: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x287eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x287ef0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x287ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x287ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ef8: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x287efc: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x287efcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287f00: 0x2624023  subu        $t0, $s3, $v0
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x287f04: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x287f04u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287f08: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x287f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x287f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287f10: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x287f10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
    // 0x287f14: 0x70c01e28  paddub      $v1, $a2, $zero
    ctx->pc = 0x287f14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287f18: 0x3c31023  subu        $v0, $fp, $v1
    ctx->pc = 0x287f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x287f1c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x287f1cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287f24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287f28: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f2c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287f2cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287f30: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x287f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x287f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287f38: 0x0  nop
    ctx->pc = 0x287f38u;
    // NOP
    // 0x287f3c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287f40: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x287f40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287f44: 0x0  nop
    ctx->pc = 0x287f44u;
    // NOP
    // 0x287f48: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287f4c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287f4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f50: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287F50u;
    SET_GPR_U32(ctx, 31, 0x287F58u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287F50u, 0x287F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F58u;
label_287f58:
    // 0x287f58: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x287f58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f5c: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x287f5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287f60: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x287f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x287f64: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x287f64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287f68: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f6c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x287f6cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287f70: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x287f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x287f74: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x287f74u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287f78: 0x0  nop
    ctx->pc = 0x287f78u;
    // NOP
    // 0x287f7c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x287f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287f80: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x287f80u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287f84: 0x0  nop
    ctx->pc = 0x287f84u;
    // NOP
    // 0x287f88: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x287f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x287f8c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x287f8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f90: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287F90u;
    SET_GPR_U32(ctx, 31, 0x287F98u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287F90u, 0x287F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F98u;
label_287f98:
    // 0x287f98: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287f98u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287f9c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x287f9cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287fa0: 0x0  nop
    ctx->pc = 0x287fa0u;
    // NOP
    // 0x287fa4: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287fa8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287fac: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x287facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287fb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x287fb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287fb4: 0x0  nop
    ctx->pc = 0x287fb4u;
    // NOP
    // 0x287fb8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287fb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287fbc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287FBCu;
    SET_GPR_U32(ctx, 31, 0x287FC4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287FBCu, 0x287FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FC4u;
label_287fc4:
    // 0x287fc4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x287fc4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287fc8: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x287fc8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287fcc: 0x0  nop
    ctx->pc = 0x287fccu;
    // NOP
    // 0x287fd0: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x287fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287fd4: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x287fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x287fd8: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x287fd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x287fdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x287fdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287fe0: 0x0  nop
    ctx->pc = 0x287fe0u;
    // NOP
    // 0x287fe4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287fe4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287fe8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287FE8u;
    SET_GPR_U32(ctx, 31, 0x287FF0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287FE8u, 0x287FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FF0u;
label_287ff0:
    // 0x287ff0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287ff0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287ff4: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x287ff4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287ff8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287ffc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x287ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x288000: 0x3c076400  lui         $a3, 0x6400
    ctx->pc = 0x288000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25600 << 16));
    // 0x288004: 0x34e62b16  ori         $a2, $a3, 0x2B16
    ctx->pc = 0x288004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11030);
    // 0x288008: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x288008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x28800c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28800cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288014: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x288018: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x288018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28801c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x28801cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288020: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x288020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x288024: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x288024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288028: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x288028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x28802c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28802cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288030: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x288030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x288034: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x288038: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28803c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x288040: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x288040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288044: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x288044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x288048: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28804c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x288050: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x288050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x288054: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x288058: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x288058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x28805c: 0x82435dea  lb          $v1, 0x5DEA($s2)
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x288060: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x288060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x288064: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x288064u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x288068: 0x24c9ffff  addiu       $t1, $a2, -0x1
    ctx->pc = 0x288068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28806c: 0x12e90027  beq         $s7, $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x28806Cu;
    {
        const bool branch_taken_0x28806c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 9));
        if (branch_taken_0x28806c) {
            ctx->pc = 0x28810Cu;
            return;
        }
    }
    ctx->pc = 0x288074u;
    // 0x288074: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x288074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288078: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x288078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28807c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x28807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x288080: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x288080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x288084: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x288084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288088: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x288088u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x28808c: 0x0  nop
    ctx->pc = 0x28808cu;
    // NOP
    // 0x288090: 0x1010  mfhi        $v0
    ctx->pc = 0x288090u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x288094: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x288094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x288098: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x288098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28809c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28809cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2880a0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2880a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2880a4: 0x34ea5556  ori         $t2, $a3, 0x5556
    ctx->pc = 0x2880a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2880a8: 0x1430018  mult        $zero, $t2, $v1
    ctx->pc = 0x2880a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2880ac: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2880acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2880b0: 0x0  nop
    ctx->pc = 0x2880b0u;
    // NOP
    // 0x2880b4: 0x4810  mfhi        $t1
    ctx->pc = 0x2880b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2880b8: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x2880b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2880bc: 0x64a00  sll         $t1, $a2, 8
    ctx->pc = 0x2880bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2880c0: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x2880c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2880c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2880c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2880c8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2880c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2880cc: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x2880ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x2880d0: 0x35065556  ori         $a2, $t0, 0x5556
    ctx->pc = 0x2880d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x2880d4: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x2880d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2880d8: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x2880d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2880dc: 0x0  nop
    ctx->pc = 0x2880dcu;
    // NOP
    // 0x2880e0: 0x5810  mfhi        $t3
    ctx->pc = 0x2880e0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2880e4: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2880e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2880e8: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2880ec: 0x1074825  or          $t1, $t0, $a3
    ctx->pc = 0x2880ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2880f0: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x2880f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2880f4: 0x85600  sll         $t2, $t0, 24
    ctx->pc = 0x2880f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2880f8: 0x1496025  or          $t4, $t2, $t1
    ctx->pc = 0x2880f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2880fc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288100: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x288100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x288104: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288104u;
    {
        const bool branch_taken_0x288104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288104) {
            ctx->pc = 0x288140u;
            return;
        }
    }
    ctx->pc = 0x28810Cu;
}
