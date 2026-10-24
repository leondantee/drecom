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

// Function: entry_001a2484
// Address: 0x1a2484 - 0x1a249c
void entry_001a2484_0x1a2484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2484_0x1a2484");
#endif

    switch (ctx->pc) {
        case 0x1a248cu: goto label_1a248c;
        default: break;
    }

    ctx->pc = 0x1a2484u;

    // 0x1a2484: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A2484u;
    SET_GPR_U32(ctx, 31, 0x1A248Cu);
    ctx->pc = 0x1A2890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2890u, 0x1A2484u, 0x1A248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A248Cu;
label_1a248c:
    // 0x1a248c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a248cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A249Cu;
}
