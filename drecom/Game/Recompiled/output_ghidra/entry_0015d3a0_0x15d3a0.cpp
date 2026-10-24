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

// Function: entry_0015d3a0
// Address: 0x15d3a0 - 0x15d3a8
void entry_0015d3a0_0x15d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3a0_0x15d3a0");
#endif

    ctx->pc = 0x15d3a0u;

    // 0x15d3a0: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D3A0u;
    SET_GPR_U32(ctx, 31, 0x15D3A8u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D3A0u, 0x15D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3A8u;
}
