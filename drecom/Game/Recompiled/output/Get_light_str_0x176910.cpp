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

// Function: Get_light_str
// Address: 0x176910 - 0x17694c
void Get_light_str_0x176910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_light_str_0x176910");
#endif

    ctx->pc = 0x176910u;

    // 0x176910: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176914: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x176914u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176918: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x176918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17691c: 0x4be8033c  vmove.xyzw  $vf8, $vf0
    ctx->pc = 0x17691cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x176920: 0x4bc421aa  vmul.xyz    $vf6, $vf4, $vf4
    ctx->pc = 0x176920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176924: 0x4b004203  vaddw.x     $vf8, $vf8, $vf0w
    ctx->pc = 0x176924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x176928: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x176928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17692c: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x17692cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176930: 0x4b02319b  vmulw.x     $vf6, $vf6, $vf2w
    ctx->pc = 0x176930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176934: 0x4b064184  vsubx.x     $vf6, $vf8, $vf6x
    ctx->pc = 0x176934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x176938: 0x4b003190  vmaxx.x     $vf6, $vf6, $vf0x
    ctx->pc = 0x176938u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17693c: 0x48283000  qmfc2.ni    $t0, $vf6
    ctx->pc = 0x17693cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x176940: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x176940u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176944: 0x3e00008  jr          $ra
    ctx->pc = 0x176944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17694Cu;
}
