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

// Function: entry_002d3f2c
// Address: 0x2d3f2c - 0x2d3f34
void entry_002d3f2c_0x2d3f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3f2c_0x2d3f2c");
#endif

    ctx->pc = 0x2d3f2cu;

    // 0x2d3f2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3F2Cu, 0x2D3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F34u;
}
