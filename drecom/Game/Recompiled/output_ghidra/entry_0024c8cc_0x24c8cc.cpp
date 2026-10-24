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

// Function: entry_0024c8cc
// Address: 0x24c8cc - 0x24c8d4
void entry_0024c8cc_0x24c8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c8cc_0x24c8cc");
#endif

    ctx->pc = 0x24c8ccu;

    // 0x24c8cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C8CCu;
    SET_GPR_U32(ctx, 31, 0x24C8D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C8CCu, 0x24C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8D4u;
}
