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

// Function: entry_0035ad10
// Address: 0x35ad10 - 0x35ad18
void entry_0035ad10_0x35ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ad10_0x35ad10");
#endif

    ctx->pc = 0x35ad10u;

    // 0x35ad10: 0xc0d6bd4  jal         func_35AF50
    ctx->pc = 0x35AD10u;
    SET_GPR_U32(ctx, 31, 0x35AD18u);
    ctx->pc = 0x35AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF50u, 0x35AD10u, 0x35AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD18u;
}
