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

// Function: Calc_scr_light
// Address: 0x176950 - 0x176a18
void Calc_scr_light_0x176950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_scr_light_0x176950");
#endif

    ctx->pc = 0x176950u;

    // 0x176950: 0x248900f0  addiu       $t1, $a0, 0xF0
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x176954: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x176958: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17695c: 0x246abd10  addiu       $t2, $v1, -0x42F0
    ctx->pc = 0x17695cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x176960: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x176964: 0x24635810  addiu       $v1, $v1, 0x5810
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22544));
    // 0x176968: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x176968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x385810u));
    // 0x17696c: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x17696cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x176970: 0xd9260010  lqc2        $vf6, 0x10($t1)
    ctx->pc = 0x176970u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x176974: 0xd9270020  lqc2        $vf7, 0x20($t1)
    ctx->pc = 0x176974u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x176978: 0xd9280030  lqc2        $vf8, 0x30($t1)
    ctx->pc = 0x176978u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x17697c: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x17697cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176980: 0xd88a0010  lqc2        $vf10, 0x10($a0)
    ctx->pc = 0x176980u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176984: 0xd88b0020  lqc2        $vf11, 0x20($a0)
    ctx->pc = 0x176984u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x176988: 0xd88c0030  lqc2        $vf12, 0x30($a0)
    ctx->pc = 0x176988u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17698c: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x17698cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176990: 0xd8d20000  lqc2        $vf18, 0x0($a2)
    ctx->pc = 0x176990u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176994: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x176994u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x176998: 0xd95f0000  lqc2        $vf31, 0x0($t2)
    ctx->pc = 0x176998u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x47BD10u));
    // 0x17699c: 0x4bf12b44  vsubx.xyzw  $vf13, $vf5, $vf17x
    ctx->pc = 0x17699cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1769a0: 0x4bf13385  vsuby.xyzw  $vf14, $vf6, $vf17y
    ctx->pc = 0x1769a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1769a4: 0x4bf13bc6  vsubz.xyzw  $vf15, $vf7, $vf17z
    ctx->pc = 0x1769a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1769a8: 0x4bd0813c  vitof0.xyz  $vf16, $vf16
    ctx->pc = 0x1769a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[16]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x1769ac: 0x4bed6abe  vmula.xyzw  $ACC, $vf13, $vf13
    ctx->pc = 0x1769acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[13]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1769b0: 0x4bee72bd  vmadda.xyzw $ACC, $vf14, $vf14
    ctx->pc = 0x1769b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[14]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1769b4: 0x4bef7fa9  vmadd.xyzw  $vf30, $vf15, $vf15
    ctx->pc = 0x1769b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1769b8: 0x4bf269bc  vmulax.xyzw $ACC, $vf13, $vf18x
    ctx->pc = 0x1769b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1769bc: 0x4bf270bd  vmadday.xyzw $ACC, $vf14, $vf18y
    ctx->pc = 0x1769bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1769c0: 0x4bf27e0a  vmaddz.xyzw $vf24, $vf15, $vf18z
    ctx->pc = 0x1769c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x1769c4: 0x4bc10580  vaddx.xyz   $vf22, $vf0, $vf1x
    ctx->pc = 0x1769c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769c8: 0x4a36033c  vmove.w     $vf22, $vf0
    ctx->pc = 0x1769c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1769cc: 0x4be8f7aa  vmul.xyzw   $vf30, $vf30, $vf8
    ctx->pc = 0x1769ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1769d0: 0x4bfeb5ac  vsub.xyzw   $vf22, $vf22, $vf30
    ctx->pc = 0x1769d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769d4: 0x4be0b590  vmaxx.xyzw  $vf22, $vf22, $vf0x
    ctx->pc = 0x1769d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769d8: 0x4bf8b5aa  vmul.xyzw   $vf22, $vf22, $vf24
    ctx->pc = 0x1769d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769dc: 0x4be0b590  vmaxx.xyzw  $vf22, $vf22, $vf0x
    ctx->pc = 0x1769dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769e0: 0x4bc18419  vmuly.xyz   $vf16, $vf16, $vf1y
    ctx->pc = 0x1769e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x1769e4: 0x4bd649bc  vmulax.xyz  $ACC, $vf9, $vf22x
    ctx->pc = 0x1769e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1769e8: 0x4bd650bd  vmadday.xyz $ACC, $vf10, $vf22y
    ctx->pc = 0x1769e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1769ec: 0x4bd658be  vmaddaz.xyz $ACC, $vf11, $vf22z
    ctx->pc = 0x1769ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1769f0: 0x4bd660bf  vmaddaw.xyz $ACC, $vf12, $vf22w
    ctx->pc = 0x1769f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1769f4: 0x4bc0fd8b  vmaddw.xyz  $vf22, $vf31, $vf0w
    ctx->pc = 0x1769f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769f8: 0x4a21059a  vmulz.w     $vf22, $vf0, $vf1z
    ctx->pc = 0x1769f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1769fc: 0x4bc0b590  vmaxx.xyz   $vf22, $vf22, $vf0x
    ctx->pc = 0x1769fcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x176a00: 0x4bd0b5aa  vmul.xyz    $vf22, $vf22, $vf16
    ctx->pc = 0x176a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x176a04: 0x4bc1b597  vminiw.xyz  $vf22, $vf22, $vf1w
    ctx->pc = 0x176a04u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x176a08: 0x4bf6b17c  vftoi0.xyzw $vf22, $vf22
    ctx->pc = 0x176a08u;
    { __m128 src = ctx->vu0_vf[22]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x176a0c: 0xf9160000  sqc2        $vf22, 0x0($t0)
    ctx->pc = 0x176a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x176a10: 0x3e00008  jr          $ra
    ctx->pc = 0x176A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176A18u;
}
