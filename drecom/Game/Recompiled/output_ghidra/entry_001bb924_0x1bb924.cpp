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

// Function: entry_001bb924
// Address: 0x1bb924 - 0x1bb92c
void entry_001bb924_0x1bb924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb924_0x1bb924");
#endif

    ctx->pc = 0x1bb924u;

    // 0x1bb924: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BB924u;
    SET_GPR_U32(ctx, 31, 0x1BB92Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BB924u, 0x1BB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB92Cu;
}
