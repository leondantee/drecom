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

// Function: entry_001e9f2c
// Address: 0x1e9f2c - 0x1e9f3c
void entry_001e9f2c_0x1e9f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9f2c_0x1e9f2c");
#endif

    ctx->pc = 0x1e9f2cu;

    // 0x1e9f2c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f30: 0x24a410b0  addiu       $a0, $a1, 0x10B0
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    // 0x1e9f34: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x1E9F34u;
    SET_GPR_U32(ctx, 31, 0x1E9F3Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x1E9F34u, 0x1E9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F3Cu;
}
