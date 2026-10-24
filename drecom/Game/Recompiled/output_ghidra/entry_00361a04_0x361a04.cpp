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

// Function: entry_00361a04
// Address: 0x361a04 - 0x361a0c
void entry_00361a04_0x361a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361a04_0x361a04");
#endif

    ctx->pc = 0x361a04u;

    // 0x361a04: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x361A04u;
    SET_GPR_U32(ctx, 31, 0x361A0Cu);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x361A04u, 0x361A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A0Cu;
}
