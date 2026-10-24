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

// Function: entry_00222118
// Address: 0x222118 - 0x222128
void entry_00222118_0x222118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222118_0x222118");
#endif

    ctx->pc = 0x222118u;

    // 0x222118: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x222118u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22211c: 0x26e410b0  addiu       $a0, $s7, 0x10B0
    ctx->pc = 0x22211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4272));
    // 0x222120: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 31, 0x222128u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x222120u, 0x222128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222128u;
}
