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

// Function: entry_0033a430
// Address: 0x33a430 - 0x33a438
void entry_0033a430_0x33a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a430_0x33a430");
#endif

    ctx->pc = 0x33a430u;

    // 0x33a430: 0xc0ce8dc  jal         func_33A370
    ctx->pc = 0x33A430u;
    SET_GPR_U32(ctx, 31, 0x33A438u);
    ctx->pc = 0x33A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A370u, 0x33A430u, 0x33A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A438u;
}
