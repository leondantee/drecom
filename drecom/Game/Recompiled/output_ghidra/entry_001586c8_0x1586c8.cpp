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

// Function: entry_001586c8
// Address: 0x1586c8 - 0x1586d0
void entry_001586c8_0x1586c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001586c8_0x1586c8");
#endif

    ctx->pc = 0x1586c8u;

    // 0x1586c8: 0xc056268  jal         func_1589A0
    ctx->pc = 0x1586C8u;
    SET_GPR_U32(ctx, 31, 0x1586D0u);
    ctx->pc = 0x1589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589A0u, 0x1586C8u, 0x1586D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586D0u;
}
