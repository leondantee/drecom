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

// Function: entry_0015a8b4
// Address: 0x15a8b4 - 0x15a8bc
void entry_0015a8b4_0x15a8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a8b4_0x15a8b4");
#endif

    ctx->pc = 0x15a8b4u;

    // 0x15a8b4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A8B4u;
    SET_GPR_U32(ctx, 31, 0x15A8BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A8B4u, 0x15A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8BCu;
}
