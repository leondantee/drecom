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

// Function: entry_00273140
// Address: 0x273140 - 0x273150
void entry_00273140_0x273140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273140_0x273140");
#endif

    switch (ctx->pc) {
        case 0x27314cu: goto label_27314c;
        default: break;
    }

    ctx->pc = 0x273140u;

    // 0x273140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273144: 0xc084964  jal         func_212590
    ctx->pc = 0x273144u;
    SET_GPR_U32(ctx, 31, 0x27314Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x273144u, 0x27314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27314Cu;
label_27314c:
    // 0x27314c: 0x0  nop
    ctx->pc = 0x27314cu;
    // NOP
    ctx->pc = 0x273150u;
}
