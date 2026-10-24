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

// Function: entry_0033265c
// Address: 0x33265c - 0x332664
void entry_0033265c_0x33265c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033265c_0x33265c");
#endif

    ctx->pc = 0x33265cu;

    // 0x33265c: 0xc0ca9c0  jal         func_32A700
    ctx->pc = 0x33265Cu;
    SET_GPR_U32(ctx, 31, 0x332664u);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x33265Cu, 0x332664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332664u;
}
