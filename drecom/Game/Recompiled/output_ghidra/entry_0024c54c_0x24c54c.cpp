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

// Function: entry_0024c54c
// Address: 0x24c54c - 0x24c554
void entry_0024c54c_0x24c54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c54c_0x24c54c");
#endif

    ctx->pc = 0x24c54cu;

    // 0x24c54c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C54Cu;
    SET_GPR_U32(ctx, 31, 0x24C554u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C54Cu, 0x24C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C554u;
}
