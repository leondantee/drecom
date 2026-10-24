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

// Function: entry_0035b280
// Address: 0x35b280 - 0x35b288
void entry_0035b280_0x35b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b280_0x35b280");
#endif

    ctx->pc = 0x35b280u;

    // 0x35b280: 0xc0d6d2c  jal         func_35B4B0
    ctx->pc = 0x35B280u;
    SET_GPR_U32(ctx, 31, 0x35B288u);
    ctx->pc = 0x35B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4B0u, 0x35B280u, 0x35B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B288u;
}
