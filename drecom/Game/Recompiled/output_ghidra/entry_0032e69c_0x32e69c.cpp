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

// Function: entry_0032e69c
// Address: 0x32e69c - 0x32e6a4
void entry_0032e69c_0x32e69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e69c_0x32e69c");
#endif

    ctx->pc = 0x32e69cu;

    // 0x32e69c: 0xc0cbb08  jal         func_32EC20
    ctx->pc = 0x32E69Cu;
    SET_GPR_U32(ctx, 31, 0x32E6A4u);
    ctx->pc = 0x32EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC20u, 0x32E69Cu, 0x32E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6A4u;
}
