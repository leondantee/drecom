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

// Function: entry_0027edf4
// Address: 0x27edf4 - 0x27edfc
void entry_0027edf4_0x27edf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027edf4_0x27edf4");
#endif

    ctx->pc = 0x27edf4u;

    // 0x27edf4: 0xc09fba8  jal         func_27EEA0
    ctx->pc = 0x27EDF4u;
    SET_GPR_U32(ctx, 31, 0x27EDFCu);
    ctx->pc = 0x27EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EEA0u, 0x27EDF4u, 0x27EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDFCu;
}
