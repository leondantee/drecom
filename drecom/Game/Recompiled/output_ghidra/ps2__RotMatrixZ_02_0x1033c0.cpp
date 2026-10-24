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

// Function: _RotMatrixZ_02
// Address: 0x1033c0 - 0x103404
void ps2__RotMatrixZ_02_0x1033c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RotMatrixZ_02_0x1033c0");
#endif

    switch (ctx->pc) {
        case 0x1033d4u: goto label_1033d4;
        default: break;
    }

    ctx->pc = 0x1033c0u;

    // 0x1033c0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1033c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1033c4: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1033c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1033c8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x1033c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033cc: 0xc040cc6  jal         func_103318
    ctx->pc = 0x1033CCu;
    SET_GPR_U32(ctx, 31, 0x1033D4u);
    ctx->pc = 0x103318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103318u, 0x1033CCu, 0x1033D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033D4u;
label_1033d4:
    // 0x1033d4: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x1033d4u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033d8: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x1033d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1033dc: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x1033dcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1033e0: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x1033e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1033e4: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x1033e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1033e8: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x1033e8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1033ec: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x1033ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1033f0: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x1033f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1033f4: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x1033f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1033f8: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x1033f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1033fc: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x1033fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x103400: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x103400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x103404u;
}
