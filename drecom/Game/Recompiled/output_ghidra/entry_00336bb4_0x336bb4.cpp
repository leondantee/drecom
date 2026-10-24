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

// Function: entry_00336bb4
// Address: 0x336bb4 - 0x336bbc
void entry_00336bb4_0x336bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336bb4_0x336bb4");
#endif

    ctx->pc = 0x336bb4u;

    // 0x336bb4: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x336BB4u;
    SET_GPR_U32(ctx, 31, 0x336BBCu);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x336BB4u, 0x336BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BBCu;
}
