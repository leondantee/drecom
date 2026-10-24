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

// Function: entry_00277500
// Address: 0x277500 - 0x277508
void entry_00277500_0x277500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277500_0x277500");
#endif

    ctx->pc = 0x277500u;

    // 0x277500: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x277500u;
    SET_GPR_U32(ctx, 31, 0x277508u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x277500u, 0x277508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277508u;
}
