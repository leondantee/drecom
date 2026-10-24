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

// Function: entry_00316258
// Address: 0x316258 - 0x316274
void entry_00316258_0x316258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316258_0x316258");
#endif

    switch (ctx->pc) {
        case 0x316260u: goto label_316260;
        default: break;
    }

    ctx->pc = 0x316258u;

    // 0x316258: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x316258u;
    SET_GPR_U32(ctx, 31, 0x316260u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x316258u, 0x316260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316260u;
label_316260:
    // 0x316260: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x316260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x316268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31626c: 0x3e00008  jr          $ra
    ctx->pc = 0x31626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31626Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316274u;
}
