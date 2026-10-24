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

// Function: entry_00273358
// Address: 0x273358 - 0x273368
void entry_00273358_0x273358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273358_0x273358");
#endif

    switch (ctx->pc) {
        case 0x273364u: goto label_273364;
        default: break;
    }

    ctx->pc = 0x273358u;

    // 0x273358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27335c: 0xc084964  jal         func_212590
    ctx->pc = 0x27335Cu;
    SET_GPR_U32(ctx, 31, 0x273364u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27335Cu, 0x273364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x0  nop
    ctx->pc = 0x273364u;
    // NOP
    ctx->pc = 0x273368u;
}
