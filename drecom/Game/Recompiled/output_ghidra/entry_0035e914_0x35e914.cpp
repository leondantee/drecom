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

// Function: entry_0035e914
// Address: 0x35e914 - 0x35e920
void entry_0035e914_0x35e914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e914_0x35e914");
#endif

    switch (ctx->pc) {
        case 0x35e91cu: goto label_35e91c;
        default: break;
    }

    ctx->pc = 0x35e914u;

    // 0x35e914: 0xc0d7af4  jal         func_35EBD0
    ctx->pc = 0x35E914u;
    SET_GPR_U32(ctx, 31, 0x35E91Cu);
    ctx->pc = 0x35EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EBD0u, 0x35E914u, 0x35E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E91Cu;
label_35e91c:
    // 0x35e91c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x35e920u;
}
