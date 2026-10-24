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

// Function: capVu0UnitRotMatrixX_r
// Address: 0x19df60 - 0x19e01c
void capVu0UnitRotMatrixX_r_0x19df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0UnitRotMatrixX_r_0x19df60");
#endif

    switch (ctx->pc) {
        case 0x19dfc8u: goto label_19dfc8;
        default: break;
    }

    ctx->pc = 0x19df60u;

    // 0x19df60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19df64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19df68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19df6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19df6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19df70: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x19df70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x19df74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19df74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19df78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19df78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19df7c: 0x0  nop
    ctx->pc = 0x19df7cu;
    // NOP
    // 0x19df80: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19df80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19df84: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19df88: 0x34260fdb  ori         $a2, $at, 0xFDB
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19df8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19df8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19df90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DF90u;
    {
        const bool branch_taken_0x19df90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19df90) {
            ctx->pc = 0x19DFA8u;
            goto label_19dfa8;
        }
    }
    ctx->pc = 0x19DF98u;
    // 0x19df98: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x19df98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19df9c: 0x20070001  addi        $a3, $zero, 0x1
    ctx->pc = 0x19df9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19dfa0: 0x80677ec  j           func_19DFB0
    ctx->pc = 0x19DFA0u;
    ctx->pc = 0x19DFB0u;
    goto label_19dfb0;
    ctx->pc = 0x19DFA8u;
label_19dfa8:
    // 0x19dfa8: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x19dfa8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x19dfac: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x19dfacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_19dfb0:
    // 0x19dfb0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19dfb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19dfb4: 0x0  nop
    ctx->pc = 0x19dfb4u;
    // NOP
    // 0x19dfb8: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19dfb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19dfbc: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19dfc0: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19DFC0u;
    SET_GPR_U32(ctx, 31, 0x19DFC8u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19DFC0u, 0x19DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFC8u;
label_19dfc8:
    // 0x19dfc8: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19dfcc: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19dfccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dfd0: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19dfd0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dfd4: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19dfd4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dfd8: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19dfd8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dfdc: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x19dfdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dfe0: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19dfe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19dfe4: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19dfe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dfe8: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x19dfe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dfec: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19dfecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dff0: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x19dff0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dff4: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19dff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dff8: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x19dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19dffc: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x19dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19e000: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x19e000u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x19e004: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19e004u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e00c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e010: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e014: 0x3e00008  jr          $ra
    ctx->pc = 0x19E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E01Cu;
}
