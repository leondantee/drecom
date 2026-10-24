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

// Function: entry_0035ad04
// Address: 0x35ad04 - 0x35ad10
void entry_0035ad04_0x35ad04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ad04_0x35ad04");
#endif

    switch (ctx->pc) {
        case 0x35ad0cu: goto label_35ad0c;
        default: break;
    }

    ctx->pc = 0x35ad04u;

    // 0x35ad04: 0xc0d6bf4  jal         func_35AFD0
    ctx->pc = 0x35AD04u;
    SET_GPR_U32(ctx, 31, 0x35AD0Cu);
    ctx->pc = 0x35AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFD0u, 0x35AD04u, 0x35AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD0Cu;
label_35ad0c:
    // 0x35ad0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x35ad10u;
}
