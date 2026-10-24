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

// Function: entry_00273720
// Address: 0x273720 - 0x273730
void entry_00273720_0x273720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273720_0x273720");
#endif

    switch (ctx->pc) {
        case 0x27372cu: goto label_27372c;
        default: break;
    }

    ctx->pc = 0x273720u;

    // 0x273720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273724: 0xc084964  jal         func_212590
    ctx->pc = 0x273724u;
    SET_GPR_U32(ctx, 31, 0x27372Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x273724u, 0x27372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27372Cu;
label_27372c:
    // 0x27372c: 0x0  nop
    ctx->pc = 0x27372cu;
    // NOP
    ctx->pc = 0x273730u;
}
