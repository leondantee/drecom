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

// Function: capVu0Length
// Address: 0x19d620 - 0x19d64c
void capVu0Length_0x19d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Length_0x19d620");
#endif

    ctx->pc = 0x19d620u;

    // 0x19d620: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19d620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d624: 0x4bc4212a  vmul.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x19d624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d628: 0x4b042101  vaddy.x     $vf4, $vf4, $vf4y
    ctx->pc = 0x19d628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d62c: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z
    ctx->pc = 0x19d62cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d630: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19d630u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x19d634: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d634u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d638: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19d638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d63c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x19d63cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d644: 0x3e00008  jr          $ra
    ctx->pc = 0x19D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D64Cu;
}
