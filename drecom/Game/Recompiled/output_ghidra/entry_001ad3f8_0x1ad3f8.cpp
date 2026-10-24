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

// Function: entry_001ad3f8
// Address: 0x1ad3f8 - 0x1ad400
void entry_001ad3f8_0x1ad3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad3f8_0x1ad3f8");
#endif

    ctx->pc = 0x1ad3f8u;

    // 0x1ad3f8: 0xc06b5fc  jal         func_1AD7F0
    ctx->pc = 0x1AD3F8u;
    SET_GPR_U32(ctx, 31, 0x1AD400u);
    ctx->pc = 0x1AD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD7F0u, 0x1AD3F8u, 0x1AD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD400u;
}
