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

// Function: entry_00173628
// Address: 0x173628 - 0x173640
void entry_00173628_0x173628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173628_0x173628");
#endif

    switch (ctx->pc) {
        case 0x173630u: goto label_173630;
        default: break;
    }

    ctx->pc = 0x173628u;

    // 0x173628: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x173628u;
    SET_GPR_U32(ctx, 31, 0x173630u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x173630u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173630u) { return; }
    ctx->pc = 0x173630u;
label_173630:
    // 0x173630: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173630u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173638: 0x3e00008  jr          $ra
    ctx->pc = 0x173638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173640u;
}
