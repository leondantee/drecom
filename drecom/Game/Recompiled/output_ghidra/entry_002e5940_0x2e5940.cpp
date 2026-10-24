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

// Function: entry_002e5940
// Address: 0x2e5940 - 0x2e594c
void entry_002e5940_0x2e5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5940_0x2e5940");
#endif

    ctx->pc = 0x2e5940u;

    // 0x2e5940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5944: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E5944u;
    SET_GPR_U32(ctx, 31, 0x2E594Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E5944u, 0x2E594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E594Cu;
}
