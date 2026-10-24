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

// Function: entry_001d9890
// Address: 0x1d9890 - 0x1d9898
void entry_001d9890_0x1d9890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9890_0x1d9890");
#endif

    ctx->pc = 0x1d9890u;

    // 0x1d9890: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D9890u;
    SET_GPR_U32(ctx, 31, 0x1D9898u);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D9890u, 0x1D9898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9898u;
}
