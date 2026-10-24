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

// Function: entry_0037c89c
// Address: 0x37c89c - 0x37c8a4
void entry_0037c89c_0x37c89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c89c_0x37c89c");
#endif

    ctx->pc = 0x37c89cu;

    // 0x37c89c: 0xc086488  jal         func_219220
    ctx->pc = 0x37C89Cu;
    SET_GPR_U32(ctx, 31, 0x37C8A4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x37C89Cu, 0x37C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8A4u;
}
