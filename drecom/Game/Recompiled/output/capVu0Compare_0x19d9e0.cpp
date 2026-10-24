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

// Function: capVu0Compare
// Address: 0x19d9e0 - 0x19da18
void capVu0Compare_0x19d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Compare_0x19d9e0");
#endif

    ctx->pc = 0x19d9e0u;

    // 0x19d9e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x19d9e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d9e4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19d9e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d9e8: 0x4be2082c  vsub.xyzw   $vf0, $vf1, $vf2
    ctx->pc = 0x19d9e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x19d9ec: 0x4a0002ff  vnop
    ctx->pc = 0x19d9ecu;
    // NOP operation, no action needed for VU0
    // 0x19d9f0: 0x4a0002ff  vnop
    ctx->pc = 0x19d9f0u;
    // NOP operation, no action needed for VU0
    // 0x19d9f4: 0x4a0002ff  vnop
    ctx->pc = 0x19d9f4u;
    // NOP operation, no action needed for VU0
    // 0x19d9f8: 0x4a0002ff  vnop
    ctx->pc = 0x19d9f8u;
    // NOP operation, no action needed for VU0
    // 0x19d9fc: 0x4a0002ff  vnop
    ctx->pc = 0x19d9fcu;
    // NOP operation, no action needed for VU0
    // 0x19da00: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19da00u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19da04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x19da08: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x19da08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x19da0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19da10: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA18u;
}
