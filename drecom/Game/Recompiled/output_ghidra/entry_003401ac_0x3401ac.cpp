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

// Function: entry_003401ac
// Address: 0x3401ac - 0x3401b4
void entry_003401ac_0x3401ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003401ac_0x3401ac");
#endif

    ctx->pc = 0x3401acu;

    // 0x3401ac: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3401ACu;
    SET_GPR_U32(ctx, 31, 0x3401B4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3401ACu, 0x3401B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401B4u;
}
