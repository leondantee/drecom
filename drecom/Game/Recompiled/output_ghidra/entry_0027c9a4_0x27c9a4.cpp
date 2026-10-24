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

// Function: entry_0027c9a4
// Address: 0x27c9a4 - 0x27c9b8
void entry_0027c9a4_0x27c9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c9a4_0x27c9a4");
#endif

    switch (ctx->pc) {
        case 0x27c9b0u: goto label_27c9b0;
        default: break;
    }

    ctx->pc = 0x27c9a4u;

    // 0x27c9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c9a8: 0xc084964  jal         func_212590
    ctx->pc = 0x27C9A8u;
    SET_GPR_U32(ctx, 31, 0x27C9B0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C9A8u, 0x27C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9B0u;
label_27c9b0:
    // 0x27c9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c9b4: 0x0  nop
    ctx->pc = 0x27c9b4u;
    // NOP
    ctx->pc = 0x27c9b8u;
}
