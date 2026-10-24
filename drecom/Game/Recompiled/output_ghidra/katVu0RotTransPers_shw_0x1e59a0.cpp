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

// Function: katVu0RotTransPers_shw
// Address: 0x1e59a0 - 0x1e5a98
void katVu0RotTransPers_shw_0x1e59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0RotTransPers_shw_0x1e59a0");
#endif

    ctx->pc = 0x1e59a0u;

    // 0x1e59a0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1e59a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e59a4: 0x4be489bc  vmulax.xyzw $ACC, $vf17, $vf4x
    ctx->pc = 0x1e59a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59a8: 0x4be490bd  vmadday.xyzw $ACC, $vf18, $vf4y
    ctx->pc = 0x1e59a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59ac: 0x4be498be  vmaddaz.xyzw $ACC, $vf19, $vf4z
    ctx->pc = 0x1e59acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59b0: 0x4be0a1cb  vmaddw.xyzw $vf7, $vf20, $vf0w
    ctx->pc = 0x1e59b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e59b4: 0x4be703bc  vdiv        $Q, $vf0w, $vf7w
    ctx->pc = 0x1e59b4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e59b8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1e59b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e59bc: 0x4be589bc  vmulax.xyzw $ACC, $vf17, $vf5x
    ctx->pc = 0x1e59bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59c0: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x1e59c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e59c4: 0x4be590bd  vmadday.xyzw $ACC, $vf18, $vf5y
    ctx->pc = 0x1e59c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59c8: 0x4be598be  vmaddaz.xyzw $ACC, $vf19, $vf5z
    ctx->pc = 0x1e59c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59cc: 0x4be0a04b  vmaddw.xyzw $vf1, $vf20, $vf0w
    ctx->pc = 0x1e59ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e59d0: 0x4be689bc  vmulax.xyzw $ACC, $vf17, $vf6x
    ctx->pc = 0x1e59d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59d4: 0x4be690bd  vmadday.xyzw $ACC, $vf18, $vf6y
    ctx->pc = 0x1e59d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59d8: 0x4be698be  vmaddaz.xyzw $ACC, $vf19, $vf6z
    ctx->pc = 0x1e59d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59dc: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x1e59dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e59e0: 0x4be103bc  vdiv        $Q, $vf0w, $vf1w
    ctx->pc = 0x1e59e0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e59e4: 0x4be8397d  vftoi4.xyzw $vf8, $vf7
    ctx->pc = 0x1e59e4u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e59e8: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e59e8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e59ec: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1e59ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e59f0: 0x4be0a08b  vmaddw.xyzw $vf2, $vf20, $vf0w
    ctx->pc = 0x1e59f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e59f4: 0x4be4a9bc  vmulax.xyzw $ACC, $vf21, $vf4x
    ctx->pc = 0x1e59f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59f8: 0x4be4b0bd  vmadday.xyzw $ACC, $vf22, $vf4y
    ctx->pc = 0x1e59f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e59fc: 0x4be4b8be  vmaddaz.xyzw $ACC, $vf23, $vf4z
    ctx->pc = 0x1e59fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a00: 0x4be0c1cb  vmaddw.xyzw $vf7, $vf24, $vf0w
    ctx->pc = 0x1e5a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a04: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e5a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a08: 0x4be203bc  vdiv        $Q, $vf0w, $vf2w
    ctx->pc = 0x1e5a08u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e5a0c: 0x4be8097d  vftoi4.xyzw $vf8, $vf1
    ctx->pc = 0x1e5a0cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a10: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e5a10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a14: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x1e5a14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5a18: 0x4be5a9bc  vmulax.xyzw $ACC, $vf21, $vf5x
    ctx->pc = 0x1e5a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a1c: 0x4be5b0bd  vmadday.xyzw $ACC, $vf22, $vf5y
    ctx->pc = 0x1e5a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a20: 0x4be5b8be  vmaddaz.xyzw $ACC, $vf23, $vf5z
    ctx->pc = 0x1e5a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a24: 0x4be0c04b  vmaddw.xyzw $vf1, $vf24, $vf0w
    ctx->pc = 0x1e5a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a28: 0x4be6a9bc  vmulax.xyzw $ACC, $vf21, $vf6x
    ctx->pc = 0x1e5a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a2c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e5a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a30: 0x4be703bc  vdiv        $Q, $vf0w, $vf7w
    ctx->pc = 0x1e5a30u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e5a34: 0x4be8117d  vftoi4.xyzw $vf8, $vf2
    ctx->pc = 0x1e5a34u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a38: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e5a38u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a3c: 0xf8880020  sqc2        $vf8, 0x20($a0)
    ctx->pc = 0x1e5a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5a40: 0x4be6b0bd  vmadday.xyzw $ACC, $vf22, $vf6y
    ctx->pc = 0x1e5a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a44: 0x4be6b8be  vmaddaz.xyzw $ACC, $vf23, $vf6z
    ctx->pc = 0x1e5a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e5a48: 0x4be0c08b  vmaddw.xyzw $vf2, $vf24, $vf0w
    ctx->pc = 0x1e5a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5a4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5a50: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x1e5a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a54: 0x4be103bc  vdiv        $Q, $vf0w, $vf1w
    ctx->pc = 0x1e5a54u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e5a58: 0x4be8397d  vftoi4.xyzw $vf8, $vf7
    ctx->pc = 0x1e5a58u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a5c: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e5a5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a60: 0xf8880030  sqc2        $vf8, 0x30($a0)
    ctx->pc = 0x1e5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5a64: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5a64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5a68: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e5a68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a6c: 0x4be203bc  vdiv        $Q, $vf0w, $vf2w
    ctx->pc = 0x1e5a6cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1e5a70: 0x4be8097d  vftoi4.xyzw $vf8, $vf1
    ctx->pc = 0x1e5a70u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a74: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e5a74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a78: 0xf8880040  sqc2        $vf8, 0x40($a0)
    ctx->pc = 0x1e5a78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5a7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5a7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5a80: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e5a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a84: 0x4be8117d  vftoi4.xyzw $vf8, $vf2
    ctx->pc = 0x1e5a84u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a88: 0x4a28033d  vmr32.w     $vf8, $vf0
    ctx->pc = 0x1e5a88u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a8c: 0xf8880050  sqc2        $vf8, 0x50($a0)
    ctx->pc = 0x1e5a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A98u;
}
