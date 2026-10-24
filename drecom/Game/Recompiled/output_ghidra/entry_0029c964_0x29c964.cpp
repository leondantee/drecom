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

// Function: entry_0029c964
// Address: 0x29c964 - 0x29c96c
void entry_0029c964_0x29c964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c964_0x29c964");
#endif

    ctx->pc = 0x29c964u;

    // 0x29c964: 0xc0848cc  jal         func_212330
    ctx->pc = 0x29C964u;
    SET_GPR_U32(ctx, 31, 0x29C96Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x29C964u, 0x29C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C96Cu;
}
