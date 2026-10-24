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

// Function: entry_0027b134
// Address: 0x27b134 - 0x27b13c
void entry_0027b134_0x27b134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b134_0x27b134");
#endif

    ctx->pc = 0x27b134u;

    // 0x27b134: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27B134u;
    SET_GPR_U32(ctx, 31, 0x27B13Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27B134u, 0x27B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B13Cu;
}
