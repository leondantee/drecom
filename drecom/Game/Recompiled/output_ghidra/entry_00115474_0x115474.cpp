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

// Function: entry_00115474
// Address: 0x115474 - 0x11547c
void entry_00115474_0x115474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115474_0x115474");
#endif

    ctx->pc = 0x115474u;

    // 0x115474: 0xc0450dc  jal         func_114370
    ctx->pc = 0x115474u;
    SET_GPR_U32(ctx, 31, 0x11547Cu);
    ctx->pc = 0x114370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114370u, 0x115474u, 0x11547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11547Cu;
}
