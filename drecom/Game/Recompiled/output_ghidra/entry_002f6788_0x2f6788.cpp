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

// Function: entry_002f6788
// Address: 0x2f6788 - 0x2f6790
void entry_002f6788_0x2f6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6788_0x2f6788");
#endif

    ctx->pc = 0x2f6788u;

    // 0x2f6788: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2F6788u;
    SET_GPR_U32(ctx, 31, 0x2F6790u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2F6788u, 0x2F6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6790u;
}
