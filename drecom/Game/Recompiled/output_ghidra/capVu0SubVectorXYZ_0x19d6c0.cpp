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

// Function: capVu0SubVectorXYZ
// Address: 0x19d6c0 - 0x19d6d8
void capVu0SubVectorXYZ_0x19d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0SubVectorXYZ_0x19d6c0");
#endif

    ctx->pc = 0x19d6c0u;

    // 0x19d6c0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19d6c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d6c4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x19d6c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19d6c8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19d6c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d6cc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D6D8u;
}
