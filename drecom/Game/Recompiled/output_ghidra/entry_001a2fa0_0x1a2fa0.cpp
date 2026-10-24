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

// Function: entry_001a2fa0
// Address: 0x1a2fa0 - 0x1a2fac
void entry_001a2fa0_0x1a2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2fa0_0x1a2fa0");
#endif

    switch (ctx->pc) {
        case 0x1a2fa8u: goto label_1a2fa8;
        default: break;
    }

    ctx->pc = 0x1a2fa0u;

    // 0x1a2fa0: 0xc068bf4  jal         func_1A2FD0
    ctx->pc = 0x1A2FA0u;
    SET_GPR_U32(ctx, 31, 0x1A2FA8u);
    ctx->pc = 0x1A2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2FD0u, 0x1A2FA0u, 0x1A2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FA8u;
label_1a2fa8:
    // 0x1a2fa8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1a2facu;
}
