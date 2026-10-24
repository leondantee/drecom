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

// Function: entry_0032e6a4
// Address: 0x32e6a4 - 0x32e6ac
void entry_0032e6a4_0x32e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e6a4_0x32e6a4");
#endif

    ctx->pc = 0x32e6a4u;

    // 0x32e6a4: 0xc0cbeb8  jal         func_32FAE0
    ctx->pc = 0x32E6A4u;
    SET_GPR_U32(ctx, 31, 0x32E6ACu);
    ctx->pc = 0x32FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAE0u, 0x32E6A4u, 0x32E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6ACu;
}
