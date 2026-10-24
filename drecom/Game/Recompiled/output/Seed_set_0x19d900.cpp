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

// Function: Seed_set
// Address: 0x19d900 - 0x19d918
void Seed_set_0x19d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Seed_set_0x19d900");
#endif

    ctx->pc = 0x19d900u;

    // 0x19d900: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x19d900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19d904: 0x0  nop
    ctx->pc = 0x19d904u;
    // NOP
    // 0x19d908: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19d908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19d90c: 0x4a002c3e  vrinit      $R, $vf5x
    ctx->pc = 0x19d90cu;
    {
    float src = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0)));
    uint32_t seed; std::memcpy(&seed, &src, sizeof(seed));

    // PS2 uses a specific LFSR initialization pattern
    if (seed == 0) seed = 1;

    uint32_t r0 = seed;
    uint32_t r1 = seed * 0x41C64E6D + 0x3039;
    uint32_t r2 = r1 * 0x41C64E6D + 0x3039;
    uint32_t r3 = r2 * 0x41C64E6D + 0x3039;

    ctx->vu0_r = _mm_castsi128_ps(_mm_set_epi32(r3, r2, r1, r0));
}
    // 0x19d910: 0x3e00008  jr          $ra
    ctx->pc = 0x19D910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D918u;
}
