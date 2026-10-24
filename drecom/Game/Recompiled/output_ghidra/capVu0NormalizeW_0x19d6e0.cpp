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

// Function: capVu0NormalizeW
// Address: 0x19d6e0 - 0x19d708
void capVu0NormalizeW_0x19d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0NormalizeW_0x19d6e0");
#endif

    ctx->pc = 0x19d6e0u;

    // 0x19d6e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19d6e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d6e4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x19d6e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d6e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x19d6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d6ec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x19d6ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d6f0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x19d6f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19d6f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d6f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d6f8: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x19d6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d6fc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d700: 0x3e00008  jr          $ra
    ctx->pc = 0x19D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D708u;
}
