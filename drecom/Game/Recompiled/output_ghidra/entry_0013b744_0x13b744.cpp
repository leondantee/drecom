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

// Function: entry_0013b744
// Address: 0x13b744 - 0x13b760
void entry_0013b744_0x13b744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b744_0x13b744");
#endif

    switch (ctx->pc) {
        case 0x13b74cu: goto label_13b74c;
        default: break;
    }

    ctx->pc = 0x13b744u;

    // 0x13b744: 0xc04f890  jal         func_13E240
    ctx->pc = 0x13B744u;
    SET_GPR_U32(ctx, 31, 0x13B74Cu);
    ctx->pc = 0x13E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E240u, 0x13B744u, 0x13B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B74Cu;
label_13b74c:
    // 0x13b74c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x13b74cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b754: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13b754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b758: 0x3e00008  jr          $ra
    ctx->pc = 0x13B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B760u;
}
