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

// Function: entry_002d64b4
// Address: 0x2d64b4 - 0x2d64c0
void entry_002d64b4_0x2d64b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d64b4_0x2d64b4");
#endif

    ctx->pc = 0x2d64b4u;

    // 0x2d64b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d64b8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D64B8u;
    SET_GPR_U32(ctx, 31, 0x2D64C0u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D64B8u, 0x2D64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64C0u;
}
