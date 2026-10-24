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

// Function: entry_0024c6f0
// Address: 0x24c6f0 - 0x24c700
void entry_0024c6f0_0x24c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c6f0_0x24c6f0");
#endif

    switch (ctx->pc) {
        case 0x24c6f8u: goto label_24c6f8;
        default: break;
    }

    ctx->pc = 0x24c6f0u;

    // 0x24c6f0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24C6F0u;
    SET_GPR_U32(ctx, 31, 0x24C6F8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24C6F0u, 0x24C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6F8u;
label_24c6f8:
    // 0x24c6f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c6fc: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    ctx->pc = 0x24c700u;
}
