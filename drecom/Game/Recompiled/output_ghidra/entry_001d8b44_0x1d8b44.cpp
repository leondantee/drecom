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

// Function: entry_001d8b44
// Address: 0x1d8b44 - 0x1d8b60
void entry_001d8b44_0x1d8b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b44_0x1d8b44");
#endif

    switch (ctx->pc) {
        case 0x1d8b4cu: goto label_1d8b4c;
        default: break;
    }

    ctx->pc = 0x1d8b44u;

    // 0x1d8b44: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D8B44u;
    SET_GPR_U32(ctx, 31, 0x1D8B4Cu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D8B44u, 0x1D8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B4Cu;
label_1d8b4c:
    // 0x1d8b4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d8b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B60u;
}
