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

// Function: entry_0021f724
// Address: 0x21f724 - 0x21f744
void entry_0021f724_0x21f724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f724_0x21f724");
#endif

    switch (ctx->pc) {
        case 0x21f72cu: goto label_21f72c;
        default: break;
    }

    ctx->pc = 0x21f724u;

    // 0x21f724: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21F724u;
    SET_GPR_U32(ctx, 31, 0x21F72Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21F724u, 0x21F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F72Cu;
label_21f72c:
    // 0x21f72c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21f72cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f738: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F744u;
}
