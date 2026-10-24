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

// Function: entry_002924c4
// Address: 0x2924c4 - 0x2924cc
void entry_002924c4_0x2924c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002924c4_0x2924c4");
#endif

    ctx->pc = 0x2924c4u;

    // 0x2924c4: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x2924C4u;
    SET_GPR_U32(ctx, 31, 0x2924CCu);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x2924C4u, 0x2924CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924CCu;
}
