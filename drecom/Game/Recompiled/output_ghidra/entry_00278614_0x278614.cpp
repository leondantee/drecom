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

// Function: entry_00278614
// Address: 0x278614 - 0x27861c
void entry_00278614_0x278614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278614_0x278614");
#endif

    ctx->pc = 0x278614u;

    // 0x278614: 0xc0848cc  jal         func_212330
    ctx->pc = 0x278614u;
    SET_GPR_U32(ctx, 31, 0x27861Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x278614u, 0x27861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27861Cu;
}
