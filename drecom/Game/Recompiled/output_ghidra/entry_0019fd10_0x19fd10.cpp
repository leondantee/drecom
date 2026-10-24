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

// Function: entry_0019fd10
// Address: 0x19fd10 - 0x19fd18
void entry_0019fd10_0x19fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd10_0x19fd10");
#endif

    ctx->pc = 0x19fd10u;

    // 0x19fd10: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FD10u;
    SET_GPR_U32(ctx, 31, 0x19FD18u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FD10u, 0x19FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD18u;
}
