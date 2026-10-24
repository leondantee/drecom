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

// Function: entry_002d516c
// Address: 0x2d516c - 0x2d5178
void entry_002d516c_0x2d516c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d516c_0x2d516c");
#endif

    ctx->pc = 0x2d516cu;

    // 0x2d516c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5170: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5170u;
    SET_GPR_U32(ctx, 31, 0x2D5178u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5170u, 0x2D5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5178u;
}
