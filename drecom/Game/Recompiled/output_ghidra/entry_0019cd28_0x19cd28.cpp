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

// Function: entry_0019cd28
// Address: 0x19cd28 - 0x19cd34
void entry_0019cd28_0x19cd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd28_0x19cd28");
#endif

    switch (ctx->pc) {
        case 0x19cd30u: goto label_19cd30;
        default: break;
    }

    ctx->pc = 0x19cd28u;

    // 0x19cd28: 0xc0848cc  jal         func_212330
    ctx->pc = 0x19CD28u;
    SET_GPR_U32(ctx, 31, 0x19CD30u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x19CD28u, 0x19CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD30u;
label_19cd30:
    // 0x19cd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19cd34u;
}
