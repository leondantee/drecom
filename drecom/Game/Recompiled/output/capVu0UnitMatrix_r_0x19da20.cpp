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

// Function: capVu0UnitMatrix_r
// Address: 0x19da20 - 0x19da4c
void capVu0UnitMatrix_r_0x19da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0UnitMatrix_r_0x19da20");
#endif

    ctx->pc = 0x19da20u;

    // 0x19da20: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x19da20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19da24: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x19da24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19da28: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19da28u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19da2c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19da2cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19da30: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19da30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19da34: 0x0  nop
    ctx->pc = 0x19da34u;
    // NOP
    // 0x19da38: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x19da38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19da3c: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x19da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19da40: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x19da40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19da44: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA4Cu;
}
