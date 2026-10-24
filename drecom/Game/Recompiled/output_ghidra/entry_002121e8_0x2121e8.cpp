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

// Function: entry_002121e8
// Address: 0x2121e8 - 0x2121f8
void entry_002121e8_0x2121e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002121e8_0x2121e8");
#endif

    switch (ctx->pc) {
        case 0x2121f0u: goto label_2121f0;
        default: break;
    }

    ctx->pc = 0x2121e8u;

    // 0x2121e8: 0xc084884  jal         func_212210
    ctx->pc = 0x2121E8u;
    SET_GPR_U32(ctx, 31, 0x2121F0u);
    ctx->pc = 0x212210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212210u, 0x2121E8u, 0x2121F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121F0u;
label_2121f0:
    // 0x2121f0: 0xc08481c  jal         func_212070
    ctx->pc = 0x2121F0u;
    SET_GPR_U32(ctx, 31, 0x2121F8u);
    ctx->pc = 0x212070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212070u, 0x2121F0u, 0x2121F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121F8u;
}
