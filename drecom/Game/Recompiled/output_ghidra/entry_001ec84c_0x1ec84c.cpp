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

// Function: entry_001ec84c
// Address: 0x1ec84c - 0x1ec854
void entry_001ec84c_0x1ec84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec84c_0x1ec84c");
#endif

    ctx->pc = 0x1ec84cu;

    // 0x1ec84c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EC84Cu;
    SET_GPR_U32(ctx, 31, 0x1EC854u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EC84Cu, 0x1EC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC854u;
}
