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

// Function: entry_00332664
// Address: 0x332664 - 0x332680
void entry_00332664_0x332664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332664_0x332664");
#endif

    switch (ctx->pc) {
        case 0x33266cu: goto label_33266c;
        default: break;
    }

    ctx->pc = 0x332664u;

    // 0x332664: 0xc0cb80c  jal         func_32E030
    ctx->pc = 0x332664u;
    SET_GPR_U32(ctx, 31, 0x33266Cu);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x332664u, 0x33266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33266Cu;
label_33266c:
    // 0x33266c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33266cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x332674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x332678: 0x3e00008  jr          $ra
    ctx->pc = 0x332678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332680u;
}
