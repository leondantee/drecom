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

// Function: entry_0019c00c
// Address: 0x19c00c - 0x19c01c
void entry_0019c00c_0x19c00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c00c_0x19c00c");
#endif

    ctx->pc = 0x19c00cu;

    // 0x19c00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c010: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19c014: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19C014u;
    SET_GPR_U32(ctx, 31, 0x19C01Cu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19C014u, 0x19C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C01Cu;
}
