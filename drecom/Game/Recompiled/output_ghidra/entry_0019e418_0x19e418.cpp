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

// Function: entry_0019e418
// Address: 0x19e418 - 0x19e420
void entry_0019e418_0x19e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e418_0x19e418");
#endif

    ctx->pc = 0x19e418u;

    // 0x19e418: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19E418u;
    SET_GPR_U32(ctx, 31, 0x19E420u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19E418u, 0x19E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E420u;
}
