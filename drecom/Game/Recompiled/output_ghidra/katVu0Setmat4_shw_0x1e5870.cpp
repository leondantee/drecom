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

// Function: katVu0Setmat4_shw
// Address: 0x1e5870 - 0x1e58b8
void katVu0Setmat4_shw_0x1e5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("katVu0Setmat4_shw_0x1e5870");
#endif

    ctx->pc = 0x1e5870u;

    // 0x1e5870: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x1e5870u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5874: 0xd88a0010  lqc2        $vf10, 0x10($a0)
    ctx->pc = 0x1e5874u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e5878: 0xd88b0020  lqc2        $vf11, 0x20($a0)
    ctx->pc = 0x1e5878u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e587c: 0xd88c0030  lqc2        $vf12, 0x30($a0)
    ctx->pc = 0x1e587cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e5880: 0xd8ad0000  lqc2        $vf13, 0x0($a1)
    ctx->pc = 0x1e5880u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5884: 0xd8ae0010  lqc2        $vf14, 0x10($a1)
    ctx->pc = 0x1e5884u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e5888: 0xd8af0020  lqc2        $vf15, 0x20($a1)
    ctx->pc = 0x1e5888u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1e588c: 0xd8b00030  lqc2        $vf16, 0x30($a1)
    ctx->pc = 0x1e588cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1e5890: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x1e5890u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e5894: 0xd8d20010  lqc2        $vf18, 0x10($a2)
    ctx->pc = 0x1e5894u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e5898: 0xd8d30020  lqc2        $vf19, 0x20($a2)
    ctx->pc = 0x1e5898u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e589c: 0xd8d40030  lqc2        $vf20, 0x30($a2)
    ctx->pc = 0x1e589cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1e58a0: 0xd8f50000  lqc2        $vf21, 0x0($a3)
    ctx->pc = 0x1e58a0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e58a4: 0xd8f60010  lqc2        $vf22, 0x10($a3)
    ctx->pc = 0x1e58a4u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1e58a8: 0xd8f70020  lqc2        $vf23, 0x20($a3)
    ctx->pc = 0x1e58a8u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1e58ac: 0xd8f80030  lqc2        $vf24, 0x30($a3)
    ctx->pc = 0x1e58acu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1e58b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E58B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E58B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E58B8u;
}
