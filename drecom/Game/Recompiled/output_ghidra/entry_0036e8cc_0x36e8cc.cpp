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

// Function: entry_0036e8cc
// Address: 0x36e8cc - 0x36e8d4
void entry_0036e8cc_0x36e8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e8cc_0x36e8cc");
#endif

    ctx->pc = 0x36e8ccu;

    // 0x36e8cc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E8CCu;
    SET_GPR_U32(ctx, 31, 0x36E8D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E8CCu, 0x36E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8D4u;
}
