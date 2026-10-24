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

// Function: entry_0019db98
// Address: 0x19db98 - 0x19dbe0
void entry_0019db98_0x19db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019db98_0x19db98");
#endif

    switch (ctx->pc) {
        case 0x19dbb0u: goto label_19dbb0;
        default: break;
    }

    ctx->pc = 0x19db98u;

    // 0x19db98: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x19db98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19db9c: 0x0  nop
    ctx->pc = 0x19db9cu;
    // NOP
    // 0x19dba0: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x19dba0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19dba4: 0x3e03021  addu        $a2, $ra, $zero
    ctx->pc = 0x19dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 31), GPR_U32(ctx, 0)));
    // 0x19dba8: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19DBA8u;
    SET_GPR_U32(ctx, 31, 0x19DBB0u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19DBA8u, 0x19DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBB0u;
label_19dbb0:
    // 0x19dbb0: 0xc0f821  addu        $ra, $a2, $zero
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x19dbb4: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x19dbb4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dbb8: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x19dbb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x19dbbc: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x19dbbcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19dbc0: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x19dbc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19dbc4: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x19dbc4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19dbc8: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x19dbc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19dbcc: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x19dbccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dbd0: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x19dbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19dbd4: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x19dbd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dbd8: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x19dbd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19dbdc: 0x20070003  addi        $a3, $zero, 0x3
    ctx->pc = 0x19dbdcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)3, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    ctx->pc = 0x19dbe0u;
}
