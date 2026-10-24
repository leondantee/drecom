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

// Function: entry_003601d4
// Address: 0x3601d4 - 0x3601dc
void entry_003601d4_0x3601d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003601d4_0x3601d4");
#endif

    ctx->pc = 0x3601d4u;

    // 0x3601d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3601D4u;
    SET_GPR_U32(ctx, 31, 0x3601DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3601D4u, 0x3601DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601DCu;
}
