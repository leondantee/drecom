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

// Function: entry_0019ec38
// Address: 0x19ec38 - 0x19ec44
void entry_0019ec38_0x19ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec38_0x19ec38");
#endif

    ctx->pc = 0x19ec38u;

    // 0x19ec38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ec3c: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19EC3Cu;
    SET_GPR_U32(ctx, 31, 0x19EC44u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19EC3Cu, 0x19EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC44u;
}
