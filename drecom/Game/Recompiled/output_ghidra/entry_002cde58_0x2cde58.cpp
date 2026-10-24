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

// Function: entry_002cde58
// Address: 0x2cde58 - 0x2cde70
void entry_002cde58_0x2cde58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cde58_0x2cde58");
#endif

    switch (ctx->pc) {
        case 0x2cde60u: goto label_2cde60;
        default: break;
    }

    ctx->pc = 0x2cde58u;

    // 0x2cde58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2CDE58u;
    SET_GPR_U32(ctx, 31, 0x2CDE60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2CDE60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CDE60u) { return; }
    ctx->pc = 0x2CDE60u;
label_2cde60:
    // 0x2cde60: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2cde60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cde64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cde64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cde68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDE70u;
}
