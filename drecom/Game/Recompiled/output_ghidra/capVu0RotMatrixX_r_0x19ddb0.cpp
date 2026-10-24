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

// Function: capVu0RotMatrixX_r
// Address: 0x19ddb0 - 0x19de9c
void capVu0RotMatrixX_r_0x19ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0RotMatrixX_r_0x19ddb0");
#endif

    switch (ctx->pc) {
        case 0x19de20u: goto label_19de20;
        case 0x19de54u: goto label_19de54;
        default: break;
    }

    ctx->pc = 0x19ddb0u;

    // 0x19ddb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ddb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x19ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x19ddb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19ddbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ddc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19ddc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ddc4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x19ddc4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x19ddc8: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x19ddc8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x19ddcc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19ddccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19ddd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ddd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ddd4: 0x0  nop
    ctx->pc = 0x19ddd4u;
    // NOP
    // 0x19ddd8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19ddd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dddc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19dde0: 0x34260fdb  ori         $a2, $at, 0xFDB
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19dde4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19dde4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dde8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DDE8u;
    {
        const bool branch_taken_0x19dde8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dde8) {
            ctx->pc = 0x19DE00u;
            goto label_19de00;
        }
    }
    ctx->pc = 0x19DDF0u;
    // 0x19ddf0: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x19ddf0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19ddf4: 0x20070001  addi        $a3, $zero, 0x1
    ctx->pc = 0x19ddf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19ddf8: 0x8067782  j           func_19DE08
    ctx->pc = 0x19DDF8u;
    ctx->pc = 0x19DE08u;
    goto label_19de08;
    ctx->pc = 0x19DE00u;
label_19de00:
    // 0x19de00: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x19de00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x19de04: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_19de08:
    // 0x19de08: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19de08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19de0c: 0x0  nop
    ctx->pc = 0x19de0cu;
    // NOP
    // 0x19de10: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19de10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19de14: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19de18: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19DE18u;
    SET_GPR_U32(ctx, 31, 0x19DE20u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19DE18u, 0x19DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE20u;
label_19de20:
    // 0x19de20: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19de24: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19de24u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de28: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19de28u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de2c: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19de2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de30: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19de30u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de34: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x19de34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19de38: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19de38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19de3c: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19de3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19de40: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x19de40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19de44: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19de44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19de48: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x19de48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19de4c: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19de4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19de50: 0x20070003  addi        $a3, $zero, 0x3
    ctx->pc = 0x19de50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)3, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19de54:
    // 0x19de54: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x19de54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19de58: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x19de58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de5c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x19de5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de60: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x19de60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19de64: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x19de64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19de68: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x19de68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19de6c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19de6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x19de70: 0x22310010  addi        $s1, $s1, 0x10
    ctx->pc = 0x19de70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x19de74: 0x22100010  addi        $s0, $s0, 0x10
    ctx->pc = 0x19de74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x19de78: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DE78u;
    {
        const bool branch_taken_0x19de78 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x19de78) {
            ctx->pc = 0x19DE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19de54;
        }
    }
    ctx->pc = 0x19DE80u;
    // 0x19de80: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19de80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19de84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19de84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19de88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19de88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19de8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19de90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19de94: 0x3e00008  jr          $ra
    ctx->pc = 0x19DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DE9Cu;
}
