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

// Function: entry_00278f0c
// Address: 0x278f0c - 0x278f14
void entry_00278f0c_0x278f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278f0c_0x278f0c");
#endif

    ctx->pc = 0x278f0cu;

    // 0x278f0c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x278F0Cu;
    SET_GPR_U32(ctx, 31, 0x278F14u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x278F0Cu, 0x278F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F14u;
}
