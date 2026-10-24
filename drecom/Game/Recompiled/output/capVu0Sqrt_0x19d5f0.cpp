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

// Function: capVu0Sqrt
// Address: 0x19d5f0 - 0x19d618
void capVu0Sqrt_0x19d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Sqrt_0x19d5f0");
#endif

    ctx->pc = 0x19d5f0u;

    // 0x19d5f0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19d5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19d5f4: 0x0  nop
    ctx->pc = 0x19d5f4u;
    // NOP
    // 0x19d5f8: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x19d5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19d5fc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19d5fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x19d600: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d600u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d604: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19d604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d608: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x19d608u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d610: 0x3e00008  jr          $ra
    ctx->pc = 0x19D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D618u;
}
