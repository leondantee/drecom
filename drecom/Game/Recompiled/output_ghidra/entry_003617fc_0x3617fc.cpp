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

// Function: entry_003617fc
// Address: 0x3617fc - 0x361804
void entry_003617fc_0x3617fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003617fc_0x3617fc");
#endif

    ctx->pc = 0x3617fcu;

    // 0x3617fc: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x3617FCu;
    SET_GPR_U32(ctx, 31, 0x361804u);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x3617FCu, 0x361804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361804u;
}
