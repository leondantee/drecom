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

// Function: entry_00284c84
// Address: 0x284c84 - 0x284ca0
void entry_00284c84_0x284c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c84_0x284c84");
#endif

    switch (ctx->pc) {
        case 0x284c8cu: goto label_284c8c;
        default: break;
    }

    ctx->pc = 0x284c84u;

    // 0x284c84: 0xc0cb80c  jal         func_32E030
    ctx->pc = 0x284C84u;
    SET_GPR_U32(ctx, 31, 0x284C8Cu);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x284C84u, 0x284C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C8Cu;
label_284c8c:
    // 0x284c8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x284c8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284c94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x284c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284c98: 0x3e00008  jr          $ra
    ctx->pc = 0x284C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284CA0u;
}
