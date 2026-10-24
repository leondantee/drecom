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

// Function: entry_00211d30
// Address: 0x211d30 - 0x211d40
void entry_00211d30_0x211d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211d30_0x211d30");
#endif

    switch (ctx->pc) {
        case 0x211d38u: goto label_211d38;
        default: break;
    }

    ctx->pc = 0x211d30u;

    // 0x211d30: 0xc084884  jal         func_212210
    ctx->pc = 0x211D30u;
    SET_GPR_U32(ctx, 31, 0x211D38u);
    ctx->pc = 0x212210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212210u, 0x211D30u, 0x211D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D38u;
label_211d38:
    // 0x211d38: 0xc084774  jal         func_211DD0
    ctx->pc = 0x211D38u;
    SET_GPR_U32(ctx, 31, 0x211D40u);
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x211D38u, 0x211D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D40u;
}
