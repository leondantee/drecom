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

// Function: entry_0013933c
// Address: 0x13933c - 0x139344
void entry_0013933c_0x13933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013933c_0x13933c");
#endif

    ctx->pc = 0x13933cu;

    // 0x13933c: 0xc04e290  jal         func_138A40
    ctx->pc = 0x13933Cu;
    SET_GPR_U32(ctx, 31, 0x139344u);
    ctx->pc = 0x138A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A40u, 0x13933Cu, 0x139344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139344u;
}
