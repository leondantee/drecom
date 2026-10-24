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

// Function: entry_00213ea0
// Address: 0x213ea0 - 0x213ea4
void entry_00213ea0_0x213ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213ea0_0x213ea0");
#endif

    ctx->pc = 0x213ea0u;

    // 0x213ea0: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213EA0u;
    SET_GPR_U32(ctx, 31, 0x213EA8u);
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213EA0u, 0x213EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EA8u;
}
