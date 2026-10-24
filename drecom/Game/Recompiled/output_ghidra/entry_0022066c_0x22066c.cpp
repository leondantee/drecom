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

// Function: entry_0022066c
// Address: 0x22066c - 0x22068c
void entry_0022066c_0x22066c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022066c_0x22066c");
#endif

    switch (ctx->pc) {
        case 0x220674u: goto label_220674;
        default: break;
    }

    ctx->pc = 0x22066cu;

    // 0x22066c: 0xc0c9918  jal         func_326460
    ctx->pc = 0x22066Cu;
    SET_GPR_U32(ctx, 31, 0x220674u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x22066Cu, 0x220674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220674u;
label_220674:
    // 0x220674: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x220674u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22067c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220680: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x220680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x220684: 0x3e00008  jr          $ra
    ctx->pc = 0x220684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22068Cu;
}
