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

// Function: entry_0021e794
// Address: 0x21e794 - 0x21e7a0
void entry_0021e794_0x21e794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e794_0x21e794");
#endif

    switch (ctx->pc) {
        case 0x21e79cu: goto label_21e79c;
        default: break;
    }

    ctx->pc = 0x21e794u;

    // 0x21e794: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x21E794u;
    SET_GPR_U32(ctx, 31, 0x21E79Cu);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x21E794u, 0x21E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E79Cu;
label_21e79c:
    // 0x21e79c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x21e7a0u;
}
