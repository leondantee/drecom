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

// Function: entry_00201990
// Address: 0x201990 - 0x201998
void entry_00201990_0x201990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201990_0x201990");
#endif

    ctx->pc = 0x201990u;

    // 0x201990: 0xc08046c  jal         func_2011B0
    ctx->pc = 0x201990u;
    SET_GPR_U32(ctx, 31, 0x201998u);
    ctx->pc = 0x2011B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011B0u, 0x201990u, 0x201998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201998u;
}
