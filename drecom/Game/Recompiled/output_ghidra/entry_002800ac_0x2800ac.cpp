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

// Function: entry_002800ac
// Address: 0x2800ac - 0x2800b4
void entry_002800ac_0x2800ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002800ac_0x2800ac");
#endif

    ctx->pc = 0x2800acu;

    // 0x2800ac: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2800ACu;
    SET_GPR_U32(ctx, 31, 0x2800B4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2800ACu, 0x2800B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800B4u;
}
