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

// Function: entry_002818e4
// Address: 0x2818e4 - 0x2818ec
void entry_002818e4_0x2818e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002818e4_0x2818e4");
#endif

    ctx->pc = 0x2818e4u;

    // 0x2818e4: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2818E4u;
    SET_GPR_U32(ctx, 31, 0x2818ECu);
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x2818E4u, 0x2818ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818ECu;
}
