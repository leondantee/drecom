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

// Function: entry_00283468
// Address: 0x283468 - 0x283474
void entry_00283468_0x283468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283468_0x283468");
#endif

    switch (ctx->pc) {
        case 0x283470u: goto label_283470;
        default: break;
    }

    ctx->pc = 0x283468u;

    // 0x283468: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x283468u;
    SET_GPR_U32(ctx, 31, 0x283470u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x283468u, 0x283470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283470u;
label_283470:
    // 0x283470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x283474u;
}
