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

// Function: entry_001a1dc4
// Address: 0x1a1dc4 - 0x1a1dd0
void entry_001a1dc4_0x1a1dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1dc4_0x1a1dc4");
#endif

    ctx->pc = 0x1a1dc4u;

    // 0x1a1dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1dc8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1DC8u, 0x1A1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD0u;
}
