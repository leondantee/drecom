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

// Function: entry_00362be0
// Address: 0x362be0 - 0x362be8
void entry_00362be0_0x362be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362be0_0x362be0");
#endif

    ctx->pc = 0x362be0u;

    // 0x362be0: 0xc0d8b84  jal         func_362E10
    ctx->pc = 0x362BE0u;
    SET_GPR_U32(ctx, 31, 0x362BE8u);
    ctx->pc = 0x362E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362E10u, 0x362BE0u, 0x362BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362BE8u;
}
