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

// Function: entry_00284c7c
// Address: 0x284c7c - 0x284c84
void entry_00284c7c_0x284c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c7c_0x284c7c");
#endif

    ctx->pc = 0x284c7cu;

    // 0x284c7c: 0xc0ca9c0  jal         func_32A700
    ctx->pc = 0x284C7Cu;
    SET_GPR_U32(ctx, 31, 0x284C84u);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x284C7Cu, 0x284C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C84u;
}
