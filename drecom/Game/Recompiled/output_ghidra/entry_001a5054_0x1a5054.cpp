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

// Function: entry_001a5054
// Address: 0x1a5054 - 0x1a505c
void entry_001a5054_0x1a5054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5054_0x1a5054");
#endif

    ctx->pc = 0x1a5054u;

    // 0x1a5054: 0xc0694a4  jal         func_1A5290
    ctx->pc = 0x1A5054u;
    SET_GPR_U32(ctx, 31, 0x1A505Cu);
    ctx->pc = 0x1A5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5290u, 0x1A5054u, 0x1A505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A505Cu;
}
