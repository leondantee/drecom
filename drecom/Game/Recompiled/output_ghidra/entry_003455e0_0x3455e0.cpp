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

// Function: entry_003455e0
// Address: 0x3455e0 - 0x3455e8
void entry_003455e0_0x3455e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003455e0_0x3455e0");
#endif

    ctx->pc = 0x3455e0u;

    // 0x3455e0: 0xc0d56ac  jal         func_355AB0
    ctx->pc = 0x3455E0u;
    SET_GPR_U32(ctx, 31, 0x3455E8u);
    ctx->pc = 0x355AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB0u, 0x3455E0u, 0x3455E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455E8u;
}
