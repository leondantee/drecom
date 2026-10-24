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

// Function: entry_00208a90
// Address: 0x208a90 - 0x208a98
void entry_00208a90_0x208a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a90_0x208a90");
#endif

    ctx->pc = 0x208a90u;

    // 0x208a90: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x208A90u;
    SET_GPR_U32(ctx, 31, 0x208A98u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x208A90u, 0x208A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A98u;
}
