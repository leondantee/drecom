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

// Function: entry_00325a84
// Address: 0x325a84 - 0x325a9c
void entry_00325a84_0x325a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325a84_0x325a84");
#endif

    switch (ctx->pc) {
        case 0x325a8cu: goto label_325a8c;
        default: break;
    }

    ctx->pc = 0x325a84u;

    // 0x325a84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x325A84u;
    SET_GPR_U32(ctx, 31, 0x325A8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x325A8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x325A8Cu) { return; }
    ctx->pc = 0x325A8Cu;
label_325a8c:
    // 0x325a8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x325a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325a90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x325a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x325a94: 0x3e00008  jr          $ra
    ctx->pc = 0x325A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A9Cu;
}
