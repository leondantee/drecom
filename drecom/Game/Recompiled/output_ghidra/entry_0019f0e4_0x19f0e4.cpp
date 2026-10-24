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

// Function: entry_0019f0e4
// Address: 0x19f0e4 - 0x19f0ec
void entry_0019f0e4_0x19f0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0e4_0x19f0e4");
#endif

    ctx->pc = 0x19f0e4u;

    // 0x19f0e4: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x19F0E4u;
    SET_GPR_U32(ctx, 31, 0x19F0ECu);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x19F0E4u, 0x19F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0ECu;
}
