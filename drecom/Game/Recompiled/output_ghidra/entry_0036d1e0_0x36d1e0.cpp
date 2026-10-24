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

// Function: entry_0036d1e0
// Address: 0x36d1e0 - 0x36d1e8
void entry_0036d1e0_0x36d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d1e0_0x36d1e0");
#endif

    ctx->pc = 0x36d1e0u;

    // 0x36d1e0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36D1E0u;
    SET_GPR_U32(ctx, 31, 0x36D1E8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36D1E0u, 0x36D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1E8u;
}
