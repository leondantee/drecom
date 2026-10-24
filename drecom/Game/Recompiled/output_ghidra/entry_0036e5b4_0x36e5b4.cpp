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

// Function: entry_0036e5b4
// Address: 0x36e5b4 - 0x36e5bc
void entry_0036e5b4_0x36e5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e5b4_0x36e5b4");
#endif

    ctx->pc = 0x36e5b4u;

    // 0x36e5b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E5B4u;
    SET_GPR_U32(ctx, 31, 0x36E5BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E5B4u, 0x36E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5BCu;
}
