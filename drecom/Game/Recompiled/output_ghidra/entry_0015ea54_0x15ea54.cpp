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

// Function: entry_0015ea54
// Address: 0x15ea54 - 0x15ea6c
void entry_0015ea54_0x15ea54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ea54_0x15ea54");
#endif

    switch (ctx->pc) {
        case 0x15ea5cu: goto label_15ea5c;
        default: break;
    }

    ctx->pc = 0x15ea54u;

    // 0x15ea54: 0xc05b560  jal         func_16D580
    ctx->pc = 0x15EA54u;
    SET_GPR_U32(ctx, 31, 0x15EA5Cu);
    ctx->pc = 0x16D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D580u, 0x15EA54u, 0x15EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA5Cu;
label_15ea5c:
    // 0x15ea5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15ea5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ea60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ea64: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA6Cu;
}
