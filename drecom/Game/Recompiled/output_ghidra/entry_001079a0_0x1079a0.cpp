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

// Function: entry_001079a0
// Address: 0x1079a0 - 0x1079a8
void entry_001079a0_0x1079a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001079a0_0x1079a0");
#endif

    ctx->pc = 0x1079a0u;

    // 0x1079a0: 0xc041c58  jal         func_107160
    ctx->pc = 0x1079A0u;
    SET_GPR_U32(ctx, 31, 0x1079A8u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1079A0u, 0x1079A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079A8u;
}
