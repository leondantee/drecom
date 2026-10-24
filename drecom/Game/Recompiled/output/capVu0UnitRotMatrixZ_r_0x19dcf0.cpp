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

// Function: capVu0UnitRotMatrixZ_r
// Address: 0x19dcf0 - 0x19dda8
void capVu0UnitRotMatrixZ_r_0x19dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0UnitRotMatrixZ_r_0x19dcf0");
#endif

    switch (ctx->pc) {
        case 0x19dd58u: goto label_19dd58;
        default: break;
    }

    ctx->pc = 0x19dcf0u;

    // 0x19dcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dcf4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19dcf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19dcfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19dcfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19dd00: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x19dd00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x19dd04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19dd04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19dd08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd0c: 0x0  nop
    ctx->pc = 0x19dd0cu;
    // NOP
    // 0x19dd10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19dd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd14: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19dd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19dd18: 0x34260fdb  ori         $a2, $at, 0xFDB
    ctx->pc = 0x19dd18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19dd1c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19dd1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DD20u;
    {
        const bool branch_taken_0x19dd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd20) {
            ctx->pc = 0x19DD38u;
            goto label_19dd38;
        }
    }
    ctx->pc = 0x19DD28u;
    // 0x19dd28: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x19dd28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19dd2c: 0x20070001  addi        $a3, $zero, 0x1
    ctx->pc = 0x19dd2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19dd30: 0x8067750  j           func_19DD40
    ctx->pc = 0x19DD30u;
    ctx->pc = 0x19DD40u;
    goto label_19dd40;
    ctx->pc = 0x19DD38u;
label_19dd38:
    // 0x19dd38: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x19dd38u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x19dd3c: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x19dd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_19dd40:
    // 0x19dd40: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19dd40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19dd44: 0x0  nop
    ctx->pc = 0x19dd44u;
    // NOP
    // 0x19dd48: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19dd48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19dd4c: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19dd50: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19DD50u;
    SET_GPR_U32(ctx, 31, 0x19DD58u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19DD50u, 0x19DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD58u;
label_19dd58:
    // 0x19dd58: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19dd5c: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19dd5cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dd60: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19dd60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dd64: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x19dd64u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19dd68: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x19dd68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19dd6c: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x19dd6cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dd70: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19dd70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dd74: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x19dd74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dd78: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19dd78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dd7c: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x19dd7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dd80: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19dd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dd84: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x19dd84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19dd88: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x19dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19dd8c: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x19dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x19dd90: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19dd90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dd94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19dd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dd9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19dd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19dda0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DDA8u;
}
