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

// Function: entry_0034ab48
// Address: 0x34ab48 - 0x34ab50
void entry_0034ab48_0x34ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ab48_0x34ab48");
#endif

    ctx->pc = 0x34ab48u;

    // 0x34ab48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AB48u;
    SET_GPR_U32(ctx, 31, 0x34AB50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AB48u, 0x34AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB50u;
}
