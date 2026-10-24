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

// Function: capVu0RotMatrixY_r
// Address: 0x19e020 - 0x19e10c
void capVu0RotMatrixY_r_0x19e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0RotMatrixY_r_0x19e020");
#endif

    switch (ctx->pc) {
        case 0x19e090u: goto label_19e090;
        case 0x19e0c4u: goto label_19e0c4;
        default: break;
    }

    ctx->pc = 0x19e020u;

    // 0x19e020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e024: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x19e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x19e028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19e02c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e030: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19e030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19e034: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x19e034u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x19e038: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x19e038u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x19e03c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19e03cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19e040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e044: 0x0  nop
    ctx->pc = 0x19e044u;
    // NOP
    // 0x19e048: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19e048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e04c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19e050: 0x34260fdb  ori         $a2, $at, 0xFDB
    ctx->pc = 0x19e050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19e054: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19e054u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e058: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19E058u;
    {
        const bool branch_taken_0x19e058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e058) {
            ctx->pc = 0x19E070u;
            goto label_19e070;
        }
    }
    ctx->pc = 0x19E060u;
    // 0x19e060: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x19e060u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19e064: 0x20070001  addi        $a3, $zero, 0x1
    ctx->pc = 0x19e064u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19e068: 0x806781e  j           func_19E078
    ctx->pc = 0x19E068u;
    ctx->pc = 0x19E078u;
    goto label_19e078;
    ctx->pc = 0x19E070u;
label_19e070:
    // 0x19e070: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x19e070u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x19e074: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x19e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_19e078:
    // 0x19e078: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19e078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19e07c: 0x0  nop
    ctx->pc = 0x19e07cu;
    // NOP
    // 0x19e080: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19e080u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19e084: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19e084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19e088: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19E088u;
    SET_GPR_U32(ctx, 31, 0x19E090u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19E088u, 0x19E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E090u;
label_19e090:
    // 0x19e090: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19e090u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19e094: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19e094u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e098: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19e098u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e09c: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19e09cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e0a0: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19e0a0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19e0a4: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x19e0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19e0a8: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19e0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19e0ac: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19e0acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19e0b0: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x19e0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19e0b4: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19e0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19e0b8: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x19e0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19e0bc: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19e0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19e0c0: 0x20070003  addi        $a3, $zero, 0x3
    ctx->pc = 0x19e0c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)3, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19e0c4:
    // 0x19e0c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x19e0c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19e0c8: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19e0c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19e0cc: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19e0ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19e0d0: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19e0d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19e0d4: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19e0d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e0d8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x19e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19e0dc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19e0dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19e0e0: 0x22310010  addi        $s1, $s1, 0x10
    ctx->pc = 0x19e0e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x19e0e4: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x19e0e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x19e0e8: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19E0E8u;
    {
        const bool branch_taken_0x19e0e8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x19e0e8) {
            ctx->pc = 0x19E0C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e0c4;
        }
    }
    ctx->pc = 0x19E0F0u;
    // 0x19e0f0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19e0f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e0f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19e0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e0f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e0fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e100: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e104: 0x3e00008  jr          $ra
    ctx->pc = 0x19E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E10Cu;
}
