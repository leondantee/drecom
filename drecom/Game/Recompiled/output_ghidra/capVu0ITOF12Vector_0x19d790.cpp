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

// Function: capVu0ITOF12Vector
// Address: 0x19d790 - 0x19d7a4
void capVu0ITOF12Vector_0x19d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0ITOF12Vector_0x19d790");
#endif

    ctx->pc = 0x19d790u;

    // 0x19d790: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19d790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d794: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x19d794u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d798: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x19d798u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D7A4u;
}
