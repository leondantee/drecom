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

// Function: entry_00250e54
// Address: 0x250e54 - 0x250e70
void entry_00250e54_0x250e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00250e54_0x250e54");
#endif

    switch (ctx->pc) {
        case 0x250e5cu: goto label_250e5c;
        default: break;
    }

    ctx->pc = 0x250e54u;

    // 0x250e54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250E54u;
    SET_GPR_U32(ctx, 31, 0x250E5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250E54u, 0x250E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E5Cu;
label_250e5c:
    // 0x250e5c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x250e5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250e68: 0x3e00008  jr          $ra
    ctx->pc = 0x250E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E70u;
}
