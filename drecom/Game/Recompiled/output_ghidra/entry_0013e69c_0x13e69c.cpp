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

// Function: entry_0013e69c
// Address: 0x13e69c - 0x13e700
void entry_0013e69c_0x13e69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e69c_0x13e69c");
#endif

    ctx->pc = 0x13e69cu;

    // 0x13e69c: 0x48a98000  qmtc2.ni    $t1, $vf16
    ctx->pc = 0x13e69cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x13e6a0: 0x48aa8800  qmtc2.ni    $t2, $vf17
    ctx->pc = 0x13e6a0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x13e6a4: 0x4bd08ca8  vadd.xyz    $vf18, $vf17, $vf16
    ctx->pc = 0x13e6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x13e6a8: 0x4a1283bc  vdiv        $Q, $vf16x, $vf18x
    ctx->pc = 0x13e6a8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13e6ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e6acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13e6b0: 0x4be00520  vaddq.xyzw  $vf20, $vf0, $Q
    ctx->pc = 0x13e6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x13e6b4: 0x4b14a1fd  vabs.x      $vf20, $vf20
    ctx->pc = 0x13e6b4u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[20], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x13e6b8: 0x4bf47bd8  vmulx.xyzw  $vf15, $vf15, $vf20x
    ctx->pc = 0x13e6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13e6bc: 0x4bf4ce58  vmulx.xyzw  $vf25, $vf25, $vf20x
    ctx->pc = 0x13e6bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x13e6c0: 0x4bf4d698  vmulx.xyzw  $vf26, $vf26, $vf20x
    ctx->pc = 0x13e6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x13e6c4: 0x4bf4ded8  vmulx.xyzw  $vf27, $vf27, $vf20x
    ctx->pc = 0x13e6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x13e6c8: 0x4bf4e718  vmulx.xyzw  $vf28, $vf28, $vf20x
    ctx->pc = 0x13e6c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x13e6cc: 0x4bef54e8  vadd.xyzw   $vf19, $vf10, $vf15
    ctx->pc = 0x13e6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x13e6d0: 0x4bf5ce68  vadd.xyzw   $vf25, $vf25, $vf21
    ctx->pc = 0x13e6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[25], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x13e6d4: 0x4bf6d6a8  vadd.xyzw   $vf26, $vf26, $vf22
    ctx->pc = 0x13e6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x13e6d8: 0x4bf7dee8  vadd.xyzw   $vf27, $vf27, $vf23
    ctx->pc = 0x13e6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x13e6dc: 0x4bf8e728  vadd.xyzw   $vf28, $vf28, $vf24
    ctx->pc = 0x13e6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x13e6e0: 0x4bfbd97c  vftoi0.xyzw $vf27, $vf27
    ctx->pc = 0x13e6e0u;
    { __m128 src = ctx->vu0_vf[27]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x13e6e4: 0xf8990000  sqc2        $vf25, 0x0($a0)
    ctx->pc = 0x13e6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x13e6e8: 0xf89a0010  sqc2        $vf26, 0x10($a0)
    ctx->pc = 0x13e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x13e6ec: 0xf89b0020  sqc2        $vf27, 0x20($a0)
    ctx->pc = 0x13e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x13e6f0: 0xf89c0030  sqc2        $vf28, 0x30($a0)
    ctx->pc = 0x13e6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x13e6f4: 0xf8930040  sqc2        $vf19, 0x40($a0)
    ctx->pc = 0x13e6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x13e6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E700u;
}
