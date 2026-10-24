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

// Function: Rand_set1_1
// Address: 0x19d920 - 0x19d948
void Rand_set1_1_0x19d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rand_set1_1_0x19d920");
#endif

    ctx->pc = 0x19d920u;

    // 0x19d920: 0x4b05043c  vrnext.x    $vf5, $R
    ctx->pc = 0x19d920u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x19d924: 0x4b000183  vaddw.x     $vf6, $vf0, $vf0w
    ctx->pc = 0x19d924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d928: 0x4b003183  vaddw.x     $vf6, $vf6, $vf0w
    ctx->pc = 0x19d928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d92c: 0x4b0031c3  vaddw.x     $vf7, $vf6, $vf0w
    ctx->pc = 0x19d92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19d930: 0x4b06296a  vmul.x      $vf5, $vf5, $vf6
    ctx->pc = 0x19d930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d934: 0x4b07296c  vsub.x      $vf5, $vf5, $vf7
    ctx->pc = 0x19d934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d938: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19d938u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d940: 0x3e00008  jr          $ra
    ctx->pc = 0x19D940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D948u;
}
