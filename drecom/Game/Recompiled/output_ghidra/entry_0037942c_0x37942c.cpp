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

// Function: entry_0037942c
// Address: 0x37942c - 0x379434
void entry_0037942c_0x37942c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037942c_0x37942c");
#endif

    ctx->pc = 0x37942cu;

    // 0x37942c: 0xc0d8608  jal         func_361820
    ctx->pc = 0x37942Cu;
    SET_GPR_U32(ctx, 31, 0x379434u);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x37942Cu, 0x379434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379434u;
}
