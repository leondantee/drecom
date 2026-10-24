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

// Function: entry_001d98d4
// Address: 0x1d98d4 - 0x1d98dc
void entry_001d98d4_0x1d98d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d98d4_0x1d98d4");
#endif

    ctx->pc = 0x1d98d4u;

    // 0x1d98d4: 0xc076708  jal         func_1D9C20
    ctx->pc = 0x1D98D4u;
    SET_GPR_U32(ctx, 31, 0x1D98DCu);
    ctx->pc = 0x1D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C20u, 0x1D98D4u, 0x1D98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98DCu;
}
