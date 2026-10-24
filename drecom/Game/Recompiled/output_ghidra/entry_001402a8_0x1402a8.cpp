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

// Function: entry_001402a8
// Address: 0x1402a8 - 0x1402b8
void entry_001402a8_0x1402a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001402a8_0x1402a8");
#endif

    switch (ctx->pc) {
        case 0x1402b4u: goto label_1402b4;
        default: break;
    }

    ctx->pc = 0x1402a8u;

    // 0x1402a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1402ac: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1402ACu;
    SET_GPR_U32(ctx, 31, 0x1402B4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1402ACu, 0x1402B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402B4u;
label_1402b4:
    // 0x1402b4: 0x0  nop
    ctx->pc = 0x1402b4u;
    // NOP
    ctx->pc = 0x1402b8u;
}
