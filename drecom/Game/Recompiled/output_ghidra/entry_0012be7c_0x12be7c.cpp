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

// Function: entry_0012be7c
// Address: 0x12be7c - 0x12be84
void entry_0012be7c_0x12be7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be7c_0x12be7c");
#endif

    ctx->pc = 0x12be7cu;

    // 0x12be7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12BE7Cu;
    SET_GPR_U32(ctx, 31, 0x12BE84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12BE7Cu, 0x12BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE84u;
}
