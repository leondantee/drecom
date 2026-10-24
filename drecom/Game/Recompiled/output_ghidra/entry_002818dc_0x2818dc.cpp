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

// Function: entry_002818dc
// Address: 0x2818dc - 0x2818e4
void entry_002818dc_0x2818dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002818dc_0x2818dc");
#endif

    ctx->pc = 0x2818dcu;

    // 0x2818dc: 0xc0a07f4  jal         func_281FD0
    ctx->pc = 0x2818DCu;
    SET_GPR_U32(ctx, 31, 0x2818E4u);
    ctx->pc = 0x281FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FD0u, 0x2818DCu, 0x2818E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818E4u;
}
