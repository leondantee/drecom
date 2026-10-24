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

// Function: entry_0013e770
// Address: 0x13e770 - 0x13e784
void entry_0013e770_0x13e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e770_0x13e770");
#endif

    ctx->pc = 0x13e770u;

    // 0x13e770: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x13e770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x13e774: 0x4844b000  cfc2.ni     $a0, $vi22
    ctx->pc = 0x13e774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13e778: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x13e778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x13e77c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E784u;
}
