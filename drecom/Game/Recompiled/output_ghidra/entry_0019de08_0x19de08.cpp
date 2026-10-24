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

// Function: entry_0019de08
// Address: 0x19de08 - 0x19de54
void entry_0019de08_0x19de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de08_0x19de08");
#endif

    switch (ctx->pc) {
        case 0x19de20u: goto label_19de20;
        default: break;
    }

    ctx->pc = 0x19de08u;

    // 0x19de08: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19de08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19de0c: 0x0  nop
    ctx->pc = 0x19de0cu;
    // NOP
    // 0x19de10: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19de10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19de14: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19de18: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19DE18u;
    SET_GPR_U32(ctx, 31, 0x19DE20u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19DE18u, 0x19DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE20u;
label_19de20:
    // 0x19de20: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19de24: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19de24u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de28: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19de28u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de2c: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x19de2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de30: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x19de30u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19de34: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x19de34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19de38: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x19de38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19de3c: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19de3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19de40: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x19de40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19de44: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19de44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19de48: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x19de48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19de4c: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x19de4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19de50: 0x20070003  addi        $a3, $zero, 0x3
    ctx->pc = 0x19de50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)3, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    ctx->pc = 0x19de54u;
}
