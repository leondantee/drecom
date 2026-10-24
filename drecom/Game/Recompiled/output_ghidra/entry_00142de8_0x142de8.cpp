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

// Function: entry_00142de8
// Address: 0x142de8 - 0x142df8
void entry_00142de8_0x142de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142de8_0x142de8");
#endif

    switch (ctx->pc) {
        case 0x142df4u: goto label_142df4;
        default: break;
    }

    ctx->pc = 0x142de8u;

    // 0x142de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142dec: 0xc06750c  jal         func_19D430
    ctx->pc = 0x142DECu;
    SET_GPR_U32(ctx, 31, 0x142DF4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142DECu, 0x142DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DF4u;
label_142df4:
    // 0x142df4: 0x0  nop
    ctx->pc = 0x142df4u;
    // NOP
    ctx->pc = 0x142df8u;
}
