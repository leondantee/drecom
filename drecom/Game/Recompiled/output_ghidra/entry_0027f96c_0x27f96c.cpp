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

// Function: entry_0027f96c
// Address: 0x27f96c - 0x27f974
void entry_0027f96c_0x27f96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f96c_0x27f96c");
#endif

    ctx->pc = 0x27f96cu;

    // 0x27f96c: 0xc050018  jal         func_140060
    ctx->pc = 0x27F96Cu;
    SET_GPR_U32(ctx, 31, 0x27F974u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27F96Cu, 0x27F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F974u;
}
