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

// Function: entry_0015d1d8
// Address: 0x15d1d8 - 0x15d1f4
void entry_0015d1d8_0x15d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d1d8_0x15d1d8");
#endif

    switch (ctx->pc) {
        case 0x15d1e4u: goto label_15d1e4;
        default: break;
    }

    ctx->pc = 0x15d1d8u;

    // 0x15d1d8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x15d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d1dc: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D1DCu;
    SET_GPR_U32(ctx, 31, 0x15D1E4u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D1DCu, 0x15D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1E4u;
label_15d1e4:
    // 0x15d1e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d1e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D1F4u;
}
