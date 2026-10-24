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

// Function: entry_0015d8b0
// Address: 0x15d8b0 - 0x15d8cc
void entry_0015d8b0_0x15d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d8b0_0x15d8b0");
#endif

    switch (ctx->pc) {
        case 0x15d8bcu: goto label_15d8bc;
        default: break;
    }

    ctx->pc = 0x15d8b0u;

    // 0x15d8b0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x15d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d8b4: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D8B4u;
    SET_GPR_U32(ctx, 31, 0x15D8BCu);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D8B4u, 0x15D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8BCu;
label_15d8bc:
    // 0x15d8bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d8bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d8c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D8CCu;
}
