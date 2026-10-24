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

// Function: entry_001a4fe0
// Address: 0x1a4fe0 - 0x1a4fe8
void entry_001a4fe0_0x1a4fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fe0_0x1a4fe0");
#endif

    ctx->pc = 0x1a4fe0u;

    // 0x1a4fe0: 0xc069400  jal         func_1A5000
    ctx->pc = 0x1A4FE0u;
    SET_GPR_U32(ctx, 31, 0x1A4FE8u);
    ctx->pc = 0x1A5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5000u, 0x1A4FE0u, 0x1A4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FE8u;
}
