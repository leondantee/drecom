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

// Function: entry_001df920
// Address: 0x1df920 - 0x1df928
void entry_001df920_0x1df920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df920_0x1df920");
#endif

    ctx->pc = 0x1df920u;

    // 0x1df920: 0xc077da4  jal         func_1DF690
    ctx->pc = 0x1DF920u;
    SET_GPR_U32(ctx, 31, 0x1DF928u);
    ctx->pc = 0x1DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF690u, 0x1DF920u, 0x1DF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF928u;
}
