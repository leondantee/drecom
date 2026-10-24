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

// Function: entry_00272ec8
// Address: 0x272ec8 - 0x272ed8
void entry_00272ec8_0x272ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272ec8_0x272ec8");
#endif

    switch (ctx->pc) {
        case 0x272ed4u: goto label_272ed4;
        default: break;
    }

    ctx->pc = 0x272ec8u;

    // 0x272ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272ecc: 0xc084964  jal         func_212590
    ctx->pc = 0x272ECCu;
    SET_GPR_U32(ctx, 31, 0x272ED4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272ECCu, 0x272ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272ED4u;
label_272ed4:
    // 0x272ed4: 0x0  nop
    ctx->pc = 0x272ed4u;
    // NOP
    ctx->pc = 0x272ed8u;
}
