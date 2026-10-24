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

// Function: entry_001424ec
// Address: 0x1424ec - 0x1424f4
void entry_001424ec_0x1424ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001424ec_0x1424ec");
#endif

    ctx->pc = 0x1424ecu;

    // 0x1424ec: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x1424ECu;
    SET_GPR_U32(ctx, 31, 0x1424F4u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x1424ECu, 0x1424F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424F4u;
}
