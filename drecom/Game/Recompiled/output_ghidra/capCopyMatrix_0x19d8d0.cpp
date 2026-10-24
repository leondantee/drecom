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

// Function: capCopyMatrix
// Address: 0x19d8d0 - 0x19d8f8
void capCopyMatrix_0x19d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capCopyMatrix_0x19d8d0");
#endif

    ctx->pc = 0x19d8d0u;

    // 0x19d8d0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x19d8d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d8d4: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x19d8d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19d8d8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19d8d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19d8dc: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19d8dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x19d8e0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d8e4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x19d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d8e8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x19d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19d8ec: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x19d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19d8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D8F8u;
}
