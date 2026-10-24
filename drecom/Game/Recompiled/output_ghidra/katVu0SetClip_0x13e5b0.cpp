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

// Function: katVu0SetClip
// Address: 0x13e5b0 - 0x13e5d8
void katVu0SetClip_0x13e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0SetClip_0x13e5b0");
#endif

    ctx->pc = 0x13e5b0u;

    // 0x13e5b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13e5b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e5b4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x13e5b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13e5b8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x13e5b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13e5bc: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x13e5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13e5c0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x13e5c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e5c4: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x13e5c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13e5c8: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x13e5c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13e5cc: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x13e5ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13e5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E5D8u;
}
