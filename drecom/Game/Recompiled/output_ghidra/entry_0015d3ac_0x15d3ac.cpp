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

// Function: entry_0015d3ac
// Address: 0x15d3ac - 0x15d3c4
void entry_0015d3ac_0x15d3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3ac_0x15d3ac");
#endif

    switch (ctx->pc) {
        case 0x15d3b4u: goto label_15d3b4;
        default: break;
    }

    ctx->pc = 0x15d3acu;

    // 0x15d3ac: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D3ACu;
    SET_GPR_U32(ctx, 31, 0x15D3B4u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D3ACu, 0x15D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3B4u;
label_15d3b4:
    // 0x15d3b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d3b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d3b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D3C4u;
}
