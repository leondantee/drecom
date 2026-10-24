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

// Function: entry_00292ee4
// Address: 0x292ee4 - 0x292eec
void entry_00292ee4_0x292ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292ee4_0x292ee4");
#endif

    ctx->pc = 0x292ee4u;

    // 0x292ee4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292EE4u;
    SET_GPR_U32(ctx, 31, 0x292EECu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292EE4u, 0x292EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EECu;
}
