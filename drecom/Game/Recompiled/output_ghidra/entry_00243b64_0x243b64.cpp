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

// Function: entry_00243b64
// Address: 0x243b64 - 0x243b70
void entry_00243b64_0x243b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243b64_0x243b64");
#endif

    switch (ctx->pc) {
        case 0x243b6cu: goto label_243b6c;
        default: break;
    }

    ctx->pc = 0x243b64u;

    // 0x243b64: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x243B64u;
    SET_GPR_U32(ctx, 31, 0x243B6Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x243B64u, 0x243B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B6Cu;
label_243b6c:
    // 0x243b6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x243b70u;
}
