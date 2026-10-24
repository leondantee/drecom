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

// Function: entry_001d9cd4
// Address: 0x1d9cd4 - 0x1d9cf4
void entry_001d9cd4_0x1d9cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9cd4_0x1d9cd4");
#endif

    ctx->pc = 0x1d9cd4u;

    // 0x1d9cd4: 0xac23fce0  sw          $v1, -0x320($at)
    ctx->pc = 0x1d9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966496), GPR_U32(ctx, 3));
    // 0x1d9cd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9cdc: 0x0  nop
    ctx->pc = 0x1d9cdcu;
    // NOP
    // 0x1d9ce0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d9ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ce8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d9cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9CF4u;
}
