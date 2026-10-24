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

// Function: entry_0014c740
// Address: 0x14c740 - 0x14c758
void entry_0014c740_0x14c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c740_0x14c740");
#endif

    switch (ctx->pc) {
        case 0x14c748u: goto label_14c748;
        default: break;
    }

    ctx->pc = 0x14c740u;

    // 0x14c740: 0xc059b14  jal         func_166C50
    ctx->pc = 0x14C740u;
    SET_GPR_U32(ctx, 31, 0x14C748u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x14C740u, 0x14C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c74c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14c74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c750: 0x3e00008  jr          $ra
    ctx->pc = 0x14C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C758u;
}
