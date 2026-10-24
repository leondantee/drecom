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

// Function: entry_0017d84c
// Address: 0x17d84c - 0x17d854
void entry_0017d84c_0x17d84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d84c_0x17d84c");
#endif

    ctx->pc = 0x17d84cu;

    // 0x17d84c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D84Cu;
    SET_GPR_U32(ctx, 31, 0x17D854u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D84Cu, 0x17D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D854u;
}
