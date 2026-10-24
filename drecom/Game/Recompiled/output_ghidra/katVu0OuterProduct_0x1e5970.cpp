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

// Function: katVu0OuterProduct
// Address: 0x1e5970 - 0x1e599c
void katVu0OuterProduct_0x1e5970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0OuterProduct_0x1e5970");
#endif

    ctx->pc = 0x1e5970u;

    // 0x1e5970: 0xd8b90000  lqc2        $vf25, 0x0($a1)
    ctx->pc = 0x1e5970u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5974: 0xd8da0000  lqc2        $vf26, 0x0($a2)
    ctx->pc = 0x1e5974u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e5978: 0xd8fb0000  lqc2        $vf27, 0x0($a3)
    ctx->pc = 0x1e5978u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e597c: 0x4bf9d12c  vsub.xyzw   $vf4, $vf26, $vf25
    ctx->pc = 0x1e597cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e5980: 0x4bf9d96c  vsub.xyzw   $vf5, $vf27, $vf25
    ctx->pc = 0x1e5980u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e5984: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x1e5984u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5988: 0x4bc521ae  vopmsub.xyz $vf6, $vf4, $vf5
    ctx->pc = 0x1e5988u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e598c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x1e598cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e5990: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x1e5990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e5994: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E599Cu;
}
