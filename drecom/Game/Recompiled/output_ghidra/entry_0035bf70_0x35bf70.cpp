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

// Function: entry_0035bf70
// Address: 0x35bf70 - 0x35bf78
void entry_0035bf70_0x35bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bf70_0x35bf70");
#endif

    ctx->pc = 0x35bf70u;

    // 0x35bf70: 0xc0d709c  jal         func_35C270
    ctx->pc = 0x35BF70u;
    SET_GPR_U32(ctx, 31, 0x35BF78u);
    ctx->pc = 0x35C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C270u, 0x35BF70u, 0x35BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF78u;
}
