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

// Function: entry_002803a0
// Address: 0x2803a0 - 0x2803b0
void entry_002803a0_0x2803a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002803a0_0x2803a0");
#endif

    switch (ctx->pc) {
        case 0x2803acu: goto label_2803ac;
        default: break;
    }

    ctx->pc = 0x2803a0u;

    // 0x2803a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2803a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2803a4: 0xc084964  jal         func_212590
    ctx->pc = 0x2803A4u;
    SET_GPR_U32(ctx, 31, 0x2803ACu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2803A4u, 0x2803ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803ACu;
label_2803ac:
    // 0x2803ac: 0x0  nop
    ctx->pc = 0x2803acu;
    // NOP
    ctx->pc = 0x2803b0u;
}
