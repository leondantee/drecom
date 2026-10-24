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

// Function: _RotMatrixY_02
// Address: 0x103510 - 0x103558
void ps2__RotMatrixY_02_0x103510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RotMatrixY_02_0x103510");
#endif

    switch (ctx->pc) {
        case 0x103524u: goto label_103524;
        default: break;
    }

    ctx->pc = 0x103510u;

    // 0x103510: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x103510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x103514: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x103514u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x103518: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x103518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10351c: 0xc040cc6  jal         func_103318
    ctx->pc = 0x10351Cu;
    SET_GPR_U32(ctx, 31, 0x103524u);
    ctx->pc = 0x103318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103318u, 0x10351Cu, 0x103524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103524u;
label_103524:
    // 0x103524: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x103524u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103528: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x103528u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x10352c: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x10352cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103530: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x103530u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103534: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x103534u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x103538: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x103538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10353c: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x10353cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x103540: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x103540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x103544: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x103544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x103548: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x103548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10354c: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x10354cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103550: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x103550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x103554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x103554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x103558u;
}
