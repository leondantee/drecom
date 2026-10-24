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

// Function: entry_001f3a08
// Address: 0x1f3a08 - 0x1f3a14
void entry_001f3a08_0x1f3a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a08_0x1f3a08");
#endif

    ctx->pc = 0x1f3a08u;

    // 0x1f3a08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3a0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F3A0Cu, 0x1F3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A14u;
}
