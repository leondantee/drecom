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

// Function: entry_0014c5d8
// Address: 0x14c5d8 - 0x14c5e0
void entry_0014c5d8_0x14c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c5d8_0x14c5d8");
#endif

    ctx->pc = 0x14c5d8u;

    // 0x14c5d8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C5D8u;
    SET_GPR_U32(ctx, 31, 0x14C5E0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C5D8u, 0x14C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5E0u;
}
