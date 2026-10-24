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

// Function: entry_001a4f28
// Address: 0x1a4f28 - 0x1a4f34
void entry_001a4f28_0x1a4f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4f28_0x1a4f28");
#endif

    ctx->pc = 0x1a4f28u;

    // 0x1a4f28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f2c: 0xc068b60  jal         func_1A2D80
    ctx->pc = 0x1A4F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F34u);
    ctx->pc = 0x1A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D80u, 0x1A4F2Cu, 0x1A4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F34u;
}
