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

// Function: entry_0017e258
// Address: 0x17e258 - 0x17e274
void entry_0017e258_0x17e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e258_0x17e258");
#endif

    switch (ctx->pc) {
        case 0x17e260u: goto label_17e260;
        default: break;
    }

    ctx->pc = 0x17e258u;

    // 0x17e258: 0xc05f2e8  jal         func_17CBA0
    ctx->pc = 0x17E258u;
    SET_GPR_U32(ctx, 31, 0x17E260u);
    ctx->pc = 0x17CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CBA0u, 0x17E258u, 0x17E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E260u;
label_17e260:
    // 0x17e260: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17e260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e26c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E274u;
}
