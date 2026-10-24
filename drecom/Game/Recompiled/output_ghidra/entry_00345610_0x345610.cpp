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

// Function: entry_00345610
// Address: 0x345610 - 0x345628
void entry_00345610_0x345610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345610_0x345610");
#endif

    switch (ctx->pc) {
        case 0x345618u: goto label_345618;
        default: break;
    }

    ctx->pc = 0x345610u;

    // 0x345610: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x345610u;
    SET_GPR_U32(ctx, 31, 0x345618u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x345610u, 0x345618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345618u;
label_345618:
    // 0x345618: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x345618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34561c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34561cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345620: 0x3e00008  jr          $ra
    ctx->pc = 0x345620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345628u;
}
