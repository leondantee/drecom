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

// Function: entry_00328550
// Address: 0x328550 - 0x328568
void entry_00328550_0x328550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328550_0x328550");
#endif

    switch (ctx->pc) {
        case 0x328558u: goto label_328558;
        default: break;
    }

    ctx->pc = 0x328550u;

    // 0x328550: 0xc0ca1e0  jal         func_328780
    ctx->pc = 0x328550u;
    SET_GPR_U32(ctx, 31, 0x328558u);
    ctx->pc = 0x328780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328780u, 0x328550u, 0x328558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328558u;
label_328558:
    // 0x328558: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x328558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32855c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32855cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328560: 0x3e00008  jr          $ra
    ctx->pc = 0x328560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328568u;
}
