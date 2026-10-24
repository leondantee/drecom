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

// Function: entry_0027f594
// Address: 0x27f594 - 0x27f5a0
void entry_0027f594_0x27f594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f594_0x27f594");
#endif

    ctx->pc = 0x27f594u;

    // 0x27f594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f598: 0xc084964  jal         func_212590
    ctx->pc = 0x27F598u;
    SET_GPR_U32(ctx, 31, 0x27F5A0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F598u, 0x27F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5A0u;
}
