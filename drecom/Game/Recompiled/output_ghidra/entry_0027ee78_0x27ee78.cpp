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

// Function: entry_0027ee78
// Address: 0x27ee78 - 0x27ee84
void entry_0027ee78_0x27ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ee78_0x27ee78");
#endif

    switch (ctx->pc) {
        case 0x27ee80u: goto label_27ee80;
        default: break;
    }

    ctx->pc = 0x27ee78u;

    // 0x27ee78: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x27EE78u;
    SET_GPR_U32(ctx, 31, 0x27EE80u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x27EE78u, 0x27EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE80u;
label_27ee80:
    // 0x27ee80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27ee84u;
}
