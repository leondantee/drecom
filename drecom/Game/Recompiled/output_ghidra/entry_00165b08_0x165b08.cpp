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

// Function: entry_00165b08
// Address: 0x165b08 - 0x165b10
void entry_00165b08_0x165b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b08_0x165b08");
#endif

    ctx->pc = 0x165b08u;

    // 0x165b08: 0xc059850  jal         func_166140
    ctx->pc = 0x165B08u;
    SET_GPR_U32(ctx, 31, 0x165B10u);
    ctx->pc = 0x166140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166140u, 0x165B08u, 0x165B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B10u;
}
