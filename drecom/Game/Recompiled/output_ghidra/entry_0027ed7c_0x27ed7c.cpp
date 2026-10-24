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

// Function: entry_0027ed7c
// Address: 0x27ed7c - 0x27ed84
void entry_0027ed7c_0x27ed7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ed7c_0x27ed7c");
#endif

    ctx->pc = 0x27ed7cu;

    // 0x27ed7c: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x27ED7Cu;
    SET_GPR_U32(ctx, 31, 0x27ED84u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x27ED7Cu, 0x27ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED84u;
}
