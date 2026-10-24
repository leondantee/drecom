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

// Function: entry_001a420c
// Address: 0x1a420c - 0x1a4214
void entry_001a420c_0x1a420c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a420c_0x1a420c");
#endif

    ctx->pc = 0x1a420cu;

    // 0x1a420c: 0xc068b64  jal         func_1A2D90
    ctx->pc = 0x1A420Cu;
    SET_GPR_U32(ctx, 31, 0x1A4214u);
    ctx->pc = 0x1A2D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D90u, 0x1A420Cu, 0x1A4214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4214u;
}
